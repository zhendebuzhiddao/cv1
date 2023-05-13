#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "buzhidao.hpp"
#include <iostream>
#include<string>
using namespace cv;
using namespace std;

void xinwenbu::getContours(Mat imgDil, Mat img)
{
    
    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;

    findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
    //drawContours(img, contours, -1, Scalar(255, 0, 255), 2);

    vector<vector<Point>> conPoly(contours.size());
    vector<Rect> boundRect(contours.size());

    int numPolygons = 0; // Counter variable for number of polygons
     
    for (int i = 0; i < contours.size(); i++)
    {
        int area = contourArea(contours[i]);
        cout << area << endl;
        string objectType;

        if (area > 300)
        {
            float peri = arcLength(contours[i], true);
            approxPolyDP(contours[i], conPoly[i], 0.021 * peri, true);
            cout << conPoly[i].size() << endl;
            boundRect[i] = boundingRect(conPoly[i]);
       
            int objCor = (int)conPoly[i].size();
            //cout<<objCor<<endl;
            if (objCor == 3) { objectType = "3"; }
            else if (objCor == 4)
            {
                float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
                cout << aspRatio << endl;
                if (aspRatio> 0.95 && aspRatio< 1.05){ objectType = "4"; }
                else { objectType = "4";}
            }
            if (objCor == 5) { objectType = "5";}
            if (objCor == 6) { objectType = "6";}
            if (objCor == 7) { objectType = "7";}
            if (objCor == 8) { objectType = "8";}
            if ((objCor ==9)||(objCor == 10)) { objectType = "10s"; }
            else if (objCor > 11) { objectType = "Circle"; }

            numPolygons++; // Increment the counter for each polygon detected

            drawContours(img, conPoly, i, Scalar(255, 0, 255), 2);
            rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);
            //string objCor = to_string(objCor); 
            putText(img, objectType, { boundRect[i].x,boundRect[i].y - 5 }, FONT_HERSHEY_PLAIN,1, Scalar(0, 69, 255), 2);
        }
    }

    cout << "Number of polygons: " << numPolygons << endl; // Print the total number of polygons detected 
}

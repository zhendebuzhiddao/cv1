// // #include <iostream>
// // #include <cstdio>
// // #include <vector>
// // #include <opencv2/opencv.hpp>
// // #include "tlib.hpp"
#define XWb ShapeDetector 
#define xWb shapeDetector 
#define xwb detectShapes
// // using namespace std;
// // using namespace cv;

// // int main() {
     
// //     // string path = "Resources/shapes.png";
// // 	// Mat img = imread(path);
// // 	// Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;

// // 	// // Preprocessing
// // 	// cvtColor(img, imgGray, COLOR_BGR2GRAY);
// // 	// GaussianBlur(imgGray, imgBlur, Size(3, 3), 3, 0);
// // 	// Canny(imgBlur, imgCanny, 25, 75);
// // 	// Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
// // 	// dilate(imgCanny, imgDil, kernel);

// // 	// getContours(imgDil,img);

// // 	// imshow("Image",image );
// // 	// //imshow("Image Gray", imgGray);
// // 	// //imshow("Image Blur", imgBlur);
// // 	// //imshow("Image Canny", imgCanny);
// // 	// //imshow("Image Dil", imgDil);

// // 	// waitKey(0);
// //     // return 0;
// // }
// // #include <opencv2/imgcodecs.hpp>
// // #include <opencv2/highgui.hpp>
// // #include <opencv2/imgproc.hpp>
// // #include <iostream>

// // using namespace cv;
// // using namespace std;

// // void getContours(Mat imgDil, Mat img) {
    
// //     vector<vector<Point>> contours;
// //     vector<Vec4i> hierarchy;

// //     findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
// //     //drawContours(img, contours, -1, Scalar(255, 0, 255), 2);

// //     vector<vector<Point>> conPoly(contours.size());
// //     vector<Rect> boundRect(contours.size());
     
// //     for (int i = 0; i < contours.size(); i++)
// //     {
// //         int area = contourArea(contours[i]);
// //         cout << area << endl;
// //         string objectType;

// //         if (area > 1000)
// //         {
// //             float peri = arcLength(contours[i], true);
// //             approxPolyDP(contours[i], conPoly[i], 0.01407 * peri, true);
// //             cout << conPoly[i].size() << endl;
// //             boundRect[i] = boundingRect(conPoly[i]);
       
// //             int objCor = (int)conPoly[i].size();

// //             if (objCor == 3) { objectType = "Triangle"; }
// //             else if (objCor == 4)
// //             {
// //                 float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
// //                 cout << aspRatio << endl;
// //                 if (aspRatio> 0.95 && aspRatio< 1.05){ objectType = "Square"; }
// //                 else { objectType = "Rectangle";}
// //             }
// // 			if (objCor == 5) { objectType = "Pentagon";}
// // 			if (objCor == 6) { objectType = "Hexagon";}
// // 			if (objCor == 7) { objectType = "Heptagon";}
// // 			if (objCor == 8) { objectType = "Octagon";}
// //             if (objCor == 10) { objectType = "Pentagram"; }
// //             else if (objCor > 11) { objectType = "Circle"; }

// //             drawContours(img, conPoly, i, Scalar(255, 0, 255), 2);
// //             rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);
// //             putText(img, objectType, { boundRect[i].x,boundRect[i].y - 5 }, FONT_HERSHEY_PLAIN,1, Scalar(0, 69, 255), 2);
// //         }
// //     }
// // }

// // int main() {
     
// //     string path = "/home/buzhidao/Downloads/1.jpg";
// //     Mat img;
// //     img = imread(path);
    
// //     Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;

// //     // Preprocessing
// //     if(img.empty()){
// //         cout<<"wu"<<endl;
// //     }
// //     else{
// //         cout<<"you"<<endl;
// //     }
// //     cvtColor(img, imgGray, COLOR_BGR2GRAY);
// //     GaussianBlur(imgGray, imgBlur, Size(3, 3), 3, 0);
// //     Canny(imgBlur, imgCanny, 25, 75);
// //     Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
// //     dilate(imgCanny, imgDil, kernel);
// // //      Mat src; // source image
// // //  Mat denoised; // denoised image
// //  Mat dst; // destination image
// //  Mat kernel;
// // //Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5)); // structuring element
// // int MORPH_OPEN;
// // fastNlMeansDenoising(src, denoised);
// //  morphologyEx(denoised, dst, MORPH_OPEN, kernel);
// //     Mat scr;
// //     int argc;
// //      char** argv;
     
// //      if (src.empty()) {
// //          printf("could not load image...\n");
// //          return -1;
// //      }

    
// //     //  Mat dst;
// //     // Mat fastNlMeansDenoisingColored;
// //     fastNlMeansDenoisingColored(src, dst, 10, 10, 7, 21);
// //     getContours(imgDil,img);

// //     imshow("Image" ,img);
// //      imshow("input", src);
// //      imshow("result", dst);
// //     //imshow("Image Gray", imgGray);
// //     //imshow("Image Blur", imgBlur);
// //     //imshow("Image Canny", imgCanny);
// //     //imshow("Image Dil", imgDil);
// // #include <opencv2/imgcodecs.hpp>
// // #include <opencv2/highgui.hpp>
// // #include <opencv2/imgproc.hpp>
// // #include <opencv2/opencv.hpp>
// // #include <iostream>

// // using namespace cv;
// // using namespace std;

// // void getContours(Mat imgDil, Mat img) {

// //     vector<vector<Point>> contours;
// //     vector<Vec4i> hierarchy;

// //     findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

// //     vector<vector<Point>> conPoly(contours.size());
// //     vector<Rect> boundRect(contours.size());

// //     for (int i = 0; i < contours.size(); i++)
// //     {
// //         int area = contourArea(contours[i]);
// //         if (area > 1000)
// //         {
// //             float peri = arcLength(contours[i], true);
// //             approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);
// //             boundRect[i] = boundingRect(conPoly[i]);

// //             int objCor = (int)conPoly[i].size();
// //             string objectType;

// //             if (objCor == 3) { objectType = "Triangle"; }
// //             else if (objCor == 4)
// //             {
// //                 float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
// //                 if (aspRatio > 0.95 && aspRatio < 1.05){ objectType = "Square"; }
// //                 else { objectType = "Rectangle";}
// //             }
// //             else if (objCor == 5) { objectType = "Pentagon"; }
// //             else if (objCor == 6) { objectType = "Hexagon"; }
// //             else if (objCor == 7) { objectType = "Heptagon"; }
// //             else if (objCor == 8) { objectType = "Octagon"; }
// //             else if (objCor == 10) { objectType = "Pentagram"; }
// //             else if (objCor > 11) { objectType = "Circle"; }
// //             else { continue; }

// //             drawContours(img, conPoly, i, Scalar(255, 0, 255), 2);
// //             rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 2);
// //             putText(img, objectType, { boundRect[i].x,boundRect[i].y - 5 }, FONT_HERSHEY_PLAIN,1, Scalar(0, 69, 255), 2);
// //         }
// //     }
// // }

// // int main() {

// //     string path = "/home/buzhidao/Downloads/1.jpg";
// //     Mat img, imgGray, imgBlur, imgCanny, imgDil;

// //     // Load the image
// //     img = imread(path);

// //     // Check if the image has been loaded successfully
// //     if(img.empty()){
// //         cout << "Failed to load the image" << endl;
// //         return -1;
// //     }

// //     // Preprocess the image
// //     cvtColor(img, imgGray, COLOR_BGR2GRAY);
// //     GaussianBlur(imgGray, imgBlur, Size(3, 3), 3, 0);
// //     fastNlMeansDenoising(imgBlur, imgBlur, 10, 7, 21);
// //     Canny(imgBlur, imgCanny, 25, 75);
// //     dilate(imgCanny, imgDil, getStructuringElement(MORPH_RECT, Size(3, 3)));

// //     // Get the contours and identify the variables of the polygons
// //     getContours(imgDil, img);

// //     // Display the output
// //     imshow("Image", img);
// //     waitKey(0);
// //     return 0;
// // }
// // #include <opencv2/imgcodecs.hpp>
// // #include <opencv2/highgui.hpp>
// // #include <opencv2/imgproc.hpp>
// // #include <iostream>

// // using namespace cv;
// // using namespace std;

// // void getContours(Mat imgDil, Mat img) {

// //     vector<vector<Point>> contours;
// //     vector<Vec4i> hierarchy;

// //     findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
// //     //drawContours(img, contours, -1, Scalar(255, 0, 255), 2);

// //     vector<vector<Point>> conPoly(contours.size());
// //     vector<Rect> boundRect(contours.size());
     
// //     for (int i = 0; i < contours.size(); i++)
// //     {
// //         int area = contourArea(contours[i]);
// //         cout << area << endl;
// //         string objectType;

// //         if (area > 1000)
// //         {
// //             float peri = arcLength(contours[i], true);
// //             approxPolyDP(contours[i], conPoly[i], 0.025 * peri, true);
// //             cout << conPoly[i].size() << endl;
// //             boundRect[i] = boundingRect(conPoly[i]);
       
// //             int objCor = (int)conPoly[i].size();

// //             if (objCor == 3) { objectType = "Triangle"; }
// //             else if (objCor == 4)
// //             {
// //                 float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
// //                 cout << aspRatio << endl;
// //                 if (aspRatio> 0.95 && aspRatio< 1.05){ objectType = "Square"; }
// //                 else { objectType = "Rectangle";}
// //             }
// //             if (objCor == 5) { objectType = "Pentagon";}
// //             if (objCor == 6) { objectType = "Hexagon";}
// //             if (objCor == 7) { objectType = "Heptagon";}
// //             if (objCor == 8) { objectType = "Octagon";}
// //             if (objCor == 10) { objectType = "Pentagram"; }
// //             else if (objCor > 11) { objectType = "Circle"; }

// //             drawContours(img, conPoly, i, Scalar(255, 0, 255), 2);
// //             rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);
// //             putText(img, objectType, { boundRect[i].x,boundRect[i].y - 5 }, FONT_HERSHEY_PLAIN,1, Scalar(0, 69, 255), 2);
// //         }
// //     }
// // }

// // void removeNoise(Mat img, Mat &result) {
// //     Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;

// //     cvtColor(img, imgGray, COLOR_BGR2GRAY);
// //     GaussianBlur(imgGray, imgBlur, Size(3, 3), 3, 0);
// //     Canny(imgBlur, imgCanny, 25, 75);
// //     Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
// //     dilate(imgCanny, imgDil, kernel);
// //     erode(imgDil, imgErode, kernel);

// //     result = imgErode;
// // }

// // int main() {
     
// //     // string path = "/home/buzhidao/Downloads/1.jpg";
// //     // Mat img;
// //     // Mat result;
// //     // //Mat imgErode;
// //     // img = imread(path);
// //     // Mat imgProcessed, imgContours;

// //     // // Preprocessing
// //     // if(img.empty()){
// //     //     cout<<"wu"<<endl;
   
// //     // }
// //     // else{
// //     //     cout<<"you"<<endl;
// //     // }

// //     // // Noise removal
    
// //     // imgProcessed = removeNoise(img,result);

// //     // // Contour detection
// //     // getContours(imgProcessed, imgContours);
// //     string path = "/home/buzhidao/Downloads/3.jpg";
// //     Mat img;
// //     Mat imgProcessed, imgContours;
// //     img = imread(path);
// //     Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;

// //     // Preprocessing
// //     cvtColor(img, imgGray, COLOR_BGR2GRAY);
// //     Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
// //     erode(imgGray, imgErode, kernel); 
// //     medianBlur(imgErode, imgBlur, 9); 
// //     Canny(imgBlur, imgCanny, 25, 75);
// //     kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
// //     dilate(imgCanny, imgDil, kernel);

// //     getContours(imgDil,img);

// //     imshow("Image" ,img);

// //     // Show the output
// //     //imshow("Original Image", img);
// //     //imshow("Processed Image", imgProcessed);
// //     //imshow("Contours Image", imgContours);
// //     waitKey(0);

// //     return 0;
// // }


// // void getContours(Mat imgDil, Mat img) {

// //     vector<vector<Point>> contours;
// //     vector<Vec4i> hierarchy;

// //     findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

// //     vector<vector<Point>> conPoly(contours.size());
// //     vector<Rect> boundRect(contours.size());
     
// //     for (int i = 0; i < contours.size(); i++)
// //     {
// //         int area = contourArea(contours[i]);
// //         if (area > 500)
// //         {
// //             float peri = arcLength(contours[i], true);
// //             approxPolyDP(contours[i], conPoly[i], 0.026 * peri, true);
// //             boundRect[i] = boundingRect(conPoly[i]);
       
// //             int objCor = (int)conPoly[i].size();
// //             string objectType;

// //             if (objCor == 3) { objectType = "3"; }
// //             else if (objCor == 4)
// //             {
// //                 float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
// //                 if (aspRatio> 0.95 && aspRatio< 1.05){ objectType = "4"; }
// //                 else { objectType = "4";}
// //             }
// //             else if (objCor == 5) { objectType = "5";}
// //             else if (objCor == 6) { objectType = "6";}
// //             else if (objCor == 7) { objectType = "7";}
// //             else if (objCor == 8) { objectType = "8";}
// //             else if (objCor == 10) { objectType = "10s"; }
// //             else if (objCor > 11) { objectType = "Circle"; }

// //             drawContours(img, conPoly, i, Scalar(255, 0, 255), 2);
// //             rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);
// //             putText(img, objectType, { boundRect[i].x,boundRect[i].y - 5 }, FONT_HERSHEY_PLAIN,1, Scalar(0, 69, 255), 2);
// //         }
// //     }
// // }

// //using namespace xinwenbu;


// // void getContours(Mat imgDil, Mat img) {

// //     vector<vector<Point>> contours;
// //     vector<Vec4i> hierarchy;

// //     findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
// //     //drawContours(img, contours, -1, Scalar(255, 0, 255), 2);

// //     vector<vector<Point>> conPoly(contours.size());
// //     vector<Rect> boundRect(contours.size());

// //     int numPolygons = 0; // Counter variable for number of polygons
     
// //     for (int i = 0; i < contours.size(); i++)
// //     {
// //         int area = contourArea(contours[i]);
// //         cout << area << endl;
// //         string objectType;

// //         if (area > 500)
// //         {
// //             float peri = arcLength(contours[i], true);
// //             approxPolyDP(contours[i], conPoly[i], 0.026 * peri, true);
// //             cout << conPoly[i].size() << endl;
// //             boundRect[i] = boundingRect(conPoly[i]);
       
// //             int objCor = (int)conPoly[i].size();
// //             //cout<<objCor<<endl;
// //             if (objCor == 3) { objectType = "3"; }
// //             else if (objCor == 4)
// //             {
// //                 float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
// //                 cout << aspRatio << endl;
// //                 if (aspRatio> 0.95 && aspRatio< 1.05){ objectType = "4"; }
// //                 else { objectType = "4";}
// //             }
// //             if (objCor == 5) { objectType = "5";}
// //             if (objCor == 6) { objectType = "6";}
// //             if (objCor == 7) { objectType = "7";}
// //             if (objCor == 8) { objectType = "8";}
// //             if ((objCor ==9)||(objCor == 10)) { objectType = "10s"; }
// //             else if (objCor > 11) { objectType = "Circle"; }

// //             numPolygons++; // Increment the counter for each polygon detected

// //             drawContours(img, conPoly, i, Scalar(255, 0, 255), 2);
// //             rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);
// //             //string objCor = to_string(objCor); 
// //             putText(img, objectType, { boundRect[i].x,boundRect[i].y - 5 }, FONT_HERSHEY_PLAIN,1, Scalar(0, 69, 255), 2);
// //         }
// //     }

// //     cout << "Number of polygons: " << numPolygons << endl; // Print the total number of polygons detected
// // }
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
#include<string>
#include "buzhidao.hpp"
// #include"headline.hpp"
// #include "findcounters.hpp"

//int main() {
    
//}    
// using namespace cv;
// using namespace std;

// #define WINDOWS_NAME "混合图像"
 
 
 
// cv::Mat img1 = cv::imread("/home/buzhidao/Downloads/new/4Q.jpg", 1);//
// cv::Mat gray1,gray2,addWeightMat;
// cv::Mat result2;
// cv::Mat subMat= cv::Mat::zeros(img1.size(), CV_8UC1);
// cv::Mat purpleMat;//二值图像
// cv::Mat purpleToMorph;
 
// int pThreshold = 80;
// int pContrast =  12;


// void onThresholdValueChange(int ,void* tempMat)
// {
//     cv::Mat mat2 = *(cv::Mat*)tempMat;
//     cv::Mat mat1 = mat2.clone();
//     cv::Mat gray1;
//     cv::cvtColor(mat1,gray1,COLOR_BGR2GRAY);
 
//     for(int i = 0 ; i < img1.rows; i ++)
//     {
//         for(int j = 0 ; j < img1.cols; j ++)
//         {
            
//             if(purpleToMorph.at<uchar>(i,j) == 255)
//             {
//                 float alpha = gray1.at<uchar>(i, j) - (float)pThreshold;
//                 if(alpha < 0) alpha = 0;
//     //            float b = mat1.at<cv::Vec3b>(i, j)[0];
//                 float g = mat1.at<cv::Vec3b>(i, j)[1];
//     //            float r = mat1.at<cv::Vec3b>(i, j)[2];
//                 g *= 1 + (alpha / 256.0) * pContrast;
//                 if(g > 255)
//                     g = 255;
//                 mat1.at<cv::Vec3b>(i, j)[1] = g;
//             }
//         }
//     }
 
//     imshow(WINDOWS_NAME,mat1);
 
// }
 
 
// void onContrastValueChange(int ,void* tempMat)
// {
 
//     cv::Mat mat2 = *(cv::Mat*)tempMat;
//     cv::Mat mat1 = mat2.clone();
//     cv::Mat gray1;
//     cv::cvtColor(mat1,gray1,COLOR_BGR2GRAY);
 
//     for(int i = 0 ; i < mat1.rows; i ++)
//     {
//         for(int j = 0 ; j < mat1.cols; j ++)
//         {
//             if(purpleToMorph.at<uchar>(i,j) == 255)
//             {
//                 float alpha = gray1.at<uchar>(i, j) - (float)pThreshold;
//                 if(alpha < 0) alpha = 0;
//     //            float b = mat1.at<cv::Vec3b>(i, j)[0];
//                 float g = mat1.at<cv::Vec3b>(i, j)[1];
//     //            float r = mat1.at<cv::Vec3b>(i, j)[2];
//                 g *= 1 + (alpha / 256.0) * pContrast;
// //                g += 30 + (alpha / 100.0) * pContrast;
//                 if(g > 255)
//                     g = 255;
//                 mat1.at<cv::Vec3b>(i, j)[1] = g;
//             }
//         }
//     }
 
//     imwrite("../TestChangeColor/result1.jpg",mat1);
//     imshow(WINDOWS_NAME,mat1);
// }
 
// void testChangeColor()
// {
 
//     //cv::resize(img1,img1,Size(400,400));
//     namedWindow("src",WINDOW_AUTOSIZE);
//     imshow("src",img1);
//     cv::Mat baseMat = cv::Mat::zeros(img1.size(), CV_8UC3);
//     /*识别出紫色区域：RGB转HSV--->HSV空间能够非常直观的表达色彩的明暗，色调，以及鲜艳程度
//      *
//      * */
//     cv::Mat hsvMat;
//     cv::cvtColor(img1,hsvMat,COLOR_RGB2HSV);
//     cv::cvtColor(img1,gray1,COLOR_BGR2GRAY);
 
//     imshow("hsv",hsvMat);
//     namedWindow("gray",WINDOW_AUTOSIZE);
//     imshow("gray",gray1);
//     Scalar lowPurple = Scalar(0, 0, 0);//紫色对应的HSV最小值Scalar(125, 43, 46)
//     Scalar highPurple = Scalar(225, 255, 70);//紫色对应的HSV最大值(155, 255, 255)
 
//     cv::inRange(hsvMat,lowPurple,highPurple,purpleMat);
 
 
//     cv::Mat kernel = getStructuringElement(MORPH_RECT,Size(2,2),Point(-1,-1));
//     morphologyEx(purpleMat,purpleToMorph,MORPH_OPEN,kernel,Point(-1,-1));
 
 
//     //cv::resize(purpleToMorph,purpleToMorph,Size(400,400));
//     namedWindow("purple",WINDOW_AUTOSIZE);
//     imshow("purple",purpleToMorph);
 
//     /*
//      * int createTrackbar
//      * (
//         const string& trackerbarname, //创建滑动条的名字
//         const string winname, //所在窗口的名字
//         int* value, //一个指向整型的指针，表示滑块的位置，在创建时，滑块的初始位置就是该变量当前的值。
//         int count, //滑块可以达到的最大位置的值。滑块最小位置的值始终为0
//         TrackbarCallback onChange=0, //这个参数和回调函数有关，这是一个指向回调函数地址的指针，当滑动条上位置改变的时候，回调函数就会再次执行，
//         void* userdata=0//用户传给回调函数的数据，用来处理轨迹条事件。如果使用的value实参是全局变量，可以不去管userdata参数。
//         );
// */
//     namedWindow(WINDOWS_NAME,WINDOW_AUTOSIZE);//createTrackbar之前定义才能出滑块
//     createTrackbar("Threshold Value",WINDOWS_NAME,&pThreshold,255,onThresholdValueChange,&img1);
//     onThresholdValueChange(pThreshold,&img1);
 
//     createTrackbar("Contrast Value",WINDOWS_NAME,&pContrast,255,onContrastValueChange,&img1);
//     onContrastValueChange(pContrast,&img1);
 
//     cv::waitKey(0);
 
// }

// int main() {
//     testChangeColor();
//     xinwenbu v;
//     string path = "/home/buzhidao/Downloads/new/5.jpg";
//     Mat img;
//     img = imread(path);
    
//     Mat imgGray, imgCanny, imgDil;

//     // Preprocessing
//     cvtColor(img, imgGray, COLOR_BGR2GRAY);

//     int threshold_value = 1;
//     int threshold_type = THRESH_BINARY;
//     threshold(imgGray, imgGray, threshold_value, 155,THRESH_TOZERO);
    
//     morphologyEx(imgGray,img,MORPH_CLOSE,getStructuringElement(MORPH_RECT, Size(3, 3)));
//     morphologyEx(img,img,MORPH_OPEN, getStructuringElement(MORPH_RECT, Size(3, 3)));
//     GaussianBlur(img, img, Size(3, 3), 3);

//     //Mat imgCanny;
//     Canny(img, imgCanny, 25, 75);

//     //Mat imgDil;
//     dilate(imgCanny, imgDil, getStructuringElement(MORPH_RECT, Size(3, 3)));

//     v.getContours(imgDil, img);

//     imshow("Image", img);
//     waitKey(0);
//      return 0;}
// // int main() {
     
//     // string path = "/home/buzhidao/1/1.jpg";

//     // // Noise removal
    
//     // imgProcessed = removeNoise(img,result);

//     // // Contour detection
//     // getContours(imgProcessed, imgContours);
//     xinwenbu v;
//     string path = "/home/buzhidao/1/1Q.jpg";
//     Mat img;
//     Mat imgProcessed, imgContours;
//     img = imread(path);
//     Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;

//     // Preprocessing
//     
//     Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
//     erode(img, imgErode, kernel); 
//     medianBlur(imgErode, imgBlur, 9); 
    
//     Canny(imgBlur, imgCanny, 25, 75);
//     kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
//     dilate(imgCanny, imgDil, kernel);
    

//     v.getContours(imgDil,img);

//     imshow("Image" ,img);

//     // Show the output
//     //imshow("Original Image", img);
//     //imshow("Processed Image", imgProcessed);
//     //imshow("Contours Image", imgContours);
//     waitKey(0);

//     return 0;
// }
int main() {
    
    //XWb xWb("/home/buzhidao/high/9/9Q.jpg"); 
    //cvtColor(img, imgGray, COLOR_BGR2GRAY);
//     //cvtColor(img, imgGray, COLOR_BGR2GRAY);
//     //int threshold_value = 2;
//     //int threshold_type = THRESH_BINARY;
//     //threshold(imgGray, imgGray, threshold_value, 155,THRESH_TOZERO);
//     //morphologyEx(imgGray,img,MORPH_CLOSE,getStructuringElement(MORPH_RECT, Size(3, 3)));    
//     //morphologyEx(img,img,MORPH_OPEN, getStructuringElement(MORPH_RECT, Size(3, 3)));
//     //GaussianBlur(img, img, Size(3, 3), 3);
//      //Mat img;
//      //Mat result;
//     // //Mat imgErode;
//     // img = imread(path);
//      Mat imgProcessed, imgContours;

//     // // Preprocessing
//     // if(img.empty()){
//     //     cout<<"wu"<<endl;
   
//     // }
//     // else{
//     //     cout<<"you"<<endl;
//     // }

    // xWb.xwb();
    // waitKey(0);
    // return 0;}
string path = "/home/buzhidao/high/21/21Q.jpg";
    Mat img;
    Mat imgProcessed, imgContours;
    img = imread(path);
    Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;

    // Preprocessing
    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
    //erode(imgGray, imgErode, kernel);
    Mat imgMor;
    xinwenbu v;
    //threshold(imgGray,imgGray,170,225,THRESH_BINARY);
    // morphologyEx(img,imgMor,MORPH_ERODE,kernel);
    // imshow("1",imgMor);
    // morphologyEx(imgMor,imgMor,MORPH_DILATE,kernel);
    // imshow("2",imgMor);
    // morphologyEx(img,imgMor,MORPH_ERODE,kernel);
    // //通道分离
    // imshow("2",imgMor);
    // morphologyEx(img,imgMor,MORPH_DILATE,kernel);
    // imshow("3",imgMor);
    // morphologyEx(img,imgMor,MORPH_CLOSE,kernel);
    // morphologyEx(img,imgMor,MORPH_OPEN,kernel);
    //imshow("4",imgMor);
    medianBlur(img, imgMor, 5);
    
    //GaussianBlur(imgMor,imgMor,Size(3,3),1);
    //GaussianBlur(img,img,Size(3, 3),3);
    //morphologyEx(img,img,MORPH_GRADIENT,kernel);
    //medianBlur(img, img, 11);
    //imshow("Processed Image", imgMor);
    Canny(imgMor, imgCanny, 70, 100);
    imshow("Original Image", imgCanny);
    dilate(imgCanny, imgDil, kernel);

    v.getContours(imgDil,img);

    imshow("Image" ,img);

    // Show the output
    //imshow("Original Image", img);
    //imshow("Processed Image", imgGray);
    //imshow("Contours Image", imgContours);
    waitKey(0);

    return 0;}
// // #include <iostream>
// // #include <cstdio>
// // #include <vector>
// // #include <opencv2/opencv.hpp>
// // #include "tlib.hpp"
#define XWb ShapeDetector 
#define xWb shapeDetector 
#define xwb detectShapes

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
#include<string>
#include "buzhidao.hpp"


int main() {
    
    
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

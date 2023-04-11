/////// TO DRAW SHAPE AND IMAGES  IN OPENCV ////////////////


// how to import images ,vedios and veb cam
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;


void main()
{

	// CREATING BLANK IMAGE

	Mat img(512, 512, CV_8UC3, Scalar(0,0,0));
	/*
	
	 (512,512) == size of screen 
	 (cv_8uc3) == 8bits unsigned whith 3 chanells
	 (scalar)  ==  used to define the color 
	 (25,0,0)  == code for blue color
	 (25,255,255)  == code for white color
	 (0,69,255) == code for orange color
	 (0,0,0)  == code for black color


	 this will print a purple screen 
	
	*/
//	circle(img, Point(256, 256),155,Scalar(255, 255, 255),10); 
	// point == origin point with coordinates for circle of 155 size of  blacl color
	// this will simply create a white circle on a black screen  with thickness == 10
	circle(img, Point(256, 256), 155, Scalar(255, 255, 255), FILLED);
	// this will simply create a white circle on a black screen  FULLY FILLED

//	rectangle(img, Point(130, 226), Point(382, 286), Scalar(225,0,0),3);
	// this will simply create a  rectangle of blue color inside white circle on a black screen  FULLY FILLED with thickness 3

	rectangle(img, Point(130, 226), Point(382, 286), Scalar(225, 0, 0), FILLED);
	// this will simply create a  rectangle of blue color filled inside white circle on a black screen  FULLY FILLED 

	line(img, Point(130, 296), Point(382, 296), Scalar(255,0,0, 2));
	// this will simply create a line of blue color with thickness 2
	// Point(130, 296) --> starting point
	//Point(382, 296) --> ending point 

	putText(img, "sarthak srivastava", Point(127, 262), FONT_HERSHEY_DUPLEX,0.85,Scalar(0,69,255),2);
	// this will put text inside the box from point int font in color orange with thickness 2

	//imshow..{to show image} ("picture...{name of imshow}", img...{file});
	imshow("picture", img);
	



	waitKey(0);

}


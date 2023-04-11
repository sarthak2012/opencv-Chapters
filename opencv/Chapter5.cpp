/////// TO DRAW WRAP IMAGE  IN OPENCV ////////////////

// to show the image as an top view

#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

float w = 250, h = 350;
Mat Matrix,imgwarp;
void main()
{
	 
	string path = "Resources/cards.jpg";
	Mat img = imread(path);

	Point2f kingsource[4] = { {529,142},{771,190},{405,395},{674,457} };
	// floating point king source with its all 4 points or coordinates

	Point2f kingdestination[4] = { {0.0f,0.0f},{w,0.0f},{0.0f,h},{w,h} };
	// floating point king destination with its all 4 points or coordinates

	Matrix = getPerspectiveTransform(kingsource, kingdestination);
	warpPerspective(img, imgwarp, Matrix, Point(w, h));

	// you can do the same for all the card on it and you can source by openning pic in paint and then getting its accurate coordinate at the lower left coordinate

	for (int i =0;i<4;i++)
	{
	
		circle(img, kingsource[i],10,Scalar(0,0,255),FILLED);
		// CODE TO PUT RED DOTS AT THE CORNERS OF THE KING CARD IN IMAGE   
		// ALWAYS PUT IT AFTER THE WORP PERSEPECTIVE 

	}
	
	
	imshow("image", img);
	imshow("image warp1", imgwarp);

	waitKey(0);
}
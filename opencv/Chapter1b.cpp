// how to import images ,vedios and veb cam
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

// ///// code to import the web cam /////
void main()
{
	
	VideoCapture cap(0);
	// put 0 if you have only one web cam and 1 if multiple cam
	Mat img;


	while (true)
	{
		

		cap.read(img);
		imshow("picture", img);
		waitKey(1);
	}




}
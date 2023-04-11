//// how to import images ,vedios and veb cam
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

///////// code to import the image //////////////////////
void main()
{
	// creating path for image
	string path = "Resources/test1.jpg";
	// reading image from the path to the code .. Mat is the  matrics data type in opencv to handle images
	Mat img = imread(path);
//imshow..{to show image} ("picture...{name of imshow}", img...{file});
		imshow("picture", img);
		waitKey(0);
}
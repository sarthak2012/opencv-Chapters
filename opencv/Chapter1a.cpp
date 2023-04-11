// how to import images ,vedios and veb cam
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

// ///// code to import the image /////
void main()
{
	//path of vedio
	string path = "Resources/test_video.mp4";
    //VideoCapture{ data type for vedios in opencv } cap{name of vedio} path{include the path of the vedio}
	VideoCapture cap(path);
	Mat img;

	
	while (true)
	{
		// read our image 
		// vedio is a set of images

		cap.read(img);
		imshow("picture", img);
		waitKey(20);
	}




}
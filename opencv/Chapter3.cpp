/////// RESIZE AND CROP IMAGE IN OPENCV ////////////////


// how to import images ,vedios and veb cam
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

// code to import the image
void main()
{
	string path = "Resources/test1.jpg";
	Mat img = imread(path);
	Mat imgResize , imgCrop;

	cout <<"the size of image is "<< img.size() << endl; // to know the size of image
	// to resize an image
	//resize(img, imgResize,Size(500, 1000));
	//OR 
	resize(img, imgResize, Size(),0.5,0.5); // reduce scale to 50 percent 

	// to crop an image
	Rect roi(100, 100, 300, 350);
	// start from 100 width and 100 length and move to 300 length and 350 width 
	imgCrop = img(roi);



 	//imshow..{to show image} ("picture...{name of imshow}", img...{file});
	imshow("picture", img);
	imshow("picture resize", imgResize);
	imshow("picture crop", imgCrop);

	

	waitKey(0);

}


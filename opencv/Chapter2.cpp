/////// BASIC FUNCTIONS OF OPENCV ////////////////


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
	// creating path for image
	string path = "Resources/test1.jpg";

	// reading image from the path to the code .. Mat is the  matrics data type in opencv to handle images
	Mat img = imread(path);
	Mat imgGray, imgBlur ,imgCanny , imgDil , imgErode ;


	// CODE TO CONVERT IMAGE TO GREY 
    //cvtColor{Convert color}(img{of img}, imgGray, COLOR_BGR2GRAY{color from bgr to gray});
	cvtColor(img, imgGray, COLOR_BGR2GRAY);

	// to blur the image
	GaussianBlur(imgGray, imgBlur, Size(7, 7), 5, 0);

	// edge ditection ussing canny edge detector
	Canny(imgBlur, imgCanny, 10, 30);

	// to dilate the picture
	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
	dilate(imgCanny,imgDil,kernel);

	// to erode the picture
	//Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
	dilate(imgCanny, imgErode, kernel);






	

	    //imshow..{to show image} ("picture...{name of imshow}", img...{file});
		imshow("picture", img);

		// imshow..{to show image} ("picture Gray...{name of imshow}", imgGray...{file});
		imshow("picture Gray", imgGray);

		//imshow..{to show image} ("picture...{name of imshow}", imgBlur...{file});
		imshow("picture blur", imgBlur);

		//imshow..{to show image} ("picture...{name of imshow}", imgCanny...{file});
		imshow("picture Canny", imgCanny);

		//imshow..{to show image} ("picture...{name of imshow}", imgDil...{file});
		imshow("picture Dilation", imgDil);

		//imshow..{to show image} ("picture...{name of imshow}", imgErode...{file});
		imshow("picture Erode", imgErode);

		waitKey(0);

}


#pragma once
#include <cstdint>
#include<iostream>
#include<memory>
using namespace std;
struct Image {
	int rows;
	int columns;
	uint8_t pixels[1024 * 1024]; // max 1k x 1k image
};

class ImageBrightener {
private:
	shared_ptr<Image> m_inputImage;
public:
	ImageBrightener(shared_ptr<Image> inputImage);
	int BrightenWholeImage();
	shared_ptr<Image> GetImage();
};

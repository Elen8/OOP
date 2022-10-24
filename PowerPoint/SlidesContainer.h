#include <iostream>
#include <vector>
#include "SlidesBuilder.h"

class SlideContainer
{
public:
	void add();
	void remove(const int);
	void move(int, int);

	int get_count_of_slides();
	std::string get_slide_content(int);

private:
	SlidesBuilder* slides_builder;
};

#include <iostream>
#include <vector>
#include "SlidesBuilder.h"

class ClassContainer
{
public:
	void add();
	void remove(int);
	void move(int, int);
	void get_count_of_slides();
	void get_slide_content();

private:
	SlidesBuilder* slides_builder;
};

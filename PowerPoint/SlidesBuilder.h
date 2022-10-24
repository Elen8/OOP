#ifndef SLIDESBUILDER_H
#define SLIDESBUILDER_H
#include <iostream>
#include <vector>
#include "InputAnalyser.h"

class SlidesBuilder
{
public:
	void add(const std::string&); //to vector
	void remove(std::string&); //command from vector
	
	//void undo(); //from vector
	//void redo(); //from vector
	void remove_from_slides(int);
	void move_slides(int, int);

	int get_slides_count();
	std::string get_slides_content(int);

protected:
	std::vector<std::string> slides; //calss type
	Actions action; //class type
	//Tools tool;
};

#endif

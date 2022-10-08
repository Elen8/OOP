#ifndef SLIDESBUILDER_H
#define SLIDESBUILDER_H
#include <iostream>
#include <vector>
#include "InputAnalyser.h"

//write a Tools class to have all the tools inherited and write Bridge for tool-actions

enum class Colours {
	white,
	yellow,
	orange,
	red,
	pink,
	purple,
	blue,
	brown,
	black
};

struct Brush
{
	int style = 0;
	Colours colour = Colours::black;
	size_t size = 0;
};

struct Text
{
	size_t bold;
	size_t italic;
	size_t size;
	std::string content;
	Colours colour;
	int font;
};

struct Square
{
	std::vector<std::pair<float, float>> coordinates;
	Colours colour;
};

struct Rectangle
{
	std::vector<std::pair<float, float>> coordinates;
	Colours colour;
};

struct Triangle
{
	std::vector<std::pair<float, float>> coordinates;
	Colours colour;
};

struct Circle
{
	std::vector<std::pair<float, float>> coordinates;
	Colours colour;
};

struct Ellipse
{
	std::vector<std::pair<float, float>> coordinates;
	Colours colour;
};


enum Tools
{
	Text, 
	Brush,
	Square,
	Rectangle,
	Triangle,
	Circle,
	Ellipse
};

class SlidesBuilder
{
public:
	void add(); //to vector
	void remove(); //from vector
	void undo(); //from vector
	void redo(); //from vector

private:
	std::vector<std::string> slides; //calss type
	Actions action; //class type
	Tools tool;
};

#endif

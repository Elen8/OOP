#include "SlidesBuilder.h"
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

//change to token type
void SlidesBuilder::add(const std::string& command)
{
	slides.push_back(command);
}

void SlidesBuilder::remove(std::string& command)
{
	auto it = std::find(slides.begin(), slides.end(), command);
	if (it != slides.end())
	{
		slides.erase(it);
	}
	else
	{
		std::cout << "Exception: unknown command";
	}
}

void SlidesBuilder::remove_from_slides(int index)
{
	auto it = slides.begin() + index;
	if (it < slides.end())
	{
		slides.erase(it);
	}
	else
	{
		std::cout << "Exception: out of slide's range.";
	}
}

void SlidesBuilder::move_slides(int s1, int s2)
{
	std::reverse(slides.begin() + s1, slides.begin() + s2);
}

int SlidesBuilder::get_slides_count()
{
	return slides.size();
}

std::string SlidesBuilder::get_slides_content(int index)
{
	return slides[index];
}

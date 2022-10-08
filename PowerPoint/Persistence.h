#include "SlidesBuilder.h"

class Persistance
{
public:
	void save();
	void load();

private:
	SlidesBuilder* slides_builder;
};

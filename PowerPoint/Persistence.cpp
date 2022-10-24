#include "Persistence.h"

void Persistence::save()
{
	int slides = slides_builder->get_slides_count();
	std::string content; //file
	for (int i = 0; i < slides; i++)
	{
		content += slides_builder->get_slides_content(i) + "\n";
	}
}

void Persistence::load()
{
	//save and load to RAM
}

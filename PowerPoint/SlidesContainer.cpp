#include "SlidesContainer.h"

void SlideContainer::add()
{
	slides_builder->add("");
}

void SlideContainer::remove(const int number_of_slide)
{
	slides_builder->remove_from_slides(number_of_slide);
}

void SlideContainer::move(int s1, int s2)
{
	slides_builder->move_slides(s1, s2);
}

int SlideContainer::get_count_of_slides()
{
	return slides_builder->get_slides_count();
}

std::string SlideContainer::get_slide_content(int index)
{
	return slides_builder->get_slides_content(index);
}

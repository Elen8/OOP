#ifndef PRESENTATION_H
#define PRESENTATION_H
#include "Slide.h"

class CPresentation
{
protected:
	std::vector<std::shared_ptr<CSlide>> VSlide;
};

#endif //PRESENTATION_H

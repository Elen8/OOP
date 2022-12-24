#ifndef SLIDE_H
#define SLIDE_H
#include "Item.h"

class CSlide
{
public:
	CSlide NewSlide();
	void DeleteSlide(int);
	void GotoSlide(int);

protected:
	std::shared_ptr<IItemCollection> IC;
	int SlideID;
};

#endif //SLIDE_H

#ifndef DOCUMENT_H
#define DOCUMENT_H
#include "Presentation.h"

class CDocument
{
	//CDocument();
	void SlideShow();

private:
	std::unique_ptr<CPresentation> PPres;
};


#endif //DOCUMENT_H


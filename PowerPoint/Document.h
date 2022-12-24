#ifndef DOCUMENT_H
#define DOCUMENT_H
#include "Presentation.h"
#include "Action.h"

class CDocument
{
public:
	CDocument()
	{
		PPres = std::make_unique<CPresentation>();
	}
	void SlideShow();
	void Do(std::shared_ptr<Action>(DAct));
private:
	std::unique_ptr<CPresentation> PPres;
};


#endif //DOCUMENT_H


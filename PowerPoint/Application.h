#ifndef APPLICATION_H
#define APPLICATION_H
#include "Document.h"
#include "Editor.h"

class CApplication
{
public:
	static CApplication* Instance();

private:
	CApplication();
	static CApplication* PApp;
	std::shared_ptr<CEditor> PEdit;
	std::unique_ptr<CDocument> PDoc;
};


#endif //APPLICATION_H

#ifndef COMMANDHANDLER_H
#define COMMANDHANDLER_H
#include "Editor.h"
class ICommandHandler
{
	//Fetch
	//Decode
	//Execute
	virtual void Do() = 0;
private:
	std::weak_ptr<CEditor> PEdit;
	std::weak_ptr<CDocument> PDoc;
}; 

class CCommandHandler : public ICommandHandler
{

};

#endif //COMMANDHANDLER_H

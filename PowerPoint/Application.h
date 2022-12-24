#ifndef APPLICATION_H
#define APPLICATION_H
//#include "Editor.h"
#include "CommandHandler.h"

class CApplication
{
public:
	static CApplication* Instance();
	void CallCmdHandler()
	{
		PCmd = std::make_unique<CCommandHandler>();
		PCmd->Fetch();
		PCmd->Decode();
		PCmd->Do();
	}
private:
	CApplication() = default;
	static CApplication* PApp;
	std::shared_ptr<CEditor> PEdit;
	std::unique_ptr<CDocument> PDoc;
	std::unique_ptr<ICommandHandler> PCmd;
};


#endif //APPLICATION_H

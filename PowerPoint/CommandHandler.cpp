#include "CommandHandler.h"

enum Ops{Present, Slide};

void CCommandHandler::Do()
{
	PEdit = std::make_shared<CEditor>();
	PEdit.lock()->Do(PAct);
	PDoc = std::make_shared<CDocument>();
	PDoc.lock()->Do(PAct);
}

void CCommandHandler::Fetch()
{
	std::string input;
	std::cin >> input;
	m_input = input;
	HaveVisualAttributes = true; //changable give command
}

void CCommandHandler::Decode()
{
	PAct = std::make_shared<Action>();
	if (IfItem == true)
	{
		PAct->pAMain = std::make_shared<AMain>();
		if (HaveVisualAttributes == true)
		{
			PAct->pAVisual = std::make_shared<AVisual>();
			PAct->pAMain->ISetID(1);
			PAct->pAMain->ISetGeometry(2, 3);
			PAct->pAMain->ISetAngle(4);
			PAct->pAMain->ISetShape(5);
			PAct->pAVisual->ISetColor();
			PAct->pAVisual->IsetThickness();
		}
		else
		{
			PAct->pAMain->ISetID(1);
			PAct->pAMain->ISetGeometry(2, 3);
			PAct->pAMain->ISetAngle(4);
			PAct->pAMain->ISetShape(5);
		}
		switch (ItmType)
		{
		case Add: 
		{
			std::shared_ptr<IItem> PItem;
			//PAct->pAItManip->IAdd();
			//PItem = std::make_shared<Action>();
			////PItem = std::dynamic_pointer_cast<IItem>(std::make_shared<Action>());
			//PItem = std::move(PAct);
			//PAct->pAItManip->IAdd(PItem);
		}
			break;
		case Remove:
			PAct->pAItManip->IRemove(PAct->pAMain->IGetID());
			//PAct->
			break;
		case Count:
			PAct->pAItAccess->IGetCount();
			break;
		case GetAt:
			PAct->pAItAccess->IAt(PAct->pAMain->IGetID());
			break;
		default:
			break;
		}

	}
	else
	{
		switch (SldType)
		{
		case New:
			PAct->pASlide->SNewSlide();
			break;
		case Delete:
			PAct->pASlide->SDeleteSlide(0);
			break;
		case GoTo:
			PAct->pASlide->SDeleteSlide(0);
			break;
		default:
			break;
		}
	}
	
	//create actions and pass to action to execute
	//cucichov dimel Action in u item sarqel tal 

}


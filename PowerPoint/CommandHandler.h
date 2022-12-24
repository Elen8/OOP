#ifndef COMMANDHANDLER_H
#define COMMANDHANDLER_H
#include "Editor.h"

#include <iostream>

enum ItemActionTypes {Add, Remove, Count, GetAt};
enum SlideActionTypes {New, Delete, GoTo};

class ICommandHandler
{
public:
	virtual void Fetch() = 0;
	virtual void Decode() = 0; //create action
	virtual void Do() = 0;

protected:
	std::weak_ptr<CEditor> PEdit;
	std::weak_ptr<CDocument> PDoc;
	std::shared_ptr<Action> PAct;
protected:
	ItemActionTypes ItmType = ItemActionTypes::Add;
	SlideActionTypes SldType = SlideActionTypes::New;
}; 

class CCommandHandler : public ICommandHandler
{
private:
	std::string m_input;
	bool HaveVisualAttributes = false;
	bool IfItem;

public:
	void Fetch() override;
	void Decode() override;
	void Do() override;
};

//class IOptions
//{
//public:
//	virtual void PresentObject() = 0;
//	virtual void DrawObject() = 0;
//	virtual void RemoveObject() = 0;
//	virtual void EditObject() = 0;
//};
//
//class CItemObject : public IOptions
//{
//public:
//	void DrawObject() override;
//	void RemoveObject() override;
//	void EditObject() override;
//private:
//	std::shared_ptr<CItem> pItem;
//};
//
//class CSlideObject : public IOptions
//{
//public:
//	void DrawObject() override;
//	void RemoveObject() override;
//	void EditObject() override;
//private:
//	std::shared_ptr<CSlide> pItem;
//};
//
//class CPresentObject : public IOptions
//{
//public:
//	virtual void PresentObject() = 0;
//private:
//	std::shared_ptr<CPresentation> pItem;
//};
#endif //COMMANDHANDLER_H

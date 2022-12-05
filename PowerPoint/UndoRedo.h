#ifndef UNDOREDO_H
#define UNDOREDO_H
#include "Action.h"
#include <stack>

class Stack
{
public:
	std::stack<CAction*> undo;
	std::stack<CAction*> redo;
};

class CDo : public Stack
{
public:
	void AddActionToStack(CAction*);
};

class CUndo : public Stack
{
public:
	void UndoAction(CAction*);
private:
	
};

class CRedo : public Stack 
{
public:
	void RedoAction(CAction*);
private:
	
};

#endif //UNDOREDO_H

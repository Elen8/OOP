#ifndef UNDOREDO_H
#define UNDOREDO_H
#include "Action.h"
#include <stack>

class Stack
{
public:
	std::stack<std::weak_ptr<Action>> undo;
	std::stack<std::weak_ptr<Action>> redo;
};

class CDo : public Stack
{
public:
	void AddActionToStack(std::shared_ptr<Action>(DAct));
private:
	std::unique_ptr<Action> DAction;
};

class CUndo : public Stack
{
public:
	void UndoAction(std::shared_ptr<Action>(UAct));
private:
	std::unique_ptr<Action> UAction;
};

class CRedo : public Stack 
{
public:
	void RedoAction(std::shared_ptr<Action>(RAct));
private:
	std::unique_ptr<Action> RAction;
};

#endif //UNDOREDO_H

#include "UndoRedo.h"

void CDo::AddActionToStack(std::shared_ptr<Action>(DAct))
{
	undo.push(std::move(DAct));
}

void CUndo::UndoAction(std::shared_ptr<Action>(UAct))
{
	if (!undo.empty())
	{
		redo.push(undo.top());
		undo.pop();
	}
}

void CRedo::RedoAction(std::shared_ptr<Action>(RAct))
{
	if (!redo.empty())
	{
		undo.push(redo.top());
		redo.pop();
	}
	
}

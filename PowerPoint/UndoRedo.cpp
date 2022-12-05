#include "UndoRedo.h"

void CDo::AddActionToStack(CAction* DAct)
{
	undo.push(DAct);
}

void CUndo::UndoAction(CAction* UAct)
{
	if (!undo.empty())
	{
		redo.push(undo.top());
		undo.pop();
	}
}

void CRedo::RedoAction(CAction* RAct)
{
	if (!redo.empty())
	{
		undo.push(redo.top());
		redo.pop();
	}
	
}

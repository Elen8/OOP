#include "Editor.h"


void CEditor::Undo(CAction* CAct)
{
	PUndo->UndoAction(CAct);
}

void CEditor::Redo(CAction* CAct)
{
	PRedo->RedoAction(CAct);
}

void CEditor::Do(CAction* CAct)
{
	//call IItem or Slide
	PDo->AddActionToStack(CAct);
}

#include "Editor.h"


void CEditor::Undo(std::shared_ptr<Action>(UAct))
{
	PUndo->UndoAction(UAct);
}

void CEditor::Redo(std::shared_ptr<Action>(RAct))
{
	PRedo->RedoAction(RAct);
}

void CEditor::Do(std::shared_ptr<Action>(DAct))
{
	PDo->AddActionToStack(DAct);
	//kanchel hamapatasxan item functiony
}

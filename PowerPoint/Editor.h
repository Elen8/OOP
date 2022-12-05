#ifndef EDITOR_H
#define EDITOR_H
#include "Document.h"
#include "UndoRedo.h"
class CEditor
{
public:
	void Undo(CAction*);
	void Redo(CAction*);
	void Do(CAction*);
private:
	std::unique_ptr<CUndo>	PUndo{ new CUndo() };
	std::unique_ptr<CRedo>	PRedo{ new CRedo() };
	std::unique_ptr<CDo>	PDo{ new CDo() };
	std::unique_ptr<CDocument> PDoc;
	std::unique_ptr<CPresentation> PPres;
};

#endif //EDITOR_H

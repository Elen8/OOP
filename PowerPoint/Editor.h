#ifndef EDITOR_H
#define EDITOR_H
#include "Document.h"
#include "UndoRedo.h"
class CEditor
{
public:
	CEditor()
	{
		PDoc = std::make_unique<CDocument>();
		PPres = std::make_unique<CPresentation>();
	}
	void Undo(std::shared_ptr<Action>(UAct));
	void Redo(std::shared_ptr<Action>(RAct));
	void Do(std::shared_ptr<Action>(DAct));
private:
	std::unique_ptr<CUndo>	PUndo{ new CUndo() };
	std::unique_ptr<CRedo>	PRedo{ new CRedo() };
	std::unique_ptr<CDo>	PDo{ new CDo() };
	std::unique_ptr<CDocument> PDoc;
	std::unique_ptr<CPresentation> PPres;
};

#endif //EDITOR_H

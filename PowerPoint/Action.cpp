#include "Action.h"
void AMain::ISetID(int id)
{
	PItem = std::make_shared<AMain>();
	PItem->imc->SetID(id);
}

void AMain::ISetAngle(int a)
{
	PItem = std::make_shared<AMain>();
	PItem->imc->SetAngle(a);
}

void AMain::ISetGeometry(int a, int b)
{
	PItem = std::make_shared<AMain>();
	PItem->imc->SetGeometry(a, b);
}

void AMain::ISetShape(int s)
{
	PItem = std::make_shared<AMain>();
	PItem->imc->SetShape(s);
}

int AMain::IGetID()
{
	PItem = std::make_shared<AMain>();
	return PItem->imc->GetID();
}

Rect AMain::IGetGeometry()
{
	PItem = std::make_shared<AMain>();
	return PItem->imc->GetGeometry();
}

Angle_t AMain::IGetAngle()
{
	PItem = std::make_shared<AMain>();
	return PItem->imc->GetAngle();
}

ShapeType AMain::IGetShape()
{
	PItem = std::make_shared<AMain>();
	return PItem->imc->GetShape();
}

Colors AVisual::IGetColor()
{
	PItem = std::make_shared<AVisual>();
	return PItem->iva->GetColor();
}

void AVisual::ISetColor()
{
	PItem = std::make_shared<AVisual>();
	PItem->iva->SetColor();
}

Thikness AVisual::IGetThickness()
{
	PItem = std::make_shared<AVisual>();
	return PItem->iva->GetThickness();
}

 void AVisual::IsetThickness()
{
	PItem = std::make_shared<AVisual>();
	PItem->iva->setThickness();
}


void AItemManipulation::IAdd(std::shared_ptr<IItem> i)
{
	PItemColl = std::make_shared<IItemCollection>();
	PItemColl->Add(i);
}

void AItemManipulation::IRemove(int i) 
{
	PItemColl = std::make_shared<IItemCollection>();
	PItemColl->Remove(i);
}

size_t AItemAccessability::IGetCount()
{
	PItemColl = std::make_shared<IItemCollection>();
	return PItemColl->GetCount();
}

std::shared_ptr<IItem> AItemAccessability::IAt(int i)
{
	PItemColl = std::make_shared<IItemCollection>();
	return PItemColl->At(i);
}


CSlide ASlideManip::SNewSlide()
{
	PSlide = std::make_shared<CSlide>();
	return PSlide->NewSlide();
}

void ASlideManip::SDeleteSlide(int i)
{
	PSlide = std::make_shared<CSlide>();
	PSlide->DeleteSlide(i);
}

void ASlideAccessibility::SGotoSlide(int i)
{
	PSlide = std::make_shared<CSlide>();
	PSlide->GotoSlide(i);
}

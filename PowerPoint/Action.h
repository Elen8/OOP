#ifndef ACTION_H
#define ACTION_H
#include "Slide.h"
#include "Item.h"
class CAction
{
public:
	std::shared_ptr<CSlide> PSlide;
	std::shared_ptr<CItem> PItem;
	std::shared_ptr<IItemCollection> PItemColl;
};


class IItemActions : public CAction
{
public:
	virtual void ISetID(int) = 0;
	virtual void ISetAngle(int) = 0;
	virtual void ISetGeometry(int, int) = 0;
	virtual void ISetShape(int) = 0;
	virtual int IGetID() = 0;
	virtual Rect IGetGeometry() = 0;
	virtual Angle_t IGetAngle() = 0;
	virtual ShapeType IGetShape() = 0;
	virtual Colors IGetColor() = 0;
	virtual void ISetColor() = 0;
	virtual Thikness IGetThickness() = 0;
	virtual void IsetThickness() = 0;
	virtual void IAdd(std::shared_ptr<IItem> = std::make_shared<IItem>()) = 0;
	virtual void IRemove(int) = 0;
	virtual size_t IGetCount() = 0;
	virtual std::shared_ptr<IItem> IAt(int) = 0;
protected:

};

class AMain : public IItemActions
{
public:
	void ISetID(int) override;
	void ISetAngle(int) override;
	void ISetGeometry(int, int) override;
	void ISetShape(int) override;
	int IGetID() override;
	Rect IGetGeometry() override;
	Angle_t IGetAngle() override;
	ShapeType IGetShape() override;
};

class AVisual : public IItemActions
{
public:
	Colors IGetColor() override;
	void ISetColor() override;
	Thikness IGetThickness() override;
	void IsetThickness() override;
};



class AItemManipulation : public IItemActions
{
public:
	void IAdd(std::shared_ptr<IItem> = std::make_shared<IItem>()) override;
	void IRemove(int) override;
};

class AItemAccessability : public IItemActions
{
public:
	size_t IGetCount() override;
	std::shared_ptr<IItem> IAt(int) override;
};

class ISlideActions : public CAction
{
public:
	virtual CSlide SNewSlide() = 0;
	virtual void SDeleteSlide(int) = 0;
	virtual void SGotoSlide(int) = 0;
};

class ASlideManip : public ISlideActions
{
public:
	CSlide SNewSlide();
	void SDeleteSlide(int);
};


class ASlideAccessibility : public CAction
{
public:
	void SGotoSlide(int);
};


class Action : public AMain, AVisual, ASlideManip, AItemManipulation, AItemAccessability
{
public:
	std::shared_ptr<AMain> pAMain;
	std::shared_ptr<AVisual> pAVisual;
	std::shared_ptr<AItemManipulation> pAItManip;
	std::shared_ptr<AItemAccessability> pAItAccess;
	std::shared_ptr<ASlideManip> pASlide;
};
#endif //ACTION_H

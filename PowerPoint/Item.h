#ifndef ITEM_H
#define ITEM_H
#include <memory>
#include <iostream>
#include <vector>

using Rect = std::pair<int, int>;
using Angle_t = size_t;

enum ShapeType {Triangle, Square, Circle, Text, Rectangle, Elipsoid};
enum Colors {Black, White, Purple, Blue, Red, Green, Orange, Yellow, Pink};
enum Thikness {VeryThin, Thin, Normal, Bold, VeryBold};

class IItem
{
protected:
	int m_ID;
	Rect m_rect;
	Angle_t m_angle;
	ShapeType m_shapetype;
public:
	virtual const void SetID() = 0;
	virtual const void SetAngle() = 0;
	virtual const void SetGeometry() = 0;
	virtual const void SetShape() = 0;
	virtual int GetID() = 0;
	virtual Rect GetGeometry() = 0;
	virtual Angle_t GetAngle() = 0;
	virtual ShapeType GetShape() = 0;
	virtual IVisualAttributes GetAttributes() = 0; //implemet
};

class IMaincCharasteristics :public IItem
{
public:
	const void SetID() override;
	const void SetGeometry() override;
	const void SetAngle() override;
	const void SetShape() override;

	int GetID();
	Rect GetGeometry();
	Angle_t GetAngle();
	ShapeType GetShape();
};



class IVisualAttributes 
{
private:
	Colors color;
	Thikness thikness;
public:
	Colors GetColor();
	const void SetColor();
	Thikness GetThickness();
	const void setThickness();
};


class CItem :public IItem, IVisualAttributes
{
private:
	IVisualAttributes* iva;

public:
	IVisualAttributes GetAttributes() override;
};



class IItemCollection
{
protected:
	std::vector<IItem*> item_collection;
public:
	void Add(IItem*);
	void Remove(int); //pos
	int GetCount();
	IItem* At(int); //pos
	IItem* Find(int); //ID
};



class IGroupItem
{
	//*GetCollection();
};

class ISingleItem :public IItem
{
	ShapeType GetShape() override;
	IVisualAttributes GetAttributes() override;
};


#endif //ITEM_H

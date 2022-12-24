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
	virtual void SetID(int) = 0;
	virtual void SetAngle(int) = 0;
	virtual void SetGeometry(int, int) = 0;
	virtual void SetShape(int) = 0;
	virtual int GetID() = 0;
	virtual Rect GetGeometry() = 0;
	virtual Angle_t GetAngle() = 0;
	virtual ShapeType GetShape() = 0;
	//virtual void SetMainCharasteristics() = 0;
	//virtual void SetAttributes() = 0;
	//virtual IMainCharasteristics GetMainCharasteristics() = 0;
	//virtual IVisualAttributes GetAttributes() = 0;
};

class IMainCharasteristics :public IItem
{
public:
	void SetID(int) override;
	void SetGeometry(int, int) override;
	void SetAngle(int) override;
	void SetShape(int) override;

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
	Colors		GetColor();
	void		SetColor();
	Thikness	GetThickness();
	void		setThickness();
};

class IItemCollection
{
protected:
	std::vector<std::shared_ptr<IItem>> item_collection;
public:
	void Add(std::shared_ptr<IItem> = std::shared_ptr<IItem>());
	void Remove(int); 
	size_t GetCount();
	std::shared_ptr<IItem> At(int);
};

class CItem :public IMainCharasteristics, IVisualAttributes
{
public:
	std::unique_ptr<IVisualAttributes> iva;
	std::unique_ptr<IMainCharasteristics> imc;
public:
	/*void SetMainCharasteristics() override;
	void SetAttributes() override;
	IVisualAttributes GetAttributes() override;
	IMainCharasteristics GetMainCharasteristics() override;*/
};

//
//class IGroupItem
//{
//	//*GetCollection();
//};
//
//class ISingleItem :public IItem
//{
//	ShapeType GetShape() override;
//	//IVisualAttributes GetAttributes() override;
//};

#endif //ITEM_H

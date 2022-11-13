#include <iostream>
#include <vector>

using Rect = std::pair<int, int>;
using Angle_t = size_t;

enum ShapeType {Triangle, Square, Circle, Text, Rectangle, Elipsoid};
enum Colors {Black, White, Purple, Blue, Red, Green, Orange, Yellow, Pink};
enum Thikness {VeryThin, Thin, Normal, Bold, VeryBold};

class Application
{
	//Document
};

class Document
{
	//Many slideCollections
};

class Slide
{
protected:
	IItemCollection* IC;
};



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

const void IMaincCharasteristics::SetID()
{
	m_ID = 0; //get
}

const void IMaincCharasteristics::SetGeometry()
{
	m_rect.first = 0; //get
	m_rect.second = 0; //get
}

const void IMaincCharasteristics::SetAngle()
{
	m_angle = 0; //get
}

const void IMaincCharasteristics::SetShape()
{
	m_shapetype = ShapeType::Rectangle;
}

int IMaincCharasteristics::GetID()
{
	return m_ID;
}

Rect IMaincCharasteristics::GetGeometry()
{
	m_rect.first = 0;
	m_rect.second = 0; 
	return m_rect;
}

Angle_t IMaincCharasteristics::GetAngle()
{
	m_angle = 0; 
}

ShapeType IMaincCharasteristics::GetShape()
{
	return m_shapetype;
}

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

Colors IVisualAttributes::GetColor()
{
	return color;
}

const void IVisualAttributes::SetColor()
{
	color = Colors::Black;
}

Thikness IVisualAttributes::GetThickness()
{
	return thikness;
}

const void IVisualAttributes::setThickness()
{
	thikness = Thikness::Normal;
}

class CItem :public IItem, IVisualAttributes
{
private:
	IVisualAttributes* iva;

public:
	IVisualAttributes GetAttributes() override;
};

IVisualAttributes CItem::GetAttributes()
{
	iva = new IVisualAttributes();
	//
}

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


void IItemCollection::Add(IItem* item)
{
	item_collection.push_back(item);
}

void IItemCollection::Remove(int position)
{
	std::vector<IItem*>::iterator iter;
	iter = item_collection.begin();
	item_collection.erase(iter + position);
}

int IItemCollection::GetCount()
{
	return item_collection.size();
}

IItem* IItemCollection::At(int position)
{
	return item_collection[position];
}

IItem* IItemCollection::Find(int ID)
{
	std::vector<IItem*>::iterator iter;
	for (auto i : item_collection)
	{
		//if (item_collection[i]) inchpes dimem get id function-in
	}
}



class IGroupItem
{
	//*GetCollection();
};

class ISingleItem :public IItem
{
	ShapeType GetShape() override;
	IVisualAttributes GetAttributes() override;
};


#include "Item.h"

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

IVisualAttributes CItem::GetAttributes()
{
	iva = new IVisualAttributes();
	//
}

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
		
	}
}


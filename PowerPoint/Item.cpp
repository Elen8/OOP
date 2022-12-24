#include "Item.h"

void IMainCharasteristics::SetID(int id)
{
	m_ID = id; //get
}

void IMainCharasteristics::SetGeometry(int a, int b)
{
	m_rect.first = a; //get
	m_rect.second = b; //get
}

void IMainCharasteristics::SetAngle(int a)
{
	m_angle = a; //get
}

void IMainCharasteristics::SetShape(int s)
{
	m_shapetype = ShapeType::Rectangle;//put s-th shape
}

int IMainCharasteristics::GetID()
{
	return m_ID;
}

Rect IMainCharasteristics::GetGeometry()
{
	m_rect.first = 0;
	m_rect.second = 0;
	return m_rect;
}

Angle_t IMainCharasteristics::GetAngle()
{
	m_angle = 0;
	return m_angle;
}

ShapeType IMainCharasteristics::GetShape()
{
	return m_shapetype;
}


Colors IVisualAttributes::GetColor()
{
	return color;
}

void IVisualAttributes::SetColor()
{
	color = Colors::Black;
}

Thikness IVisualAttributes::GetThickness()
{
	return thikness;
}

void IVisualAttributes::setThickness()
{
	thikness = Thikness::Normal;
}

//IVisualAttributes CItem::GetAttributes()
//{
//	iva = new IVisualAttributes();
//	//
//}

void IItemCollection::Add(std::shared_ptr<IItem> item)
{
	item_collection.push_back(item);
}

void IItemCollection::Remove(int position)
{
	std::vector<std::shared_ptr<IItem>>::iterator iter;
	//iter = item_collection.begin();
	// item_collection.erase(iter + position);
}

size_t IItemCollection::GetCount()
{
	return item_collection.size();
}

std::shared_ptr<IItem> IItemCollection::At(int position)
{
	return std::move(item_collection[position]);
}

//IItem* IItemCollection::Find(int ID)
//{
//	std::vector<IItem*>::iterator iter;
//	for (auto i : item_collection)
//	{
//		
//	}
//	return;
//}

//void CItem::SetMainCharasteristics() {
//
//}
//
//void CItem::SetAttributes() {
//
//}
//
//IVisualAttributes CItem::GetAttributes() {
//
//}
//
//IMainCharasteristics CItem::GetMainCharasteristics() {
//
//}

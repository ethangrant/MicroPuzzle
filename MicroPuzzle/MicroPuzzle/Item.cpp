#include "stdafx.h"
#include <iostream>
#include <string>
#include "Item.h"

Item::Item(string itemName, string associatedRoom, bool itemUsed)
{
	setItemName(itemName);
	setAssociatedRoom(associatedRoom);
	setItemUsed(itemUsed);
}

Item::~Item()
{

}

string Item::getItemName()
{
	return itemName;
}

string Item::getAssociatedRoom()
{
	return associatedRoom;
}

bool Item::getItemUsed()
{
	return itemUsed;
}

void Item::setItemName(string name)
{
	itemName = name;
}

void Item::setItemUsed(bool used)
{
	itemUsed = used;
}

void Item::setAssociatedRoom(string association)
{
	associatedRoom = association;
}
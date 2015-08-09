// Item class header file

#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item
{
public:
	//constructor
	Item(string, string, bool);

	//destructor
	~Item();

	// member functions
	string getItemName();
	bool getItemUsed();
	string getAssociatedRoom();
	void setItemName(string);
	void setItemUsed(bool);
	void setAssociatedRoom(string);

private:
	string itemName;
	bool itemUsed;
	string associatedRoom;
};

#endif
/*****************************************************************************
 * Program Author:  Ethan Grant
 * Student ID:      12011576
 * File name:       Room.h
 * Course code:     UFCFK4-30-2 C++ Development              
 * Date created:    28/03/2014
 * Last modified:	10/04/2014
 *
 * Description:		Room.h class definition
 * **************************************************************************/

#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Room
{
public:
	// Constructor
	Room(string, string);

	// Destructor
	~Room();

	// member functions
	string getRoomDescription();
	string getRoomDirections();
	string getRoomObjects();
	string getRoomItems();
	void setRoomDescription(string);
	void setRoomDirections(string);

private:
	string roomDescription;
	string roomDirections;
};

#endif
/*****************************************************************************
 * Program Author:  Ethan Grant
 * Student ID:      12011576
 * File name:       Map.h
 * Course code:     UFCFK4-30-2 C++ Development              
 * Date created:    28/03/2014
 * Last modified:	10/04/2014
 *
 * Description:		Map.h class definition
 * **************************************************************************/

#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <vector>
#include "Room.h"

class Map
{
public:
	// constructor
	Map();

	// destructor
	~Map();

	// member functions
	void populateMap(Room&);
	Room getRoom(int);

private:
	vector<Room>map;
};

#endif
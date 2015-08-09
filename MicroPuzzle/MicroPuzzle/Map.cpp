/*****************************************************************************
 * Program Author:  Ethan Grant
 * Student ID:      12011576
 * File name:       Octagon.cpp
 * Course code:     UFCFK4-30-2 C++ Development              
 * Date created:    28/03/2014
 * Last modified:	10/04/2014
 *
 * Description:		Member function implementation for Map.h
 *					
 * **************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include "Map.h"

/*****************************************************************************
 * Function name:		Map class constructor
 *
 * Function output:		void
 *
 * Description:			empty constructor
 *						
 * **************************************************************************/
Map::Map()
{

}

/*****************************************************************************
 * Function name:		Map class destructor
 *
 * Function output:		void
 *
 * Description:			empty destructor
 *						
 * **************************************************************************/
Map::~Map()
{

}

/*****************************************************************************
 * Function name:		populateMap(Room&)
 *
 * Function output:		void
 *
 * Description:			populates map vector with all the room objects to generate
 *						my game map.
 * **************************************************************************/
void Map::populateMap(Room &roomname)
{
	map.push_back(roomname);
}

/*****************************************************************************
 * Function name:		getRoom(int)
 *
 * Function output:		void
 *
 * Description:			returns the current room the player is positioned in
 *						
 * **************************************************************************/
Room Map::getRoom(int playersCurrentRoom)
{
	return map[playersCurrentRoom];
}




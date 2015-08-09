/*****************************************************************************
 * Program Author:  Ethan Grant
 * Student ID:      12011576
 * File name:       Octagon.cpp
 * Course code:     UFCFK4-30-2 C++ Development              
 * Date created:    28/03/2014
 * Last modified:	10/04/2014
 *
 * Description:		Member function implementation for Room.cpp
 *					
 * **************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Room.h"

/*****************************************************************************
 * Function name:		Room class constructor
 *
 * Function output:		void
 *
 * Description:			initializes Room class with a room description &
 *						possible directions from that room.
 * **************************************************************************/
Room::Room(string roomDescription, string roomDirections)
{
	setRoomDescription(roomDescription);
	setRoomDirections(roomDirections);
}

/*****************************************************************************
 * Function name:		Room class destructor
 *
 * Function output:		void
 *
 * Description:			empty destructor
 *						
 * **************************************************************************/
Room::~Room()
{
	
}

/*****************************************************************************
 * Function name:		getRoomDescription()
 *
 * Function output:		string
 *
 * Description:			returns a Rooms description
 *						
 * **************************************************************************/
string Room::getRoomDescription()
{
	return roomDescription;
}

/*****************************************************************************
 * Function name:		getRoomDirections()
 *
 * Function output:		string
 *
 * Description:			returns possible directions to move from that room
 *						
 * **************************************************************************/
string Room::getRoomDirections()
{
	return roomDirections;
}

/*****************************************************************************
 * Function name:		setRoomDescription(string)
 *
 * Function output:		void
 *
 * Description:			sets the rooms description
 *						
 * **************************************************************************/
void Room::setRoomDescription(string roomDesc)
{
	roomDescription = roomDesc;
}

/*****************************************************************************
 * Function name:		setRoomDirections(string)
 *
 * Function output:		void
 *
 * Description:			sets a rooms possible directions
 *						
 * **************************************************************************/
void Room::setRoomDirections(string roomDir)
{
	roomDirections = roomDir;
}

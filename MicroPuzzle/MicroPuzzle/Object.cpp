/*****************************************************************************
 * Program Author:  Ethan Grant
 * Student ID:      12011576
 * File name:       Octagon.cpp
 * Course code:     UFCFK4-30-2 C++ Development              
 * Date created:    28/03/2014
 * Last modified:	10/04/2014
 *
 * Description:		Member function implementation for Object.h
 *					
 * **************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Object.h"

/*****************************************************************************
 * Function name:		Object class constructor
 *
 * Function output:		void
 *
 * Description:			intializes class with name of the object, has the object
 *						been used, it's current room on the map, has the object
 *						been taken.
 * **************************************************************************/
Object::Object(string objectName, bool objectUsed, int objectCurrentRoom, bool objectTaken)
{
	setObjectName(objectName);
	setObjectUsed(objectUsed);
	setObjectCurrentRoom(objectCurrentRoom);
	setObjectTaken(objectTaken);
}

/*****************************************************************************
 * Function name:		Object class destructor
 *
 * Function output:		void
 *
 * Description:			empty destructor
 *						
 * **************************************************************************/
Object::~Object()
{

}

/*****************************************************************************
 * Function name:		getObjectName()
 *
 * Function output:		string
 *
 * Description:			returns the object name
 *						
 * **************************************************************************/
string Object::getObjectName()
{
	return objectName;
}

/*****************************************************************************
 * Function name:		getObjectName()
 *
 * Function output:		bool
 *
 * Description:			returns if the object has been used or not
 *						
 * **************************************************************************/
bool Object::getObjectUsed()
{
	return objectUsed;
}

/*****************************************************************************
 * Function name:		getObjectCurrentRoom()
 *
 * Function output:		int
 *
 * Description:			returns which room the object is located
 *						
 * **************************************************************************/
int Object::getObjectCurrentRoom()
{
	return objectCurrentRoom;
}

/*****************************************************************************
 * Function name:		getObjectTaken()
 *
 * Function output:		bool
 *
 * Description:			returns whether or not the object has been taken by the
 *						player
 * **************************************************************************/
bool Object::getObjectTaken()
{
	return objectTaken;
}

/*****************************************************************************
 * Function name:		setObjectTaken()
 *
 * Function output:		void
 *
 * Description:			sets the name of the object
 *						
 * **************************************************************************/
void Object::setObjectName(string name)
{
	objectName = name;
}

/*****************************************************************************
 * Function name:		setObjectUsed()
 *
 * Function output:		void
 *
 * Description:			sets whether the object has been used or not
 *						
 * **************************************************************************/
void Object::setObjectUsed(bool used)
{
	objectUsed = used;
}

/*****************************************************************************
 * Function name:		setObjectCurrentRoom()
 *
 * Function output:		void
 *
 * Description:			sets the objects current room on the map
 *						
 * **************************************************************************/
void Object::setObjectCurrentRoom(int objectsCurrentRoom)
{
	objectCurrentRoom = objectsCurrentRoom;
}

/*****************************************************************************
 * Function name:		setObjectTaken()
 *
 * Function output:		void
 *
 * Description:			sets whether the object has been taken
 *						
 * **************************************************************************/
void Object::setObjectTaken(bool objTaken)
{
	objectTaken = objTaken;
}
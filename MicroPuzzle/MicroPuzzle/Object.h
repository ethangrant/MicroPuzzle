/*****************************************************************************
 * Program Author:  Ethan Grant
 * Student ID:      12011576
 * File name:       Object.h
 * Course code:     UFCFK4-30-2 C++ Development              
 * Date created:    28/03/2014
 * Last modified:	10/04/2014
 *
 * Description:		Object.h class definition
 * **************************************************************************/

#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Object
{
public:
	// constructor
	Object(string, bool, int, bool);

	// destructor
	~Object();

	// member functions
	string getObjectName();
	bool getObjectUsed();
	bool getObjectTaken();
	int getObjectCurrentRoom();
	void setObjectName(string);
	void setObjectUsed(bool);
	void setObjectTaken(bool);
	void setObjectCurrentRoom(int);

private:
	string objectName;
	bool objectUsed;
	bool objectTaken;
	int objectCurrentRoom;
};

#endif
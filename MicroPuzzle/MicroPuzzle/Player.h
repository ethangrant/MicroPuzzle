/*****************************************************************************
 * Program Author:  Ethan Grant
 * Student ID:      12011576
 * File name:       Game.h
 * Course code:     UFCFK4-30-2 C++ Development              
 * Date created:    28/03/2014
 * Last modified:	10/04/2014
 *
 * Description:		Game.h class definition
 * **************************************************************************/

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <vector>
#include "Object.h"


class Player
{
public:
	// constructor
	Player(int currentRoom, int movesLeft);

	// destructor
	~Player();

	// member functions
	int getMovesLeft();
	int getCurrentRoom();
	void setMovesLeft(int);
	void setCurrentRoom(int);

	void goNorth(Player&);
	void goSouth(Player&);
	void goEast(Player&);
	void goWest(Player&);

	vector<Object>inventory;

private:
	int movesLeft;
	int currentRoom;
};

#endif
/*****************************************************************************
 * Program Author:  Ethan Grant
 * Student ID:      12011576
 * File name:       Octagon.cpp
 * Course code:     UFCFK4-30-2 C++ Development              
 * Date created:    28/03/2014
 * Last modified:	10/04/2014
 *
 * Description:		Member function implementation for Player.h
 *					
 * **************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Player.h"
#include "Game.h"

/*****************************************************************************
 * Function name:		Player class constructor
 *
 * Function output:		Void
 *
 * Description:			Class must be intialized with two integer values to
 *						specify the players starting location and moves left
 *						until game is over.
 * **************************************************************************/
Player::Player(int currentRoom, int movesLeft)
{
	setCurrentRoom(currentRoom);
	setMovesLeft(movesLeft);
}

/*****************************************************************************
 * Function name:		Verb class destructor
 *
 * Function output:		Void
 *
 * Description:			Player class destructor
 *						
 * **************************************************************************/
Player::~Player()
{

}

/*****************************************************************************
 * Function name:		getCurrentRoom()
 *
 * Function output:		int
 *
 * Description:			returns the current room the player is positioned in
 *						
 * **************************************************************************/
int Player::getCurrentRoom()
{
	return currentRoom;
}

/*****************************************************************************
 * Function name:		getMovesLeft()
 *
 * Function output:		int
 *
 * Description:			returns the number of moves the player has left before
 *						game over.
 * **************************************************************************/
int Player::getMovesLeft()
{
	return movesLeft;
}

/*****************************************************************************
 * Function name:		setCurrentRoom(int)
 *
 * Function output:		void
 *
 * Description:			set the value of the players current position
 *						
 * **************************************************************************/
void Player::setCurrentRoom(int roomNumber)
{
	currentRoom = roomNumber;
}

/*****************************************************************************
 * Function name:		setMovesLeft(int)
 *
 * Function output:		void
 *
 * Description:			sets number of moves the player has to complete the game
 *						
 * **************************************************************************/
void Player::setMovesLeft(int moves)
{
	movesLeft = moves;
}

/*****************************************************************************
 * Function name:		goNorth(Player&)
 *
 * Function output:		void
 *
 * Description:			moves the player north where possible
 *						
 * **************************************************************************/
void Player::goNorth(Player& player)
{
	currentRoom -= 6;
}

/*****************************************************************************
 * Function name:		goSouth(Player&)
 *
 * Function output:		void
 *
 * Description:			moves the player south where possible
 *						
 * **************************************************************************/
void Player::goSouth(Player& player)
{
	currentRoom += 6;
}

/*****************************************************************************
 * Function name:		goEast(Player&)
 *
 * Function output:		void
 *
 * Description:			moves the player east where possible
 *						
 * **************************************************************************/
void Player::goEast(Player& player)
{
	currentRoom += 1;
}

/*****************************************************************************
 * Function name:		goWest(Player&)
 *
 * Function output:		void
 *
 * Description:			moves the player west where possible
 *						
 * **************************************************************************/
void Player::goWest(Player& player)
{
	currentRoom -= 1;
}

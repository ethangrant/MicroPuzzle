/*****************************************************************************
 * Program Author:  Ethan Grant
 * Student ID:      12011576
 * File name:       Octagon.cpp
 * Course code:     UFCFK4-30-2 C++ Development              
 * Date created:    28/03/2014
 * Last modified:	10/04/2014
 *
 * Description:		This program is a recreation of an old text adventure game
 *					called 'micropuzzle'.
 * **************************************************************************/
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Game.h"
#include "Player.h"
#include "Map.h"
#include "Room.h"
#include "Item.h"
#include "Object.h"

int main()
{
	bool gameOver = false;
	string verb;
	string object;
	string playerInput;

	Game micropuzzle;
	Map microPuzzleMap;
	Player player(0, 0);

	player = micropuzzle.createPlayer();
	micropuzzle.createObjects();
	micropuzzle.createVerbs();
	microPuzzleMap = micropuzzle.createRooms();
	micropuzzle.setCounter(100);
	micropuzzle.setSelfDestructCountDown(45);

	while (gameOver == false)
	{
		system("CLS");

		cout << "MICRO PUZZLE" << endl;
		cout << "============" << endl;

		// print the room description
		micropuzzle.printCurrentRoomDescription(microPuzzleMap, player);

		// Check if that room has any objects associated to it
		micropuzzle.roomCheckObject(microPuzzleMap, player);

		cout << endl;

		// print possible directions
		micropuzzle.printPossibleDirections(microPuzzleMap, player);		

		cout << "------------------" << endl;

		// display set up message
		micropuzzle.displayMessage();

		// check if self destruct has been activated?
		micropuzzle.selfDestructCountDownTimer();

		cout << "WHAT WILL YOU DO NOW" << endl << "?";

		// get instruction from player
		getline(cin, playerInput);

		// check the first word is a verb
		verb = micropuzzle.verbCheck(playerInput);

		// check the second word is an object or item
		object = micropuzzle.objectCheck(playerInput);

		// decide what to do depending on which verb is used
		micropuzzle.dealWithInput(verb, object, player, microPuzzleMap);

		// counter
		micropuzzle.gameCounter();

		// check for game over
		gameOver = micropuzzle.gameOver();

	}

	cin.ignore(2);

	return 0;
}

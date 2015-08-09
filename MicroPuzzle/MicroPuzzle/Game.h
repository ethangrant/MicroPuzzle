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

#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include "Player.h"
#include "Item.h"
#include "Object.h"
#include "Map.h"
#include "Verb.h"

class Game
{
public:
	//constructor
	Game();

	//destructor
	~Game();

	//member functions
	Player createPlayer();
	void createItems();
	void createObjects();
	void createVerbs();
	Map createRooms();
	bool getSelfDestructCounter();
	void printCurrentRoomDescription(Map&, Player&);
	void printPossibleDirections(Map&, Player&);
	void roomCheckObject(Map&, Player&);
	string verbCheck(string);
	string objectCheck(string);
	void displayMessage();
	void dealWithInput(string, string, Player&, Map&);
	void moveDirection(string, Player&, Map&, string);
	void take(Player&, string);
	void leave(Player&, string);
	void jump(Player&);
	void tie(Player&, string);
	void climb(string, Player&);
	void put(Player&, string);
	void press(Player&, string);
	void open(Player&, string);
	void examine(Player&, string);
	void unlock(Player&, string);
	void type(Player&, string);
	void point(Player&, string);
	void displayInventory(Player&);
	bool gameOver();
	void setCounter(int);
	void gameCounter();
	void selfDestructCountDownTimer();
	void setSelfDestructCountDown(int);

	vector<Object>gameObjects;

private:
	vector<Verb>gameVerbs;
	string message;
	int counter;
	int score;
	bool selfDestructCounter;
	int selfDestructCountdown;
};

#endif
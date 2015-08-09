/*****************************************************************************
 * Program Author:  Ethan Grant
 * Student ID:      12011576
 * File name:       Octagon.cpp
 * Course code:     UFCFK4-30-2 C++ Development              
 * Date created:    28/03/2014
 * Last modified:	10/04/2014
 *
 * Description:		Member function implementation for Game.h
 *					Provides main simulation of the micropuzzle game
 * **************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include "Game.h"
#include "Item.h"
#include "Object.h"
#include "Room.h"
#include "Player.h"
#include "Map.h"
#include "Verb.h"

/*****************************************************************************
 * Function name:		Game class constructor
 *
 * Function output:		void
 *
 * Description:			empty constructor
 *						
 * **************************************************************************/
Game::Game()
{

}

/*****************************************************************************
 * Function name:		Game class destructor
 *
 * Function output:		void
 *
 * Description:			empty destructor
 *						
 * **************************************************************************/
Game::~Game()
{

}

/*****************************************************************************
 * Function name:		createPlayer();
 *
 * Function output:		Player
 *
 * Description:			creates an instance of the Player class for the game
 *						
 * **************************************************************************/
Player Game::createPlayer()
{
	Player player(10, 100);		// Player starts in room 10 & 100 moves left
	return player;
}

/*****************************************************************************
 * Function name:		createVerbs()
 *
 * Function output:		void
 *
 * Description:			generates instances of all possible verbs in the game
 *						
 * **************************************************************************/
void Game::createVerbs()
{
	// Create all my verb objects
	Verb i("I");				gameVerbs.push_back(i);				// 0
	Verb go("GO");				gameVerbs.push_back(go);			// 1
	Verb n("N");				gameVerbs.push_back(n);				// 2
	Verb s("S");				gameVerbs.push_back(s);				// 3
	Verb w("W");				gameVerbs.push_back(w);				// 4
	Verb e("E");				gameVerbs.push_back(e);				// 5
	Verb u("U");				gameVerbs.push_back(u);				// 6
	Verb d("D");				gameVerbs.push_back(d);				// 7
	Verb jump("JUMP");			gameVerbs.push_back(jump);			// 8
	Verb get("GET");			gameVerbs.push_back(get);			// 9
	Verb take("TAKE");			gameVerbs.push_back(take);			// 10
	Verb put("PUT");			gameVerbs.push_back(put);			// 11
	Verb open("OPEN");			gameVerbs.push_back(open);			// 12
	Verb examine("EXAMINE");	gameVerbs.push_back(examine);		// 13
	Verb read("READ");			gameVerbs.push_back(read);			// 14
	Verb tie("TIE");			gameVerbs.push_back(tie);			// 15
	Verb climb("CLIMB");		gameVerbs.push_back(climb);			// 16
	Verb point("POINT");		gameVerbs.push_back(point);			// 17
	Verb eat("EAT");			gameVerbs.push_back(eat);			// 18
	Verb unlock("UNLOCK");		gameVerbs.push_back(unlock);		// 19
	Verb leave("LEAVE");		gameVerbs.push_back(leave);			// 20
	Verb type("TYPE");			gameVerbs.push_back(type);			// 21
	Verb press("PRESS");		gameVerbs.push_back(press);			// 22
	Verb score("SCORE");		gameVerbs.push_back(score);			// 23
}

/*****************************************************************************
 * Function name:		createObjects()
 *
 * Function output:		void
 *
 * Description:			generates instances of all possible Objects in the game
 *						
 * **************************************************************************/
void Game::createObjects()
{
	// create all game objects
	Object key("KEY", false, 15, false);						gameObjects.push_back(key);					// 0
	Object cassette("CASSETTE", false, 11, false);				gameObjects.push_back(cassette);			// 1
	Object cheese("CHEESE", false, 2, false);					gameObjects.push_back(cheese);				// 2
	Object paper("PAPER", false, 20, false);					gameObjects.push_back(paper);				// 3
	Object thread("THREAD", false, 4, false);					gameObjects.push_back(thread);				// 4
	Object remoteControl("REMOTE-CONTROL", false, 16, false);	gameObjects.push_back(remoteControl);		// 5
	Object bottle("BOTTLE", false, 18, false);					gameObjects.push_back(bottle);				// 6
	Object train("TRAIN", false, 13, false);					gameObjects.push_back(train);				// 7
	Object cat("CAT", false, -1, false);							gameObjects.push_back(cat);					// 8
	Object door("DOOR", false, -1, false);						gameObjects.push_back(door);				// 9
	Object gameSwitch("SWITCH", false, -1, false);				gameObjects.push_back(gameSwitch);			// 10
	Object tunnel("TUNNEL", false, -1, false);					gameObjects.push_back(tunnel);				// 11
	Object tree("TREE", false, -1, false);						gameObjects.push_back(tree);				// 12
	Object hole("HOLE", false, -1, false);						gameObjects.push_back(hole);				// 13
	Object mouse("MOUSE", false, -1, false);						gameObjects.push_back(mouse);				// 14
	Object video("VIDEO", false, -1, false);						gameObjects.push_back(video);				// 15
	Object computer("COMPUTER", false, -1, false);				gameObjects.push_back(computer);			// 16
	Object grocer("GROCER", false, -1, false);					gameObjects.push_back(grocer);				// 17
	Object terminal("TERMINAL", false, -1, false);				gameObjects.push_back(terminal);			// 18
	Object tripleOne("111", false, -1, false);					gameObjects.push_back(tripleOne);			// 19
	Object button("BUTTON", false, -1, false);					gameObjects.push_back(button);				// 20
	Object maximiser("MAXIMISER", false, -1, false);				gameObjects.push_back(maximiser);			// 21
	Object tv("TV", false, -1, false);							gameObjects.push_back(tv);					// 22
	Object box("BOX", false, -1, false);							gameObjects.push_back(box);					// 23
	Object north("NORTH", false, -1, false);						gameObjects.push_back(north);				// 24
	Object south("SOUTH", false, -1, false);						gameObjects.push_back(south);				// 25
	Object west("WEST", false, -1, false);						gameObjects.push_back(west);				// 26
	Object east("EAST", false, -1, false);						gameObjects.push_back(east);				// 27
	Object up("UP", false, -1, false);							gameObjects.push_back(up);					// 28
	Object down("DOWN", false, -1, false);						gameObjects.push_back(down);				// 29
	Object stool("STOOL", false, -1, false);						gameObjects.push_back(stool);				// 30
}

/*****************************************************************************
 * Function name:		createObjects()
 *
 * Function output:		Map
 *
 * Description:			generates instances of all possible Rooms in the game
 *						and then pushes them onto the map vector
 * **************************************************************************/
Map Game::createRooms()
{
	// create all game rooms
	Room insideMouseHole("INSIDE THE MOUSE HOLE - IT IS VERY DARK IN HERE", "SE");									// 0
	Room atMouseHole("AT A MOUSEHOLE IN THE CORNER OF THE ROOM", "SW");												// 1
	Room edgeHighTable("ON THE EDGE OF A HIGH TABLE", "SE");														// 2
	Room backHallway("AT THE BACK OF A HALLWAY", "SWE");															// 3
	Room storage("IN A STORAGE ROOM", "WE");																		// 4
	Room kitchen("IN A KITCHEN", "SW");																				// 5
	Room smellyTunnel("FURTHER DOWN A DARK SMELLY TUNNEL", "NS");													// 6
	Room railwaySiding("BY A RAILWAY SIDING", "NS");																// 7
	Room treeBase("AT THE BASE OF A TALL PLASTIC TREE ON THE EDGE OF A HIGH TABLE", "NE");							// 8
	Room oddHouse("OUTSIDE THE OPEN DOOR OF AN ODDLY PROPORTIONED HOUSE", "NW");									// 9
	Room yellowFront("IN A YELLOW FRONT ROOM", "EW");																// 10
	Room tvSet("BY A TV SET AND A RECORDER", "NW");																	// 11
	Room endDarkTunnel("AT THE END OF A DARK TUNNEL", "NS")	;														// 12
	Room largeSwitch("BY A LARGE SWITCH CONNECTED BY THE RAILWAY TRACKS", "NE");									// 13
	Room windingTrack("ALONGSIDE THE WINDING TRACK", "EW");															// 14
	Room trackDisappears("AT THE END OF THE LINE - THE TRACK DISAPPEARS THROUGH A HOLE IN THE WALL", "W");			// 15
	Room videoScreens("BELOW A WHOLE WALL OF OVERSIZED VIDEO SCREENS", "S");										// 16
	Room maximiserPad("STANDING ON THE MAXIMISER PAD", "S");														// 17
	Room shelf("ON A SHELF OF DISTURBING APPARATUS - THERE IS A STOOL NEARBY", "NED");								// 18
	Room onStool("ON A SHORT STEP STOOL", "EWUD");																	// 19
	Room brokenElectronicParts("ON THE FLOOR OF AN OVERTURNED BOX OF BROKEN ELECTRONIC PARTS", "EW");				// 20
	Room railwayLineEmerges("AT A HOLE IN THE WALL FROM WHICH A RAILWAY LINE EMERGES", "EW");						// 21
	Room swivelChair("AT THE BASE OF A SWIVEL CHAIR", "NEW");														// 22
	Room computerTerminal("STANDING ON A COMPUTER TERMINAL WITH A SECURITY LOCK", "NW");							// 23

	
	Map microPuzzleMap;
	// create a map using the game rooms
	microPuzzleMap.populateMap(insideMouseHole);
	microPuzzleMap.populateMap(atMouseHole);
	microPuzzleMap.populateMap(edgeHighTable);
	microPuzzleMap.populateMap(backHallway);
	microPuzzleMap.populateMap(storage);
	microPuzzleMap.populateMap(kitchen);
	microPuzzleMap.populateMap(smellyTunnel);
	microPuzzleMap.populateMap(railwaySiding);
	microPuzzleMap.populateMap(treeBase);
	microPuzzleMap.populateMap(oddHouse);
	microPuzzleMap.populateMap(yellowFront);
	microPuzzleMap.populateMap(tvSet);
	microPuzzleMap.populateMap(endDarkTunnel);
	microPuzzleMap.populateMap(largeSwitch);
	microPuzzleMap.populateMap(windingTrack);
	microPuzzleMap.populateMap(trackDisappears);
	microPuzzleMap.populateMap(videoScreens);
	microPuzzleMap.populateMap(maximiserPad);
	microPuzzleMap.populateMap(shelf);
	microPuzzleMap.populateMap(onStool);
	microPuzzleMap.populateMap(brokenElectronicParts);
	microPuzzleMap.populateMap(railwayLineEmerges);
	microPuzzleMap.populateMap(swivelChair);
	microPuzzleMap.populateMap(computerTerminal);

	return microPuzzleMap;
}

/*****************************************************************************
 * Function name:		printCurrentRoomDescription(Map&, Player&)
 *
 * Function output:		void
 *
 * Description:			prints the description of the room the player is 
 *						currently in
 * **************************************************************************/
void Game::printCurrentRoomDescription(Map& micropuzzlemap, Player& player)
{
	Room room("","");
	room = micropuzzlemap.getRoom(player.getCurrentRoom()); // Gets the players current room from the Vector map
	cout << "YOU ARE IN "; 
	cout << room.getRoomDescription() << endl; // print the current position of the player
}

/*****************************************************************************
 * Function name:		printPossibleDirections(Map&, Player&)
 *
 * Function output:		void
 *
 * Description:			Prints all the possible directions a player can go from
 *						the room they're currently in
 * **************************************************************************/
void Game::printPossibleDirections(Map& micropuzzlemap, Player& player)
{
	Room room("","");
	room = micropuzzlemap.getRoom(player.getCurrentRoom()); // Gets the players current room from the Vector map
	cout << "YOU CAN GO ";

	cout << room.getRoomDirections() << endl; // prints possible directions a player can move in
}

/*****************************************************************************
 * Function name:		roomCheckObject(Map&, Player&)
 *
 * Function output:		void
 *
 * Description:			Checks whether any objects are in the room the player 
 *						has moved into. If there is they will be displayed
 *						to the player.
 * **************************************************************************/
void Game::roomCheckObject(Map& micropuzzlemap, Player& player)
{
	Room room("","");
	room = micropuzzlemap.getRoom(player.getCurrentRoom()); // Gets the players current room from the Vector map
	for(int i = 0; i < gameObjects.size(); i++)
	{
		if((player.getCurrentRoom() == gameObjects[i].getObjectCurrentRoom()) && (gameObjects[i].getObjectTaken() == false))
		{
			cout << "THERE IS A " << gameObjects[i].getObjectName() << endl;
		}
	}

	
	if((gameObjects[8].getObjectUsed() == false) && (player.getCurrentRoom() == 19)) // if cat hasnt been used
	{
		cout << "YOU ARE CONFRONTED BY A LARGE CAT" << endl;
	}
}

/*****************************************************************************
 * Function name:		verbCheck(string)
 *
 * Function output:		string
 *
 * Description:			Checks the first word the player entered is a verb on
 *						games verblist then returns it for future use
 * **************************************************************************/
string Game::verbCheck(string playerInput)
{
	string verb = "";
	string chr;
	string charr;
	int i = 0;
	bool isWordVerb = false;
	bool wordHasSpaces = false;

	for(int i = 0; i < playerInput.size(); i++)
	{
		if(isspace(playerInput[i]))
		{
			wordHasSpaces = true;
		}
	}

	// Split string to just first word
	if(playerInput.size() == 1)
	{
		verb = playerInput;
		verb.substr(0, 0);
	}
	else if(wordHasSpaces == false)
	{
		verb = playerInput;
	}
	else
	{
		while (playerInput[i] != ' ') // gets the first word character by character until it reaches a space
		{
			chr = playerInput[i];
			verb.append(chr);
			i++;
		}
	}


	// Check the word is on verb list
	if(verb != "")	// try to match the players instructions with a verb on the gameVerb list
	{
		for(int i = 0; i < gameVerbs.size(); i++)
		{
			if(verb == gameVerbs[i].getVerb())
			{
				isWordVerb = true;
			}
		}
	}

	if(isWordVerb == true)
	{
		return verb;
		cout << "Word is a verb" << endl;
	}
	else
	{
		verb = "Not verb";
		return verb;
		cout << "Word is not a verb" << endl;
	}
}

/*****************************************************************************
 * Function name:		objectCheck(string)
 *
 * Function output:		string
 *
 * Description:			Checks the second word the player entered is an object on
 *						the games object list then returns it for future use
 * **************************************************************************/
string Game::objectCheck(string playerInput)
{
	int verbLength = 0;
	string object;
	bool isWordObject = false;
	int playerInputSize = 0;
	bool beginCut = false;
	bool wordHasSpaces = false;

	playerInputSize = playerInput.length();

	// cut first word from the string












	for(int i = 0; i < playerInput.size(); i++)
	{
		if(isspace(playerInput[i]))
		{
			wordHasSpaces = true;
		}
	}
	if(wordHasSpaces == true)
	{
		while(playerInput[verbLength] != ' ')
		{
			verbLength++;
		}
	

		object = playerInput.erase(0, verbLength + 1); // +1 so the space character is removed too!

		cout << object << endl;

		// check the word is on the object list
		if(object != "")	// try to match the players instructions with an object on the gameObject list
		{
			for(int i = 0; i < gameObjects.size(); i++)
			{
				if(object == gameObjects[i].getObjectName())
				{
					isWordObject = true;
				}
			}
		}

		if(isWordObject == true)
		{
			return object;
			cout << "Word is an object or item" << endl;
		}
		else
		{
			//object = "Not object";
			return object;
			cout << "Word is not a object" << endl;
		}
	}
	return object;
}

/*****************************************************************************
 * Function name:		dealWithInput(string, string, Player&, Map&)
 *
 * Function output:		void
 *
 * Description:			takes the players instructions and works out what to do
 *						with them
 * **************************************************************************/
void Game::dealWithInput(string verb, string object, Player& player, Map& microPuzzleMap)
{
	int verbNum = 0;

	for(int i = 0; i < gameVerbs.size(); i++)
	{
		if(verb == gameVerbs[i].getVerb())
		{
			verbNum = i;
		}
	}

	switch(verbNum)
	{
	case 0:	displayInventory(player);// I
		break;
	case 1:	moveDirection(object, player, microPuzzleMap, verb);// GO
		break;
	case 2:	moveDirection(object, player, microPuzzleMap, verb);// N
		break;
	case 3: moveDirection(object, player, microPuzzleMap, verb);// S
		break;
	case 4: moveDirection(object, player, microPuzzleMap, verb);// W
		break;
	case 5: moveDirection(object, player, microPuzzleMap, verb);// E
		break;
	case 6: // U
		break;
	case 7: // D
		break;
	case 8: jump(player);// JUMP
		break;
	case 9: take(player, object);// GET
		break;
	case 10: take(player, object);
		break;
	case 11: put(player, object);// PUT
		break;
	case 12: open(player, object);// OPEN
		break;
	case 13: examine(player, object);// EXAMINE
		break;
	case 14: // READ
		break;
	case 15: tie(player, object);// TIE
		break;
	case 16: climb(object, player); // CLIMB
		break;
	case 17: point(player, object);// POINT
		break;
	case 18: // EAT
		break;
	case 19: unlock(player, object);// UNLOCK
		break;
	case 20: leave(player, object);// LEAVE
		break;
	case 21: type(player, object);// TYPE
		break;
	case 22: press(player, object);// PRESS
		break;
	case 23: // SCORE
		break;
	default: cout << "DEFAULT" << endl;
	}
}

/*****************************************************************************
 * Function name:		displayMessage()
 *
 * Function output:		void
 *
 * Description:			prints out the current set up message to the player
 *						
 * **************************************************************************/
void Game::displayMessage()
{
	cout << message << endl;
}

/*****************************************************************************
 * Function name:		moveDirection(string, Player&, Map&, string)
 *
 * Function output:		void
 *
 * Description:			handles all the players possible movements on the map
 *						
 * **************************************************************************/
void Game::moveDirection(string playerInputObject, Player& player, Map& microPuzzleMap, string verb)
{
	Room room("","");
	room = microPuzzleMap.getRoom(player.getCurrentRoom()); // Gets the players current room from the Vector map

	int directionsLength = room.getRoomDirections().size(); // calc number of possible directions from room
	string directions = room.getRoomDirections();	// hold room directions
	bool allowedToMove = false;

	if((playerInputObject.compare("NORTH") == 0) || (verb.compare("N") == 0))
	{
		// get current room directions THEN check 'N' is in the string
		for(int i = 0; i < directionsLength; i++)
		{
			if(directions[i] == 'N')
			{
				allowedToMove = true;
			}
			else
			{
				message = "CANNOT GO NORTH";
			}
		}

		if(allowedToMove == true)
		{
			player.goNorth(player);	// Only call if allowed to move north
			message = "OK";
		}
	}
	else if((playerInputObject.compare("SOUTH") == 0) || (verb.compare("S") == 0))
	{
		// get current room directions THEN check 'S' is in the string
		for(int i = 0; i < directionsLength; i++)
		{
			if(directions[i] == 'S')
			{
				allowedToMove = true;
			}
			else
			{
				message = "CANNOT GO SOUTH";
			}
		}

		if(player.getCurrentRoom() == 6)
		{
			if(gameObjects[13].getObjectUsed() == false) // checks to see if the mosue has been used
			{
				allowedToMove = false;
				message = "AN ANGRY MOUSE BARS YOUR WAY";
			}
		}

		if(allowedToMove == true)
		{
			player.goSouth(player);	// Only call if allowed to move south
			message = "OK";
		}
	}
	else if((playerInputObject.compare("EAST") == 0) || (verb.compare("E") == 0))
	{
		// get current room directions THEN check 'E' is in the string
		for(int i = 0; i < directionsLength; i++)
		{
			if(directions[i] == 'E')
			{
				allowedToMove = true;
			}
			else
			{
				message = "CANNOT GO EAST";
			}
		}

		if(player.getCurrentRoom() == 19)
		{
			if(gameObjects[8].getObjectUsed() == false) // checks to see if the CAT has been used
			{
				allowedToMove = false;
				message = "THE CAT WILL NOT LET YOU";
			}
		}

		if(allowedToMove == true)
		{
			player.goEast(player);	// Only call if allowed to move east
			message = "OK";
		}
	}
	else if((playerInputObject.compare("WEST") == 0) || (verb.compare("W") == 0))
	{
		// get current room directions THEN check 'W' is in the string
		for(int i = 0; i < directionsLength; i++)
		{
			if(directions[i] == 'W')
			{
				allowedToMove = true;
			}
			else
			{
				message = "CANNOT GO WEST";
			}
		}

		if(allowedToMove == true)
		{
			player.goWest(player);	// Only call if allowed to move west
			message = "OK";
		}
	}
	else
	{
			message = "CANNOT GO " + playerInputObject;
	}
}

/*****************************************************************************
 * Function name:		take(Player& player, string objectName)
 *
 * Function output:		void
 *
 * Description:			handles the use of the take verb in game
 *						
 * **************************************************************************/
void Game::take(Player& player, string objectName)
{

	int objectPosition = 0;
	// get objects current room
	for(int i = 0; i < gameObjects.size(); i++)
	{
		if(objectName == gameObjects[i].getObjectName())
		{
			objectPosition = i; // get position of item position in the vector
		}
	}

	// check the item the player is trying to take is in the room
	if(player.getCurrentRoom() == gameObjects[objectPosition].getObjectCurrentRoom())
	{
		if(gameObjects[objectPosition].getObjectTaken() == false)
		{
			player.inventory.push_back(gameObjects[objectPosition]);
			gameObjects[objectPosition].setObjectTaken(true);
			message = "YOU HAVE THE " + gameObjects[objectPosition].getObjectName();
		}
	}
	else if(gameObjects[objectPosition].getObjectTaken() == true)
	{
		message = "YOU ALREADY HAVE IT";
	}
	else if(player.getCurrentRoom() != gameObjects[objectPosition].getObjectCurrentRoom())
	{
		message = "IT IS NOT HERE";
	}
}

/*****************************************************************************
 * Function name:		leave(Player& player, string objectName)
 *
 * Function output:		void
 *
 * Description:			handles the use of the leave verb in game
 *						
 * **************************************************************************/
void Game::leave(Player& player, string objectName)
{
	int objectPosition = 0;
	int playerCurrentRoom = player.getCurrentRoom();
	// get objects current room
	for(int i = 0; i < gameObjects.size(); i++)
	{
		if(objectName == gameObjects[i].getObjectName())
		{
			objectPosition = i; // get position of item position in the vector
		}
	}

	// check player has the object they want to leave
	for(int i = 0; i < player.inventory.size(); i++)
	{
		if(objectName == player.inventory[i].getObjectName())
		{
			// pushed off vector
			player.inventory.erase(player.inventory.begin() + i);

			// set current room for object
			gameObjects[objectPosition].setObjectCurrentRoom(playerCurrentRoom);

			// set object taken
			gameObjects[objectPosition].setObjectTaken(false);
		}
	}

	// check if player is leaving cheese for mouse in room 6
	if((gameObjects[objectPosition].getObjectName() == "CHEESE") && (player.getCurrentRoom() == 6))
	{
		// set message "THE MOUSE RUNS OFF WITH IT"
		message = "THE MOUSE RUNS OFF WITH IT";
		// set mouse object to used
		gameObjects[13].setObjectUsed(true);
		// set cheese to used
		gameObjects[2].setObjectUsed(true);
		gameObjects[2].setObjectTaken(true);
	}
}

/*****************************************************************************
 * Function name:		Inventory(Player&)
 *
 * Function output:		void
 *
 * Description:			displays the players current inventory
 *						
 * **************************************************************************/
void Game::displayInventory(Player& player)
{
	cout << "YOU ARE CARRYING:" << endl;

	// print all object names in the inventory vector
	for(int i = 0; i < player.inventory.size(); i++)
	{
		cout << player.inventory[i].getObjectName() << " ,";
	}

	cout << endl;
	cout << "PRESS RETURN TO CONTINUE" << endl;
	cout << "?";
	cin.ignore(2);

}

/*****************************************************************************
 * Function name:		Inventory(Player&)
 *
 * Function output:		void
 *
 * Description:			handles the use of the jump verb in game
 *						
 * **************************************************************************/
void Game::jump(Player& player)
{
	message = "ARE YOU PRACTISING FOR THE OLYMPICS?";
	if((player.getCurrentRoom() == 8) || (player.getCurrentRoom() == 2))
	{
		message = "IT IS TOO FAR TO JUMP";
	}
}

/*****************************************************************************
 * Function name:		tie(Player&, string)
 *
 * Function output:		void
 *
 * Description:			handles the use of the tie verb in game
 *						
 * **************************************************************************/
void Game::tie(Player& player, string object)
{
	bool playerHasThread = false;
	string input;
	// does the player have the thread
	for(int i = 0; i < player.inventory.size(); i++)
	{
		if(player.inventory[i].getObjectName() == "THREAD")
		{
			playerHasThread = true;
		}
	}

	if(playerHasThread == false)
	{
		message = "YOU DO NOT HAVE THREAD";
	}

	// check player is trying to tie thread
	if((playerHasThread == true) && (gameObjects[4].getObjectUsed() == false))
	{
		if(object == gameObjects[4].getObjectName())
		{
			cout << "TIE THE THREAD TO WHAT" << endl << "?";
			getline(cin, input);
		}
		else
		{
			message = "CANNOT TIE " + object;
		}
		if((input == "TREE") && (player.getCurrentRoom() == 8))
		{
			// set thread to used
			gameObjects[4].setObjectUsed(true);
			// remove from player inventory
			for(int i = 0; i < player.inventory.size(); i++)
			{
				if(player.inventory[i].getObjectName() == "THREAD")
				{
					player.inventory.erase(player.inventory.begin() + i);
				}
			}
			// print "it is securely tied." in next message
			message = "IT IS SECURELY TIED";
		}
		else if((input != "TREE") || (player.getCurrentRoom() != 8))
		{
			message = "CANNOT TIE IT TO " + input; // Any other object can't be tied
		}
	}
	else if(object != gameObjects[4].getObjectName())// player tries to tie other object
	{
		message = "CANNOT TIE " + object;
	}
}

/*****************************************************************************
 * Function name:		climb(Player&, string)
 *
 * Function output:		void
 *
 * Description:			handles the use of the climb verb in game
 *						
 * **************************************************************************/
void Game::climb(string object, Player& player)
{
	int flag = 0;
	if(player.getCurrentRoom() == 8)
	{
		flag = 1;
	}
	else
	{
		flag = 0;
	}
	// IF player does not have thread
	for(int i = 0; i < player.inventory.size(); i++)
	{
		if(player.inventory[i].getObjectName() == "THREAD")
		{
			message = "YOU DO NOT HAVE THREAD";
		}
	}

	// IF thread hasnt been used "It's not tied to anything"
	if((gameObjects[4].getObjectUsed() == false))
	{
		message = "IT'S NOT TIED TO ANYTHING";
	}

	// IF thread has been tied and player is in room 9 set current room to 8
	if((player.getCurrentRoom() == 7) && (gameObjects[4].getObjectUsed() == true) && (flag == 0) && (object == "THREAD"))
	{
		player.setCurrentRoom(8);
		message = "OK";
	}

	// IF thread has been tied and player is in room 8 set current room to 7
	if((player.getCurrentRoom() == 8) && (gameObjects[4].getObjectUsed() == true) && (flag == 1) && (object == "THREAD"))
	{
		player.setCurrentRoom(7);
		message = "OK";
	}

	// IF player is in room 9 and tries to climb tree "IT IS TOO SMOOTH TO CLIMB"
	if((player.getCurrentRoom() == 8) && (object == "TREE"))
	{
		message = "IT IS TOO SMOOTH TO CLIMB";
	}
}

/*****************************************************************************
 * Function name:		put(Player&, string)
 *
 * Function output:		void
 *
 * Description:			handles the use of the put verb in game
 *						
 * **************************************************************************/
void Game::put(Player& player, string objectName)
{
	bool playerHasKey = false;
	string input;
	int playerCurrentRoom = player.getCurrentRoom();
	// key can only be put on train in room 13
	// does the player have the key?
	for(int i = 0; i < player.inventory.size(); i++)
	{
		if(player.inventory[i].getObjectName() == "KEY")
		{
			playerHasKey = true;
		}
	}

	if((playerHasKey == true) && (gameObjects[0].getObjectUsed() == false))
	{
		if(objectName == gameObjects[0].getObjectName())
		{
			cout << "PUT KEY WHERE" << endl;
			getline(cin, input);
		}

		if((input == "TRAIN") && (player.getCurrentRoom() == 13))
		{
			// set current room of key
			gameObjects[0].setObjectCurrentRoom(playerCurrentRoom);
			gameObjects[0].setObjectTaken(false);
			// remove key from inventory
			for(int i = 0; i < player.inventory.size(); i++)
			{
				if(player.inventory[i].getObjectName() == "KEY")
				{
					player.inventory.erase(player.inventory.begin() + i);
				}
			}
			message = "WELL DONE!";
		}
		else if(input != "TRAIN")
		{
			message = "NOT REALLY!";
		}
	}
	else if(playerHasKey = false)
	{
		message = "YOU DO NOT HAVE KEY";
	}
	else if((input == "TRAIN") && (playerCurrentRoom != 13))
	{
		cout << "THAT IS SILLY" << endl;
	}
}

/*****************************************************************************
 * Function name:		press(Player&, string)
 *
 * Function output:		void
 *
 * Description:			handles the use of the press verb in game
 *						
 * **************************************************************************/
void Game::press(Player& player, string object)
{
	if((player.getCurrentRoom() == 13) && (object == "SWITCH"))
	{
		// set train current room 21
		gameObjects[7].setObjectCurrentRoom(21);

		// set key current room 21 IF its current room is 13
		if(gameObjects[0].getObjectCurrentRoom() == 13)
		{
			gameObjects[0].setObjectCurrentRoom(21);
		}
		message = "THE TRAIN CHUGS AWAY AND INTO A TUNNEL";
	}

	if((player.getCurrentRoom() == 17) && (object == "BUTTON") && (gameObjects[17].getObjectUsed() == true))
	{
		gameObjects[21].setObjectUsed(true);// set maximiser to used
	}
}

/*****************************************************************************
 * Function name:		open(Player&, string)
 *
 * Function output:		void
 *
 * Description:			handles the use of the open verb in game
 *						
 * **************************************************************************/
void Game::open(Player& player, string object)
{
	bool playerHasBottle = false;
	// check player has the object in inventory
	for(int i = 0; i < player.inventory.size(); i++)
	{
		if(player.inventory[i].getObjectName() == "BOTTLE")
		{
			playerHasBottle = true;
		}
	}
	if(playerHasBottle == true)
	{
		// if bottle is opened inside room 19
		if((object == "BOTTLE") && (player.getCurrentRoom() == 19))
		{
			message = "A LOUDLY BUZZING FLY FLIES OUT AND THE CAT CHASES AFTER IT";
			// set cat to used
			gameObjects[8].setObjectUsed(true);
			// set bottle to used
			gameObjects[6].setObjectUsed(true);
			// remove bottle from inventory
			for(int i = 0; i < player.inventory.size(); i++)
			{
				if(player.inventory[i].getObjectName() == "BOTTLE")
				{
					player.inventory.erase(player.inventory.begin() + i);
				}
			}
		}
		else if((object == "BOTTLE") && (player.getCurrentRoom() != 19)) 	// if bottle is opened outside of room 19 (stool room)
		{
			message = "A LOUDLY BUZZING FLY FLIES OUT";
			gameObjects[8].setObjectUsed(true);
			// set bottle to used
			gameObjects[6].setObjectUsed(true);
			// remove bottle from inventory
			for(int i = 0; i < player.inventory.size(); i++)
			{
				if(player.inventory[i].getObjectName() == "BOTTLE")
				{
					player.inventory.erase(player.inventory.begin() + i);
				}
			}
		}
	}
	else if(playerHasBottle == false)
	{
		message = "YOU DO NOT HAVE " + object;
	}
}

/*****************************************************************************
 * Function name:		examine(Player&, string)
 *
 * Function output:		void
 *
 * Description:			handles the use of the examine verb in game
 *						
 * **************************************************************************/
void Game::examine(Player& player, string object)
{
	if(object == "PAPER")
	{
		if(gameObjects[3].getObjectTaken() == true)
		{
			message = "TERMINAL PASSWORD=GROCER";
		}
		else
		{
			message = "NOTHING OF INTEREST";
		}
	}

	if(object == "BOTTLE")
	{
		if(gameObjects[6].getObjectTaken() == true)
		{
			message = "IT CONTAINS A LARGE FLY";
		}
		else
		{
			message = "NOTHING OF INTEREST";
		}
	}

	if(object == "CAT")
	{
		if((player.getCurrentRoom() == 19) && gameObjects[8].getObjectUsed() == false)
		{
			message = "IT CLAWS AND SCRATCHES";
		}
		else
		{
			message = "NOTHING OF INTEREST";
		}
	}

	if(object == "TERMINAL")
	{
		if((gameObjects[18].getObjectUsed() == false) && (player.getCurrentRoom() == 23))
		{
			message = "THIS TERMINAL IS NON-ACTIVATED";
		}
		else if((gameObjects[18].getObjectUsed() == true) && (player.getCurrentRoom() == 23))
		{
			message = "THE TERMINAL ECHOES  :TERMINAL";
		}
	}

	if(object == "COMPUTER")
	{
		message = "NOTHING OF INTEREST";
	}

	if(object == "REMOTE-CONTROL")
	{
		if(gameObjects[5].getObjectTaken() == true)
		{
			message = "THERE IS A BIG RED BUTTON";
		}
		else
		{
			message = "NOTHING OF INTEREST";
		}
	}

	if(object == "KEY")
	{
		if(gameObjects[0].getObjectTaken() == true)
		{
			message = "THE NUMBER '111' IS ENGRAVED ON IT";
		}
		else
		{
			message = "NOTHING OF INTEREST";
		}
	}
}

/*****************************************************************************
 * Function name:		unlock(Player&, string)
 *
 * Function output:		void
 *
 * Description:			handles the use of the unlock verb in game
 *						
 * **************************************************************************/
void Game::unlock(Player& player, string object)
{
	bool playerHasKey = false;

	// check player has key 
	for(int i = 0; i < player.inventory.size(); i++)
	{
		if(player.inventory[i].getObjectName() == "KEY")
		{
			playerHasKey = true;
		}
	}

	if(playerHasKey == true)
	{
		if((object == "TERMINAL") && (player.getCurrentRoom() == 23))
		{
			message = "TERMINAL ACTIVE";
			gameObjects[18].setObjectUsed(true); // set terminal to used
			gameObjects[0].setObjectUsed(true); // set key to used
			
			// remove Key from inventory
			for(int i = 0; i < player.inventory.size(); i++)
			{
				if(player.inventory[i].getObjectName() == "KEY")
				{
					player.inventory.erase(player.inventory.begin() + i);
				}
			}
			
			gameObjects[0].setObjectTaken(false); // object key no longer taken by player
		}
	}
	else if ((object != "TERMINAL"))
	{
		message = "WHAT?";
	}
	
	if((object == "TERMINAL") && (player.getCurrentRoom() == 23) && (playerHasKey == false))
	{
		message = "*!  TAMPER  *!";
		selfDestructCounter = true;
	}
}

/*****************************************************************************
 * Function name:		type(Player&, string)
 *
 * Function output:		void
 *
 * Description:			handles the use of the type verb in game
 *						
 * **************************************************************************/
void Game::type(Player& player, string object)
{
	if((player.getCurrentRoom() == 23) && (gameObjects[18].getObjectUsed() == true))
	{
		if(object == "GROCER")
		{
			message = "CODEWORD ACCEPTED";

			gameObjects[17].setObjectUsed(true);	// set grocer object to used
		}
		else if(object == "111")
		{
			message = "TERMINAL ID";
			gameObjects[19].setObjectUsed(true); // set '111' to used
		}
		else
		{
			message = "THE TERMINAL ECHOES  :" + object;
		}
	}
	else
	{
		message = "THIS TERMINAL IS NON-ACTIVATED";
	}
}

/*****************************************************************************
 * Function name:		tie(Player&, string)
 *
 * Function output:		void
 *
 * Description:			handles the use of the point verb in game
 *						
 * **************************************************************************/
void Game::point(Player& player, string object)
{
	string input;

	if((object == "REMOTE-CONTROL") && (gameObjects[5].getObjectTaken() == true))
	{
		cout << "POINT IT AT WHAT" << endl;
		cout << "?";
		getline(cin, input);

		if((input == "MAXIMISER") && (player.getCurrentRoom() == 17))
		{
			gameObjects[5].setObjectUsed(true); // set remote-control to used
			message = "VERY WELL";
		}
		else
		{
			message = "VERY WELL";
		}
	}
}

/*****************************************************************************
 * Function name:		gameOver()
 *
 * Function output:		bool
 *
 * Description:			checks to see if the player has reached the end of the
 *						game, ran out of time, or the self destruct timer has
 *						reached 0
 * **************************************************************************/
bool Game::gameOver()
{
	if(gameObjects[21].getObjectUsed() == true)
	{
		cout << "THE MAXIMISER BEAM WORKS. YOU ARE RETURNED TO NORMAL SIZE" << endl;
		cout << "GAME OVER" << endl;

		return true;
	}
	else if(counter == 0)
	{
		cout << "YOU HAVE RUN OUT OF TIME. THE MAXIMISER SELF DESTRUCTED" << endl;
		cout << "GAME OVER" << endl;
		return true;
	}
	else if(selfDestructCountdown == 0)
	{
		cout << "YOU HAVE RUN OUT OF TIME. THE MAXIMISER SELF DESTRUCTED" << endl;
		cout << "GAME OVER" << endl;
		return true;
	}
	else
	{
		return false;
	}
}

/*****************************************************************************
 * Function name:		setCounter(int)
 *
 * Function output:		void
 *
 * Description:			sets the counter for how long the player has left
 *						to complete the game
 * **************************************************************************/
void Game::setCounter(int countDownNum)
{
	counter = countDownNum;
}

/*****************************************************************************
 * Function name:		gameCounter()
 *
 * Function output:		void
 *
 * Description:			function just decreses the counter by 1
 *						
 * **************************************************************************/
void Game::gameCounter()
{
	counter = counter - 1;
}

/*****************************************************************************
 * Function name:		getSelfDestructCounter()
 *
 * Function output:		bool
 *
 * Description:			gets the value of the self destruct counter
 *						
 * **************************************************************************/
bool Game::getSelfDestructCounter()
{
	return selfDestructCounter;
}

/*****************************************************************************
 * Function name:		getSelfDestructCountDownTimer()
 *
 * Function output:		void
 *
 * Description:			begins the self destruct sequence
 *						
 * **************************************************************************/
void Game::selfDestructCountDownTimer()
{
	if(selfDestructCounter == true)
	{
		selfDestructCountdown -= 1;
		cout << "SELF DESTRUCT COUNTDOWN AT : " << selfDestructCountdown << endl;
	}
}

/*****************************************************************************
 * Function name:		setSelfDestructCountDown(int)
 *
 * Function output:		void
 *
 * Description:			sets the value of how long self destruct sequence is
 *						
 * **************************************************************************/
void Game::setSelfDestructCountDown(int time)
{
	selfDestructCountdown = time;
}
/*****************************************************************************
 * Program Author:  Ethan Grant
 * Student ID:      12011576
 * File name:       Verb.h
 * Course code:     UFCFK4-30-2 C++ Development              
 * Date created:    28/03/2014
 * Last modified:	10/04/2014
 *
 * Description:		Verb.h class definition
 * **************************************************************************/

#ifndef VERB_H
#define VERB_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Verb
{
public:
	// constructor
	Verb(string);

	// destructor
	~Verb();

	// member functions
	string getVerb();
	void setVerb(string);

private:
	string verb;
};

#endif
/*****************************************************************************
 * Program Author:  Ethan Grant
 * Student ID:      12011576
 * File name:       Octagon.cpp
 * Course code:     UFCFK4-30-2 C++ Development              
 * Date created:    28/03/2014
 * Last modified:	10/04/2014
 *
 * Description:		Member function implementation for Verb.h
 *					
 * **************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Verb.h"

/*****************************************************************************
 * Function name:		Verb class constructor
 *
 * Function output:		Void
 *
 * Description:			Class must be intialized with a string value.
 *						
 * **************************************************************************/
Verb::Verb(string verb)
{
	setVerb(verb);
}

/*****************************************************************************
 * Function name:		Verb class destructor
 *
 * Function output:		Void
 *
 * Description:			Verb class destructor
 *						
 * **************************************************************************/
Verb::~Verb()
{

}

/*****************************************************************************
 * Function name:		getVerb()
 *
 * Function output:		string
 *
 * Description:			getter to return the value of verb
 *						
 * **************************************************************************/
string Verb::getVerb()
{
	return verb;
}

/*****************************************************************************
 * Function name:		setVerb()
 *
 * Function output:		string
 *
 * Description:			setter to set the value of verb
 *						
 * **************************************************************************/
void Verb::setVerb(string ver)
{
	verb = ver;
}
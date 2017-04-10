#include "MainClass.h"
#include <iostream>

using namespace std;

/*
Program Name: UNO Project
Authors: Christopher Nguyen, Jason Blodgett, Brian Crink
Description: Local copy of the UNO project.
Last Changed: April 4, 2017
*/

MainClass::MainClass()
{
}

MainClass::~MainClass()
{
}

int borderLine()
{
	cout << "  ";
	for (int i = 0; i < 71; i++)		//replace 71 with the length of console window
	{
		cout << "_";
	}
	cout << endl << endl;
	return 0;
}

char turnPage(char anyKey)
//clears console window
{
	while (true)
	{
		char input;
		cout << "Press any key to continue: ";
		cin >> input;

		if (input = anyKey)
		{
			system("cls");
		}
		return 0;
	}
}

int main()
//States the purpose of the program.
{
	//Variables go here
	char anyKey = ' ';

	borderLine();
	cout << "				  Uno						" << endl << endl;
	cout << "			       Card Game				 " << endl << endl << endl << endl;
	cout << "			     [Version 1.0.1]						" << endl << endl;
	cout << "	   Copyright (c) 2017 BCJ Team.	All rights reserved. 				 " << endl;
	borderLine();

	turnPage(anyKey);
	//call function to turn page

	borderLine();
	cout << "				developed by:                " << endl << endl;
	cout << "				Brian Crink				     " << endl << endl;
	cout << "				Chris Nguyen			     " << endl << endl;
	cout << "				Jason Blodgett			     " << endl << endl;
	borderLine();

	turnPage(anyKey);

	borderLine();
	borderLine();

	system("pause");
}
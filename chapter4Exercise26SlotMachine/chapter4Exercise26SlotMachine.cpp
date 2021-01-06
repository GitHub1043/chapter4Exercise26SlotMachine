// This program gives the user 100 tokens and simulates a slot machine
// Written by: Ayden Holgate
// Date: Dec. 14, 2020

// chapter4Exercise26SlotMachine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{// Start of program
	srand (time(0));
	
	int tokens = 100, wheel1, wheel2, wheel3;
	char pull;

	cout << "You have " << tokens << " tokens." << " Pull? ";
	cin >> pull;

	while (pull == 'y'){
	tokens--;

	wheel1 = rand() % 3 + 1;
	wheel2 = rand() % 3 + 1;
	wheel3 = rand() % 3 + 1;

	cout << "(" << wheel1 << ")" << "(" << wheel2 << ")" << "(" << wheel3 << ")" << endl;

	if (wheel1 == 1 && wheel2 == 1 && wheel3 == 1){
		tokens += 4;
		cout << "You won 4 tokens!" << endl;
	}
	else if (wheel1 == 2 && wheel2 == 2 && wheel3 == 2){
		tokens += 8;
		cout << "You won 8 tokens!" << endl;
	}
	else if (wheel1 == 3 && wheel2 == 3 && wheel3 == 3){
		tokens += 12;
		cout << "You won 12 tokens!" << endl;
	}
	else{
		cout << "You Lost." << endl;
	}

	cout << "You have " << tokens << " tokens." << " Pull? ";
	cin >> pull;

	}

	cout << "Thanks for playing!" << endl;

	return 0;
}// End of program


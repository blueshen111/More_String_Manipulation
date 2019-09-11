// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

char findFirstLetter(string stuff) {
	return stuff.front();
	}
	
char findLastLetter(string stuff) {
	return stuff.back();
	}

bool letterChecker(char first, char last) {

	if (first == 'a' || first == 'b' || first == 'c' || first == 'd' || first == 'e')
		return true;

	if (last == 'a' || last == 'b' || last == 'c' || last == 'd' || last == 'e') 
		return true;

	else {

		return false;
	}

}


string stringReverser(string stuff) {

	
	cout << stuff.back() << endl;

	
}



int main()
{
	string userInput;
	cout << "enter a string" << endl;
	cin >> userInput;

	//char myStringFirst = findFirstLetter(userInput);

	//bool myFirstLetter = letterChecker(findFirstLetter(userInput), findLastLetter(userInput));

	//cout << myFirstLetter << endl;

	string myReversedString = stringReverser(userInput);

	cout << myReversedString << endl; 




	//index = userInput.length
	//while (index >= 0) {
			  

	//	cout << myReversedString << endl;

	//	index--;
	//}
}

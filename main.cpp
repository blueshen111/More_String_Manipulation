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


char stringReverser(string stuff) {

	return stuff.back();
}



int main()
{
	string userInput;
	//cout << "enter a string" << endl;
	//cin >> userInput;

	//char myStringFirst = findFirstLetter(userInput);

	//bool myFirstLetter = letterChecker(findFirstLetter(userInput), findLastLetter(userInput));

	//cout << myFirstLetter << endl;

	//char myReversedString = stringReverser(userInput);

	//cout << myReversedString << endl;

	//int index = userInput.length();
	//while (index >= 1) {

	//	cout << myReversedString ;

	//	index--;
	//}



	string yourString = "this is my big long string and i want you to extract stuff from it";

	//cout << yourString[yourString.length() - 1] << endl;


	
		int index = yourString.length();
		while (index >= 0) {

			cout << yourString[index];
			//cout << index << endl;
			index--;

	}

			
			//for (int i = yourString.length();; i <= 6; i++) {
				
			//	cout << yourString[yourString.length() - 1];


			//}
			



	//index = userInput.length();
//while (index >= 0) {

	//	cout << myReversedString << endl;

	//index--;
	//}


}

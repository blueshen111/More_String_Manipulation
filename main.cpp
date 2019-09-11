// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h"
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
		return cout << "TRUE" << endl;

	if (last == 'a' || last == 'b' || last == 'c' || last == 'd' || last == 'e')
		return cout << "TRUE" << endl;

	else {

		return cout << "FALSE" << endl;
	}

}


char stringReverser(string stuff) {

	return stuff.back();
}


string reverser( string stuff ){

        int index = stuff.length();
		while (index >= 0 || index == NULL){

			//cout << yourString[index];
        index--;
        cout << stuff[index];
	}
}


bool palindromeDetector(string stuff){

if (stuff == reverser(stuff)){

    return cout << "TRUE" << endl;
}

else {
    return cout << "FALSE" << endl;
}
}


int main()
{
	//string userInput;
	//cout << "enter a string" << endl;
	//cin >> userInput;



    string yourString = "redrum";


	char myStringFirst = findFirstLetter(yourString);

	bool myFirstLetter = letterChecker(findFirstLetter(yourString), findLastLetter(yourString));

	cout << myFirstLetter << endl;

	//char myReversedString = stringReverser(userInput);


	//	int index = yourString.length();
	//	while (index >= 0) {

		//	cout << yourString[index];
		//	index--;
	//}

    // the user input way isn't working yet
    string theReversedString = reverser(yourString);
    // user input not working yet
    cout << theReversedString << endl;

    bool isItPalindrome = palindromeDetector(yourString);

     cout << isItPalindrome << endl;







}

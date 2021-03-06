//Merlin Call Keywords 2.cpp : Defines the entry point for the console application.
//The classic game of hangman

#include "stdafx.h""
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <windows.h>

using namespace std;

// Create an int var to count the number of simulations being run starting at 1
int sn = 1;

int main()
{
	string username;
	// Display Title of program to user
	cout << "Welcome to Keywords 2" << endl;
	// Ask the recruit to login using thier name
	cout << "Please enter your one word username to log in\n";
	// Hold the recruit's name in a var, and address them by it throughout the simulation.
	cin >> username;
	// Display an overview of what Keywords II is to the recruit 
	cout << "Thank you for logging in " << username << " the following instructions will go over the rules on the program.\n";
	cout << "In this program you have to solve another set of words chosen b the CIA to help train new recruits.\n";
	cout << "This version of the program will be in the form of hangman instead of a juble like the previous one.\n";
	// Display an directions to the recruit on how to use Keywords
	cout << "You will have a limited number of tries per word in order to solve what the word is.\n";
	cout << "THere are a few prechosen radomized words chose that you have to solve three of.\n";
	cout << "There are a total of five wrong tries then it is game over for each word.\n";
	cout << "The number of letters in the word you have to figure out will be shown.\n";
	//Display the simulation # is staring to the recruit.
	beginning:
	cout << "\nThis is simulation number " << sn;
	//setup
	// Create a collection of 10 words you had wrote down manually
	const int MAX_WRONG = 6;
	vector<string>words;
	words.push_back("spy");
	words.push_back("bond");
	words.push_back("mission");
	words.push_back("cia");
	words.push_back("agent");
	words.push_back("counterintelligence");
	words.push_back("intelligence");
	words.push_back("espionage");
	words.push_back("infiltrate");
	words.push_back("operative");

	// Pick new 3 random words from your collection as the secret code word the recruit has to guess. 
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());

	const string THE_WORD = words[0]; //word to guess
	int wrong = 0; //word guessed so far
	string soFar(THE_WORD.size(), '-');
	string used = ""; //letters aleady guessed

	// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word
	while ((wrong < MAX_WRONG) && (soFar != THE_WORD)) {
		//Tell recruit how many incorrect guesses he or she has left
		cout << "\n\nYou have " << (MAX_WRONG - wrong);
		cout << " incorrect guesses left.\n";
		//Show recruit the letters he or she has guessed
		cout << "\nYou have guesses the following letters:\n" <<
			used << endl;
		//Show player how much of the secret word he or she has guessed
		cout << "\nSo far, the word is:\n" << soFar;

		// Get recruit ’s guess
		char guess;
		cout << "\n\nEnter your guess" << endl;
		cin >> guess;
		//While recruit has entered a letter that he or she has already guessed
		while (used.find(guess) != string::npos)
		{
			cout << "\n You have already guessed " << guess << endl;
			cout << "Enter your guess" << endl;
			//Get recruit's next guess
			cin >> guess;
		}
		//Add the new guess to the group of used letters
		used += guess;

		//If the guess is in the secret word
		if (THE_WORD.find(guess) != string::npos)
		{
			//Tell the recruit the guess is correct
			cout << "That's right! " << guess << " is in the word.\n";
			//Update the word guessed so far with the new letter
			for (int i = 0; i < THE_WORD.length(); ++i)
			{
				if (THE_WORD[i] == guess) {
					soFar[i] = guess;
				}
			}
		}
		//Otherwise
		else
		{
			//Tell the recruit the guess is incorrect
			cout << "Sorry, " << guess << " isn't in the word.\n";
			//Increment the number of incorrect guesses the recruit has made
			++wrong;
		}
	}
	//shut down
	//If the recruit has made too many incorrect guesses
	if (wrong == MAX_WRONG)
	{
		//Tell the recruit that he or she has failed the Keywords II course.
		cout << "\nYou have failed the Keywords 2 program!";
		cout << "\n The word was " << THE_WORD;
		//Display End of Simulations to the recruit
		cout << "\nThis is the end of the simulation.";
		//Ask the recruit if they would like to run the simulation again
		cout << "\nWould you like to play again y/n" << endl;
		// If the recruit wants to run the simulation again
		if (GetAsyncKeyState('Y'))
		{
			//Increment the number of simiulations ran counter
			++sn;
			//Move program execution back up to // Display the simulation # is staring to the recruit. 
			goto beginning;
		}
			if (GetAsyncKeyState('N')) {
				//Pause the Simulation with press any key to continue
				//system("pause");
				// Otherwise 
				return 0;
			}
	}
	//Otherwise
	else {
		// Congratulate the recruit on guessing the secret words
		cout << "\nCongratulations you guessed the 1 secret word!";
	}

	cout << "\n The word was " << THE_WORD;
	cout << "\nNow on the the next word you have to solve." << endl;

	//word 2

	const int MAX_WRONG2 = 6;
	vector<string>words2;
	words2.push_back("spy");
	words2.push_back("bond");
	words2.push_back("mission");
	words2.push_back("cia");
	words2.push_back("agent");
	words2.push_back("counterintelligence");
	words2.push_back("intelligence");
	words2.push_back("espionage");
	words2.push_back("infiltrate");
	words2.push_back("operative");

	// Pick new 3 random words from your collection as the secret code word the recruit has to guess. 
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words2.begin(), words2.end());

	const string THE_WORD2 = words2[0]; //word to guess
	int wrong2 = 0; //word guessed so far
	string soFar2(THE_WORD2.size(), '-');
	string used2 = ""; //letters aleady guessed

					  // While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word
	while ((wrong2 < MAX_WRONG2) && (soFar2 != THE_WORD2)) {
		//Tell recruit how many incorrect guesses he or she has left
		cout << "\n\nYou have " << (MAX_WRONG2 - wrong2);
		cout << " incorrect guesses left.\n";
		//Show recruit the letters he or she has guessed
		cout << "\nYou have guesses the following letters:\n" <<
			used2 << endl;
		//Show player how much of the secret word he or she has guessed
		cout << "\nSo far, the word is:\n" << soFar2;

		// Get recruit ’s guess
		char guess2;
		cout << "\n\nEnter your guess" << endl;
		cin >> guess2;
		//While recruit has entered a letter that he or she has already guessed
		while (used2.find(guess2) != string::npos)
		{
			cout << "\n You have already guessed" << guess2 << endl;
			cout << "Enter your guess" << endl;
			//Get recruit's next guess
			cin >> guess2;
		}
		//Add the new guess to the group of used letters
		used2 += guess2;

		//If the guess is in the secret word
		if (THE_WORD2.find(guess2) != string::npos)
		{
			//Tell the recruit the guess is correct
			cout << "That's right! " << guess2 << " is in the word.\n";
			//Update the word guessed so far with the new letter
			for (int ii = 0; ii < THE_WORD2.length(); ++ii)
			{
				if (THE_WORD2[ii] == guess2) {
					soFar2[ii] = guess2;
				}
			}
		}
		//Otherwise
		else
		{
			//Tell the recruit the guess is incorrect
			cout << "Sorry, " << guess2 << " isn't in the word.\n";
			//Increment the number of incorrect guesses the recruit has made
			++wrong2;
		}
	}
	//shut down
	//If the recruit has made too many incorrect guesses
	if (wrong2 == MAX_WRONG2)
	{
		//Tell the recruit that he or she has failed the Keywords II course.
		cout << "\nYou have failed the Keywords 2 program!";
		cout << "\n The word was " << THE_WORD2;
		//     Display End of Simulations to the recruit
		cout << "\nThis is the end of the simulation.";
		//Ask the recruit if they would like to run the simulation again
		cout << "\nWould you like to play again y/n" << endl;
		// If the recruit wants to run the simulation again
		if (GetAsyncKeyState('Y'))
		{
			//Increment the number of simiulations ran counter
			++sn;
			//Move program execution back up to // Display the simulation # is staring to the recruit. 
			goto beginning;
		}
		if (GetAsyncKeyState('N')) {
			//Pause the Simulation with press any key to continue
			//system("pause");
			// Otherwise 
			return 0;
		}
	}
	//Otherwise
	else {
		// Congratulate the recruit on guessing the secret words
		cout << "\nCongratulations you guessed the second secret word!";
	}

	cout << "\n The word was " << THE_WORD2;
	cout << "\nNow on the the last word you have to solve.";

	//word 3

	const int MAX_WRONG3 = 6;
	vector<string>words3;
	words3.push_back("spy");
	words3.push_back("bond");
	words3.push_back("mission");
	words3.push_back("cia");
	words3.push_back("agent");
	words3.push_back("counterintelligence");
	words3.push_back("intelligence");
	words3.push_back("espionage");
	words3.push_back("infiltrate");
	words3.push_back("operative");

	// Pick new 3 random words from your collection as the secret code word the recruit has to guess. 
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words3.begin(), words3.end());

	const string THE_WORD3 = words3[0]; //word to guess
	int wrong3 = 0; //word guessed so far
	string soFar3(THE_WORD3.size(), '-');
	string used3 = ""; //letters aleady guessed

					   // While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word
	while ((wrong3 < MAX_WRONG3) && (soFar3 != THE_WORD3)) {
		//Tell recruit how many incorrect guesses he or she has left
		cout << "\n\nYou have " << (MAX_WRONG3 - wrong3);
		cout << " incorrect guesses left.\n";
		//Show recruit the letters he or she has guessed
		cout << "\nYou have guesses the following letters:\n" <<
			used3 << endl;
		//Show player how much of the secret word he or she has guessed
		cout << "\nSo far, the word is:\n" << soFar3;

		// Get recruit ’s guess
		char guess3;
		cout << "\n\nEnter your guess" << endl;
		cin >> guess3;
		//While recruit has entered a letter that he or she has already guessed
		while (used3.find(guess3) != string::npos)
		{
			cout << "\n You have already guessed" << guess3;
			cout << "Enter your guess" << endl;
			//Get recruit's next guess
			cin >> guess3;
		}
		//Add the new guess to the group of used letters
		used3 += guess3;

		//If the guess is in the secret word
		if (THE_WORD3.find(guess3) != string::npos)
		{
			//Tell the recruit the guess is correct
			cout << "That's right! " << guess3 << " is in the word.\n";
			//Update the word guessed so far with the new letter
			for (int iii = 0; iii < THE_WORD3.length(); ++iii)
			{
				if (THE_WORD3[iii] == guess3) {
					soFar3[iii] = guess3;
				}
			}
		}
		//Otherwise
		else
		{
			//Tell the recruit the guess is incorrect
			cout << "Sorry, " << guess3 << " isn't in the word.\n";
			//Increment the number of incorrect guesses the recruit has made
			++wrong3;
		}
	}
	//shut down
	//If the recruit has made too many incorrect guesses
	if (wrong3 == MAX_WRONG3)
	{
		//Tell the recruit that he or she has failed the Keywords II course.
		cout << "\nYou have failed the Keywords 2 program!";
		cout << "\n The word was " << THE_WORD3;
	}
	//Otherwise
	else {
		// Congratulate the recruit on guessing the secret words
		cout << "\nCongratulations you guessed the last secret word!";
	}

	cout << "\n The word was " << THE_WORD3;


	//Display End of Simulations to the recruit
	cout << "\nThis is the end of the simulation.";
	//Ask the recruit if they would like to run the simulation again
	cout << "\nWould you like to play again y/n" << endl;
	// If the recruit wants to run the simulation again
	if (GetAsyncKeyState('Y'))
	{
		//Increment the number of simiulations ran counter
		++sn;
		//Move program execution back up to // Display the simulation # is staring to the recruit. 
		goto beginning;
	}
	if (GetAsyncKeyState('N')) {
		//Pause the Simulation with press any key to continue
		//system("pause");
		// Otherwise 
		return 0;
	}
}
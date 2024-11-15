// Preprocessor directives
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <vector>

// Namespaces
using namespace std;

// Begin Player class
class Player {
	
	// Declare and initialize player object variables
	public:
		string name = "";
		int score = 0;
		char playerGuess = ' ';

		// Default constructor
		Player() {
		}

		// Player custom constructor
		Player(string playerName) {
			this->name = playerName;
		}

		// Function to control player spin, thus turn
		void playerSpin(string puzzle) {

			int playerSpin = 1 + rand() % 5;
			int amountToWin = 1 + rand() % 3;
			int multiplier = 0;
			char playerGuess = ' ';
			string continueOrNot = " ";

			cout << endl << "Player Spin: " << playerSpin << " Amount to win: " << amountToWin << endl;

			cout << endl << "Please enter a letter you think is in the puzzle: ";
			cin >> playerGuess;
			playerGuess = toupper(playerGuess);
			
			for (int i = 0; i < puzzle.size(); i++) {
				if (playerGuess == puzzle.at(i)) {
					multiplier++;
				}
			}

			cout << endl << "There are " << multiplier << " " << playerGuess << "'s in the puzzle. You have won " << (amountToWin * multiplier) << " points!";
			cout << endl;

			system("pause");
			system("cls");

			for (int i = 0; i < puzzle.length(); i++) {
				if (puzzle.at(i) == playerGuess) {
					cout << playerGuess;
				}
			}
		
		}

		string playerSolve() {
			return "Solve";
		}

}; // End Player class

// Begin category function
string category(string categoryName) {

	srand(time(0));

	// If structure to choose question
	if (categoryName == "Star Wars") {

		int choice = rand() % 1;
		switch (choice) {
		case 0:
			categoryName = "Darth Vader";
		case 1:
			categoryName = "Luke Skywalker";
		} 
		for (int i = 0; i < categoryName.length(); i++) {
			categoryName.at(i) = toupper(categoryName.at(i));
		}
		return categoryName;

	} else if (categoryName == "Harry Potter") {

		int choice = rand() % 1;
		switch (choice) {
		case 0:
			categoryName = "Dobby";
		case 1:
			categoryName = "Hagrit";
		}
		for (int i = 0; i < categoryName.length(); i++) {
			categoryName.at(i) = toupper(categoryName.at(i));
		}
		return categoryName;

	} else {

		return categoryName;

	}

}

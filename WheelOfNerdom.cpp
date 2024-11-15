// Preproccessor directive(s)
#include "PlayerInformation.h"

// Begin main() function
int main() {

	// Declare and initialize player variables
	string playerName = " ";
	char newPlayer = ' ';

	// Declare and initialize question variables
	string categoryName = "Default";
	string question;
	int spinOrSolve = 0;
	

	// Seed random number generator with current time (in order to get truly random number for each random number needed)
	srand(time(0));

	// Create vector to store players
	vector<Player> playerVector;

	// Introduction to game
	cout << "Wheel of nerdom!" << endl << endl;

	// Begin do loop to create player objects for each player name entered
	do {
		cout << "Please enter player's name: ";
		cin >> playerName;

		// Create player object using entered name
		Player player(playerName);
		
		// Push name of object created to playerVector
		playerVector.push_back(player.name);

		// Let user know player has been added
		cout << player.name << " added!" << endl << endl;

		// Ask user for more players
		cout << "Add another player? (Enter y or n): ";
		cin >> newPlayer;

	} while (newPlayer == 'Y' || newPlayer == 'y'); // End do loop to create player objects for each player name entered

	// User select category, flush input stream, get category name
	cout << endl << "Please select the category for the character: Star Wars, Harry Potter" << endl;
	cin.ignore();
	getline(cin, categoryName);

	// Call to category function to create question then clear screen
	question = category(categoryName);

	system("cls");

	// Display character on screen as asteriks
	cout << "Character: ";
	for (int i = 0; i < strlen(question.c_str()); i++) {
		if (!isblank(question[i])) {
			cout << "*";
		}
		else {
			cout << " ";
		}
	}

	cout << endl << endl;

	// Begin game by asking player to spin or solve
	cout << endl << "Press 1 to spin and 2 to solve: ";
	cin >> spinOrSolve;

	// Call function based on user variable
	for (int i = 0; i < playerVector.size(); i++) {
		if (spinOrSolve == 1) {
				playerVector[i].playerSpin(question);
		} else {
			cout << playerVector[i].playerSolve();
		}
	}

	return 0;
}

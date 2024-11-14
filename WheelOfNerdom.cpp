// Preproccessor directive(s)
#include "PlayerInformation.h"

// Begin main() function
int main() {

	// Declare and initialize player variables
	string playerName = " ";
	char newPlayer = ' ';

	// Declare and initialize question variables
	string categoryName = "Default";

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
		playerVector.push_back(player.name);

		// Let user know player has been added
		cout << player.name << " added!" << endl << endl;

		// Ask user for more players
		cout << "Add another player? (Enter y or n): ";
		cin >> newPlayer;

	} while (newPlayer == 'Y' || newPlayer == 'y'); // End do loop to create player objects for each player name entered

	// User select category
	cout << "Please select the category for the puzzle: Star Wars, Harry Potter";
	getline(cin, categoryName);

	// If structure to choose and create secret phrase

	return 0;
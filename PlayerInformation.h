// Preprocessor directives
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

// Namespaces
using namespace std;

// Begin Player class
class Player {

	// Declare and initialize player object variables
	public:
		string name = "";
		int score = 0;
		int turnOrder = 0;

		// Default constructor
		Player() {
		}

		// Player custom constructor
		Player(string playerName) {
			this->name = playerName;
			turnOrder = rand() % 5;
		}

}; // End Player class
#include <iostream>
#include <istream>
#include <string>
#include <ctime>
using namespace std;



int advanced() {
	int incrementer = 0;
	int lowNumber{ 1 };
	int highNumber{ 100 };
	int guess{ 0 };
	int randomNumber;
	char selection{};


	cout << "Welcome to the advanced version of the Guess a number game! where you numbers can be from 1 to 100" << endl;

	cout << "What do you want your low number to be?" << endl;
	cin >> lowNumber;

	cout << "What do you want your high number to be?" << endl;
	cin >> highNumber;

	if (lowNumber < 1 || lowNumber > 100) {
		cout << "Please enter a valid entry" << endl;
	}

	if (highNumber < 1 || highNumber > 100 || highNumber < lowNumber) {
		cout << "Please enter a valid entry" << endl;
	}

	do {

		randomNumber = rand() % highNumber + lowNumber;

		cout << "Guess a number" << endl;
		cin >> guess;

		if (guess >= lowNumber && guess <= highNumber) {

			if (guess == randomNumber) {
				cout << "You are correct it took you " << incrementer << " guess(es), with " << lives << " life/lives remaining " << endl;
				break;
			}

			else if (guess != randomNumber) {
				if (guess < randomNumber) {
					cout << "too low you have " << lives << " life/lives remaining" << endl;
				}

				else {
					cout << "too high you have " << lives << " life/lives remaining" << endl;
				}
				cout << "Do you want to try again?" << endl;
				cin >> selection;

			}
			else {
				cout << "Please enter a valid entry" << endl;
			}

			if (lives = 0) {
				cout << "Game over" << endl;
				break;
			}



		}

		incrementer = incrementer + 1;

		lives = lives - 1;


}

	int easy() {
		srand((unsigned int)time(NULL));

		int incrementer = 0;
		int lowNumber{ 1 };
		int highNumber{ 10 };
		int guess{ 0 };
		int lives{ 3 };
		int randomNumber = rand() % highNumber + lowNumber;
		char selection{};
		char advSelector{};

		do {

			cout << "Guess a number" << endl;
			cin >> guess;

			if (guess >= lowNumber && guess <= highNumber) {

				if (guess == randomNumber) {
					cout << "You are correct it took you " << incrementer << " guess(es), with " << lives << " life/lives remaining"" << endl;

						cout << "do you want to play an advanced version of this game?" << endl;
					cin >> advSelector;

					if (advSelector == 'y' || advSelector == 'Y') {
						advanced();

					}

					else if (guess != randomNumber) {
						if (guess < randomNumber) {
							cout << "too low you have " << lives << " life/lives remaining"" << endl;
						}

						else {
							cout << "too high you have " << lives << " life/lives remaining"" << endl;
						}

					}
					else {
						cout << "Please enter a valid entry" << endl;
					}


				}

				cout << "Do you want to try again?" << endl;
				cin >> selection;

				incrementer = incrementer + 1;

				lives = lives - 1;

				while (selection == 'y' || selection == 'Y'); {}




			}
		}

int main() {



	easy();

	return 0;



}
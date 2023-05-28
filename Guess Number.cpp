#include <iostream>
using namespace std;

int main()
{
	int randomNumber, userNumber;
	cout << "Welcome to Guess a Number\n";
	cout << "I'm thinking of a number between 1 and 100\n";
	randomNumber = rand() % 100 + 1;
	while (true) {
		cout << "What is your guess? ";
		cin >> userNumber;
		if (userNumber > randomNumber) {
			cout << "The guess is too high\n";
		}
		else if (userNumber < randomNumber) {
			cout << "The guess is too low\n";
		}
		else {
			cout << "That guess is just right!\n";
			cout << "Thanks for playing\n";
			break;
		}
	}
	


}


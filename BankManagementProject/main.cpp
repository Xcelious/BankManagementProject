#include "main.h"
#include <iostream>

bool programExit = false;
int userChoice = 0;

int main() {
	std::cout << "Welcome to the C++ Banking System!\n\n";
	while (programExit == false and userChoice == 0) {
		std::cout << "Main Menu\n";
		std::cout << "1) Open an Account.\n";
		std::cout << "2) Make a Deposit.\n";
		std::cout << "3) Make a Withdrawal.\n";
		std::cout << "4) Exit. \n";

		std::cout << "What would you like to do today? :";
		std::cin >> userChoice;

		if (userChoice == 1) {
			openAcct();
			userChoice = 0;
		}
		else if (userChoice == 2) {
			userDeposit();
			userChoice = 0;
		}
		else if (userChoice == 3) {
			userWithdraw();
			userChoice = 0;
		}
		else if (userChoice == 4) {
			tExit();
			programExit = true;
		}
	}
	return 0;
}
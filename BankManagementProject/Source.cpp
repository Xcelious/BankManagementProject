#include <fstream>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>


std::string fName;
std::string lName;
char amountChoice;
int bankAmount;
int userPIN;
char acctChoice;
char acctType;
bool isTrue;

bool isValidPIN(std::string isValid) {
	for (char const& c : isValid) {
		if (std::isdigit(c) == 0) return false;
	}
	return true;
}

void openAcct() {

	std::cout << "What is your first name?: ";
	std::cin >> fName;

	std::cout << "What is your last name?: ";
	std::cin >> lName;

	std::cout << "Enter a four-digit PIN for your bank account.: ";
	std::cin >> userPIN;

	while (isTrue == false) {
		std::cout << "Would you like to initialize your bank account with a deposit? (Y - Yes | N - No): \n";
		std::cin >> amountChoice;
		char user1Ans = toupper(amountChoice);

		if (amountChoice == 'Y') {
			std::cout << "How much money would you like to deposit?: \n";
			std::cin >> bankAmount;
			isTrue = true;
		}
		else if (amountChoice == 'N') {
			isTrue = true;
			bankAmount = 0;
			break;
		}
		else {
			std::cout << "Invalid Input. Please try again.\n";
			std::cout << "\n";
		}

	}

	isTrue = false;


	while (isTrue == false) {
		
		std::cout << "What type of bank account would like to open? Checkings - C | Savings - S: \n";
		std::cin >> acctChoice;
		char user2Ans = toupper(acctChoice);

		if (acctChoice == 'C') {
			acctType = 'C';
			isTrue = true;
		}
		else if (acctChoice == 'S') {
			acctType = 'S';
			isTrue = true;
		}
		else {
			std::cout << "\nThat was not a valid input. Please try again.\n";
		}
	}
	std::cout << "\n";
	std::cout << "First name: " << fName << "\n";
	std::cout << "Last name: " << lName << "\n";
	std::cout << "Bank Amount: $" << bankAmount << "\n";
	std::cout << "Bank Type: " << acctType << "\n";


#if 0

	std::fstream thisFile;
	thisFile.open("accountlist.txt", std::ios::app);

	if (thisFile.is_open()) {
		thisFile << "\nGood Morning.\n";
		thisFile << "Good Afternoon\n";
		thisFile.close();
	}
#endif
}

// 05/11/2022 - Add the "Deposit" function.
void userDeposit() {
	isTrue = false;
	int depositAmount;
	int checkPIN;

	while (isTrue == false) {
		// 05/11/2022 - Add an algorithm that checks if the input contains only integers.
		std::cout << "Enter your PIN: ";
		std::cin >> checkPIN;

		if (checkPIN == userPIN) {
			// Acknowledgement of Correct Input
			std::cout << "Successful Login!\n";
			std::cout << "How much money would you like to deposit?: $";
			
			std::cin >> depositAmount;
			std::cout << "You have made a deposit of $" << depositAmount << " and your total balance is: $" << depositAmount + bankAmount << "\n";

			isTrue = true;
		}
		else {
			std::cout << "Invalid PIN. Please try again.\n";
		}
	}
}

void userWithdraw() {
	isTrue = false;
	int checkPIN;
	int withdrawAmount;

	while (isTrue == false) {
		std::cout << "Enter your PIN: ";
		std::cin >> checkPIN;

		if (checkPIN == userPIN) {
			std::cout << "Successful Login!\n";
			std::cout << "How much money would you like to withdraw?: $";

			std::cin >> withdrawAmount;
			std::cout << "You have made a withdraw of $" << withdrawAmount << " and your total balance is: $" << bankAmount - withdrawAmount << "\n";

			isTrue = true;
		}
		else if (checkPIN != userPIN)
		{
			std::cout << "Invalid Pin. Please try again.\n";
			continue;
		}
	}
}

void tExit() {
	bool programExit = false;
	char shutdown;
	std::cout << "Would you like to exit? Y - Yes | N - No." << "\n";
	std::cin >> shutdown;
	char Nshutdown = toupper(shutdown);

	if (Nshutdown == 'Y') {
		std::cout << "Program Exited" << "\n";
		programExit = true;
	}
	else if (Nshutdown == 'N') {
		std::cout << "Not Okay" << "\n";
	}
	
}
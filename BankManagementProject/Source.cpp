#include <fstream>
#include <iostream>
#include <cstring>

std::string fName;
std::string lName;
char amountChoice;
int bankAmount;
char acctChoice;
char acctType;
bool isTrue = false;

void openAcct() {

	std::cout << "What is your first name?: ";
	std::cin >> fName;

	std::cout << "What is your last name?: ";
	std::cin >> lName;

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



#if 0
void tExit() {
	char shutdown;
	std::cout << "Would you like to exit? Y - Yes | N - No." << "\n";
	std::cin >> shutdown;
	putchar(toupper(shutdown));

	if (shutdown == 'Y') {
		std::cout << "Program Exited" << "\n";
		programExit = true;
	}
	else if (shutdown == 'N') {
		std::cout << "Not Okay" << "\n";
	}
	
}
#endif
#include <fstream>
#include <iostream>
#include <cstring>



void openAcct() {
	char acctChoice;
	char acctType;
	bool isTrue = false;


	while (isTrue == false) {
		std::cout << "What type of bank account would like to open? Checkings - C | Savings - S: ";
		std::cin >> acctChoice;
		putchar(toupper(acctChoice));

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






	std::fstream thisFile;
	thisFile.open("accountlist.txt", std::ios::app);

	if (thisFile.is_open()) {
		thisFile << "\nGood Morning.\n";
		thisFile << "Good Afternoon\n";
		thisFile.close();
	}
}




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
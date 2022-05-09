#include "main.h"
#include <iostream>

using std::string;

int tExit() {
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
	return shutdown;
}
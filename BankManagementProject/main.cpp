#include "main.h"
#include <iostream>

bool programExit = false;
int userChoice = 1;

int main() {

		// Keeps the program running whilst the user manipulates

		// the data.
	openAcct();

	// userDeposit();

	userWithdraw();
#if 0
	if (programExit == true) {
		// tExit();
	}
#endif

	return 0;
}
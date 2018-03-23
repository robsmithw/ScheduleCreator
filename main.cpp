#include <iostream>
#include "Employee.h"

void displayMenu(int& choice);

int main() {
	int hold;
	int usrChoice = 0;
	displayMenu(usrChoice); //Shows user the menu
	std::cout << (usrChoice);
	std::cin >> hold; //I use visual studio and use this to pause the output
	return 0;
}

void displayMenu(int& choice) {
	int i = 0;
	while (!(choice == 1 || choice == 2)) {
		if (i >= 1) {
			std::cout << ("\nYou have entered an incorrect value. Please enter a correct value.") << std::endl;
		}
		std::cout << ("Menu\n1)  Manually enter information for schedule\n2)  Have information read from a file (Please see ReadMe for usage on this)\nEnter choice (1 or 2): ");
		std::cin >> choice;
		i++;
	}
	return;
}
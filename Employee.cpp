#include "Employee.h"



Employee::Employee()
{
	firstName = "";
	lastName = "";
}

void Employee::setName(std::string first, std::string last) {
	firstName = first;
	lastName = last;
}

std::string Employee::getName() {
	return firstName + " " + lastName;
}

Employee::~Employee()
{
}

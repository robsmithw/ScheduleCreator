#pragma once
#include <string>
#include "Schedule.h"
class Employee
{
public:
	Employee();
	void Employee::setName(std::string first, std::string last);
	std::string Employee::getName();
	~Employee();

private:
	Schedule mySchedule;
	std::string firstName;
	std::string lastName;
};


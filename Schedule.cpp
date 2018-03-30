#include "Schedule.h"



Schedule::Schedule()
{
}

int Schedule::getHour() {
	return aHour;
}

int Schedule::getMinute() {
	return aMin;
}

std::istream &operator >> (std::istream &input, Schedule &right) //input in hh:mm format
{
	input >> right.aHour; // input hours
	input.ignore(); // skip :
	input >> right.aMin; // input minute part
	return input;
}


Schedule::~Schedule()
{
}

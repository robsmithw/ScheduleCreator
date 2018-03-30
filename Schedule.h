#pragma once
#include<iostream>

class Schedule
{
public:
	Schedule();
	int Schedule::getHour();
	int Schedule::getMinute();
	friend std::istream& operator >> (std::istream & input, Schedule& right);
	~Schedule();

private:
	int aHour;
	int aMin;
	int inTimeH;
	int inTimeM;
	int outTimeH;
	int outTimeM;
};


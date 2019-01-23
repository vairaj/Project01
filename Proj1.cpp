#include "stdafx.h"
#include "Proj1.h"
#include <iostream>
using namespace std;


void BloodSugar::input(double x, double sugarLevels[14][100])
{
	//add input to current day's array
	dailyCount++;
	weeklyCount++;
	cout << x << " added to today's records." << endl;
}

void BloodSugar::day(double sugarLevels[14][100])
{
	cout << "Blood sugar taken " << dailyCount << " time(s) today.\n"
		<< "Highest: " << dailyMax << endl
		<< "Lowest: " << dailyMin << endl
		<< "Total: " << dailySum << endl;
}

void BloodSugar::week(double sugarLeels[14][100])
{
	cout << "Blood sugar taken " << weeklyCount << " time(s) this week.\n"
		<< "Highest: " << weeklyMax << endl
		<< "Lowest: " << weeklyMin << endl
		<< "Total: " << weeklySum << endl
		<< "Largest daily difference: day " << delta << endl;
}

void BloodSugar::next(int x, double sugarLevels[14][100])
{
	cout << "Day " << x + 1 << endl;
	sugarLevels[x][0];
	dailyCount = 0; //reset daily count
	dailyMax = 0; //ditto for rest of day vars
	dailyMin = 0;
	dailySum = 0;

	if (x == 7) //when first day of next week ocurrs
	{
		weeklyCount = 0; //reset weekly count
		weeklyMax = 0; //ditto for rest of week vars
		weeklyMin = 0;
		weeklySum = 0;
		delta = 0;
		cout << "(New Week)\n";
	}
}

#include "stdafx.h"
#include "Proj1.h"
#include <iostream>
using namespace std;


void BloodSugar::input(int x, double sugarLevels[14][100])
{
	//add input to current day's array
	dailyCount++;
	weeklyCount++;
	cout << x << " added to today's records " << endl;
}

void BloodSugar::day(double sugarLevels[14][100])
{
	cout << "Blood sugar taken " << dailyCount << " times today.\n"
		<< "Highest: " << dailyMax << endl
		<< "Lowest: " << dailyMin << endl
		<< "Total: " << dailySum << endl;
}

void BloodSugar::week(double sugarLeels[14][100])
{
	cout << "Blood sugar taken " << weeklyCount << " times this week.\n"
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
	if (x == 7)
	{
		weeklyCount = 0; //reset weekly count
	}
}

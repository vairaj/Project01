// Project01Driver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Proj1.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	BloodSugar Q;
	int day = 0;
	char reading[100];
	double sugarLevels[14][100];
	double levels = 0;

	cout << "Currently on day " << day + 1 << ".\n"
		<< "Please enter a blood sugar or command: \n"
		<< "*****\n(Hint: Enter \"D\" or \"Day\" to see a daily summary,\n"
		<< "\"W\" or \"Week\" to see a weekly summary,\n"
		<< "and \"Next\" or \"N\" to go to the next day.)\n*****\n";

	cin >> reading;

	while (day < 13)
	{
		if (strcmp(reading, "D") == 0 || 
			strcmp(reading, "Day") == 0)
		{
			Q.day(sugarLevels);
		}
		else if (strcmp(reading, "W") == 0 || 
			strcmp(reading, "Week") == 0)
		{
			Q.week(sugarLevels);
		}
		else if (strcmp(reading, "N") == 0 ||
			strcmp(reading, "Next") == 0)
		{
			day++;
			Q.next(day, sugarLevels);
		}
		else if ((0 < atof(reading)) &&
			(atof(reading) < 999))
		{
			Q.input(atof(reading), sugarLevels);
		}
		else
		{
			cout << "Silently ignored.\n";
		}

		cin.clear();
		cin >> reading;
	}

	system("pause");
	return 0;
}


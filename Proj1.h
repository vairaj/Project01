#pragma once

class BloodSugar
{
private:
	//note to self: make sure defining these here is ok, if things keep resetting to 0 then these shouldn't be here!
	double dailySum = 0;
	double dailyMax = 0;
	double dailyMin = 0;
	int dailyCount = 0;

	double weeklySum = 0;
	double weeklyMax = 0;
	double weeklyMin = 0;
	int weeklyCount = 0;
	int delta = 0;

public:
	//input value
	void input(double x, double sugarLevels[14][100]);
	//show daily summary so far
	void day(double sugarLevels[14][100]);
	//show weekly summary so far
	void week(double sugarLevvels[14][100]);
	//advance to next day
	void next(int x, double sugarLevels[14][100]);
};

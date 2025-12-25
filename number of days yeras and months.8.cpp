#include<iostream>
using namespace std;
int main()
{
	int days,months,years,x,y;
	cout << "Enter the number of days";
	cin >> days;
	years = 365 / days;
	x = 365 % days;
	months = 30 / x;
	y = 30 % x;
	days = y;
	cout << years << "=" << 365 << "/" << days << endl;
	cout << x << "=" << 365 << "%" << days << endl;
	cout << months << "=" << 30 << "/" << x << endl;
	cout << y << "=" << 30 << "%" << x << endl;
	cout << days << "=" << y << endl;
	return 0;
}

#include<iostream>
#define pi 3.14
using namespace std;
int main()
{
	float radius,circumferance;
	cout << "Enter the value of radius";
	cin >> radius;
	circumferance = 2 * pi * radius;
	cout << circumferance << "=" << 2 << "*" << pi << "*" << radius << endl;
	return 0;
}

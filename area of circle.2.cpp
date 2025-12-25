#include<iostream>
#define pi 3.14
using namespace std;
int main()
{
	float r,area;
	cout << "Enter the value of r";
	cin >> r;
    area = pi * r * r ;
	cout << area << "=" << pi << "*" << r << "*" << r << endl;
	return 0;
}

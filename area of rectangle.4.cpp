#include<iostream>
using namespace std;
int main()
{
	int height,width,area;
	cout << "Enter the value of height and width of rectangle";
	cin >> height >> width;
	area = height * width;
	cout << area << "=" << height << "*" << width << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int temp,a,b;
	cout << "Enter the values a and b";
	cin >> a >> b;
	temp = a;
	a = b;
	b = temp;
	cout << "After swapping the value of a is " << a << endl;
	cout << "After swapping the value of b is " << b << endl;
	return 0; 
}

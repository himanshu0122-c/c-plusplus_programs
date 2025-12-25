#include<iostream>
using namespace std;
int main()
{
	int num,a=0,b=1,c,i,fibonacci;
	cout << "enter num for fibonacci series";
	cin >> num;
	for(i=1;i<=num;i++)
	{
		cout << a << endl;
		c = a + b;
		a = b;
		b = c;
	}
	cout << "fibonacci of" << num << "is" << fibonacci;
	return 0;
}

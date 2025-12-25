#include<iostream>
using namespace std;
int main()
{
	int i,fact=1,num;
	cout << "Enter the num for fact";
	cin >> num;
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	cout << "fact of " << num  << "is " << fact;
	return 0;
}

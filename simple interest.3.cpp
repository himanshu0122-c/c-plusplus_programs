#include<iostream>
using namespace std;
int main()
{
	int p,r,t,simple_interest;
	cout << "Enter the value of p,r and t";
	cin >> p >> r >> t;
	simple_interest = p * r * t / 100;
	cout << simple_interest << "=" << p << "*" << r << "*" << t << "/" << 100 << endl;
	return 0;
}

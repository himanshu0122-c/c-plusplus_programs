#include<iostream>
using namespace std;
int main()
{
	float sub1,sub2,sub3,sub4,sub5,total_marks,percentage;
	cout << "Enter the marks of sub1,sub2,sub3,sub4,sub5";
	cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
	total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
	percentage = total_marks / 500 * 100;
	cout << total_marks << "=" << sub1 << "+" << sub2 << "+" << sub3 << "+" << sub4 << "+" << sub5 << endl;
	cout << percentage << "=" << total_marks << "/" << 500 << "*" << 100 << endl;
	return 0;
}

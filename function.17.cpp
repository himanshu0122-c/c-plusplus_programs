#include<iostream>
using namespace std;
int function1()
     {
	     int a,b,add;
	     cout << "Enter the value of a and b";
	     cin >> a >> b;
	     add = a + b;
	     cout << "the value of add of a and b is " << add << endl; 
     }
int function2()
     {
	     int c,d,sub;
	     cout <<"Enter the value of c and d";
	     cin >> c >> d;
	     sub = c - d;
	     cout << "the value of sub of c and d " << sub << endl;
	 }
int main()
{
     function1();
     function2();
     return 0;
}

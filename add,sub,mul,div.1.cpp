#include<iostream>
using namespace std;
int main()
{
int a,b,add,sub,mul,div;
cout<<"Enter the value of a";
cin>>a;
cout<<"Enter the value of b";
cin>>b;
add = a + b;
sub = a - b;
mul = a * b;
div = a / b;
cout << a << "+" << b << "=" << add;
cout << a << "-" << b << "=" << sub;
cout << a << "*" << b << "=" << mul;
cout << a << "/" << b << "=" << div;
return 0;
}

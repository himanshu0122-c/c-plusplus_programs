#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout << "Enter the three numbers";
	cin >> a >> b >> c;
	if ((a>b)&&(a>c))
	{
		if(b>c)
		{
			cout << "first greatest number is" << a;
			cout << "second greatest number is" << b;
			cout << "smallest number is" << c;
		}
		if(c>b)
		{
			cout << "first greatest number is" << a;
			cout << "second greatest number is" << c;
			cout << "smallest number is" << b;
		}
	}
	if ((b>a)&&(b>c))
	{
		if(a>c)
		{
			cout << "first greatest number is" << b;
			cout << "second greatest number is" << a;
			cout << "smallest number is" << c;
		}
		if(c>a)
		{
			cout << "first greatest number is" << b;
			cout << "second greatest number is" << c;
			cout << "smallest number is" << a;
		}
	}
   if((c>a)&&(c>b))
   {
	    if(a>b)
	    {
		cout << "first greatest number is" << c;
		cout << "second greatest number is" << a;
		cout << "smallest number is" << b;
	    }
	    if(b>a)
	    {
		cout << "first greatest number is" << c;
		cout << "second greatest number is" << b;
		cout << "smallest number is" << a;
	    }
    }
return 0;
}

#include<iostream>>
using namespace std;
int main()
{
	int r,c;
	for(c=5;c>=1;c--)
	{
		for(r=1;r<=c;r++)
		{
			cout << "*";
		}
		cout << "\n";
	}
    return 0;
}

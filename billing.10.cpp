#include<iostream>
using namespace std;
int main()
{
	float total_amount,discount,final_amount;
	cout << "Enter the total_amount";
	cin >> total_amount;
	if(total_amount>10000)
	{
		discount = total_amount / 100 * 8;
		final_amount = total_amount - discount;
		cout << discount << "=" << total_amount << "/" << 100 << "*" << 8 << endl;
		cout << final_amount << "=" << total_amount << "-" << discount << endl;
	}
	else
	{
		final_amount = total_amount;
		cout << final_amount << "=" << total_amount << endl;
	}
return 0;
}

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int monthly_sales;
	int salary;
	float income;
	
	cout<<"Enter monthly sales: ";
	cin>>monthly_sales;
	
	if(monthly_sales<=50000)
	{
		income = 575+(monthly_sales*0.16);
		cout<<"Your monthly income is: "<<income;
	}
	else if (monthly_sales < 50000 && monthly_sales >= 40000)
	{
		income= 550+ (monthly_sales*0.14);
		cout<<"Your income is:"<<fixed<<setprecision (2)<<income;
	}
	else if (monthly_sales < 40000 && monthly_sales >= 30000)
	{
		income= 525+ (monthly_sales*0.12);
		cout<<"Your income is:"<<fixed<<setprecision (2)<<income;
	}
	else if (monthly_sales < 30000 && monthly_sales >= 20000)
	{
		income= 500+ (monthly_sales*0.09);
		cout<<"Your income is:"<<fixed<<setprecision (2)<<income;
	}
	else if (monthly_sales < 20000 && monthly_sales >= 10000)
	{
		income= 450+ (monthly_sales*0.05);
		cout<<"Your income is:"<<fixed<<setprecision (2)<<income;
	}
	else  
	{
		income= 400+ (monthly_sales*0.03);
		cout<<"Your income is:"<<fixed<<setprecision (2)<<income;
	}
	
	return 0;
}

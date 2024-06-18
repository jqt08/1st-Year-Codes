#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float a,b,c,d;
	
	cout<< "Please enter your 3 grades"<<endl;
	cout<<"First grade: ";
	cin>>a;
	cout<<"Second grade: ";
	cin>>b;
	cout<<"Third grade: ";
	cin>>c;
	d= (a+b+c)/ 3;
	
	cout<<"Average is "<<fixed<<setprecision (2)<< d;
	if (d>=70)
	{
		cout<<" :) ";
	}
	if (d<=69)
	{
		cout<<" :-( ";
	}
}


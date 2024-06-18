#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main()
{
    const float pi = 3.1416;
	char i;
    cout<< "Choose figure \n[C]- cube\n[R]- Rectangle Prism\n[S]- Sphere\n";
    cin>>i;
    
    switch (i)
    {
    	case'C':
    	case'c':
    	int side;
    	cout<<"You have chosen Cube."<<endl;
    	cout<<"Enter side: ";
    	cin>>side;
    	cout<<" Volume of the cube is: "<<fixed<<setprecision (2)<<side*side*side;
    	break;
    	case'R':
    	case'r':
    	int length, width, height;
    	cout<<"You have chosen Rectangular Prism."<<endl;
		cout<<"Enter Length: ";
    	cin>>length;
    	cout<<"Enter Width: ";
    	cin>>width;
    	cout<<"Enter height: ";
    	cin>>height;
    	cout<<"Volume of the Rectangular Prism is: "<<fixed<<setprecision (2)<<length*width*height;
    	break;
    	case 'S':
    	case 's':
    	int r;
    	cout<<"You have chosen Sphere"<<endl;
		cout<<"Enter radius: ";
    	cin>>r;
    	cout<<"Volume of the sphere is: "<<fixed<<setprecision (2)<<(4*pi*r*r*r)/3;
	}
    
    
    return 0;
}


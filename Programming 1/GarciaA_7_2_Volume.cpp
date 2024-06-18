#include<stdio.h>
#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;


int main()
{
    char c;
    float s,h,f;
    float pi=3.14159265359;

    do{
    cout<<"********************************************************************************\n*********************\n";
    cout<<"VOLUME OF SHAPES\n"; 
    cout<<"********************************************************************************\n*********************\n";
    cout<<"\t\t[C]-CUBE\n";
    cout<<"\t\t[S]-SPHERE\n";
    cout<<"\t\t[R]-RECTANGULAR PARALLELEPIPED\n";
    cout<<"\t\t[X]-EXIT\n";
    cout<<"********************************************************************************\n*********************\n";
    cout<<"Choose your option :";
    cin>>c;

    switch(c)
    {
        case 'C': 
        case 'c': 
            cout<<"You choose to solve the Volume of Cube!\n";
            cout<<"Enter side: ";
            cin>>s;
            f = s*s*s;
            cout<<fixed<<setprecision(2)<<"The volume of cube is "<<f<<endl;
            system("pause");
            break;
        case 'S':
        case 's':  
            cout<<"You choose to solve the Volume of Sphere!\n";
            cout<<"Enter radius: ";
            cin>>s;
            f = (4/3)*pi*s*s*s;
            cout<<fixed<<setprecision(2)<<"The volume of sphere is "<<f<<endl;
            system("pause");
            break;
        case 'R':
        case 'r': 
            cout<<"You choose to solve the Volume of Rectangular parallelepiped!\n";
            cout<<"Enter surface area: ";
            cin>>s;
            cout<<"Enter height: ";
            cin>>h;
            f = s*h;
            cout<<fixed<<setprecision(2)<<"The volume of Rectangular parallepiped is "<<f<<endl;
            system("pause");
            break;
        case 'X':
            cout<<"Exit"<<endl;
            break;
        default :
            cout<<"Wrong entry\n";
            system("pause");
            break;
    } 
    }while (c != 'X');



}


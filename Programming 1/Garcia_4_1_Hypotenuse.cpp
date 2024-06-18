/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


int main()
{
    float a, b, c;
    
    
    cout<<"Hypotenuse of a Right Triangle"<<endl;
    cout<<"Enter a value for a:";
    cin>>a;
    cout<<"Enter a value for b:";
    cin>>b;
    c = sqrt( (pow(a,2) + pow(b,2)));
    
    cout<<fixed<<setprecision(2)<<"The value of the Hypotenuse is "<< c;
    
    

    return 0;
}

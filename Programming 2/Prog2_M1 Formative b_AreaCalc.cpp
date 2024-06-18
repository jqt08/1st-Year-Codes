#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;
#define PI 3.14159
int square(int a, int b);
int rectangle(int a, int b);
int triangle(int a, int b);
int circle(int a, int b);

int main()
{
    
    char answer;
    string choice1;
    int choice, a, b, answer1;
    
    cout<<"========================================================="<<endl;
    cout<<"\n                           MENU                        "<<endl;
    cout<<"\n========================================================="<<endl;
    cout<<setw (10) << "[1] -  Area of square"<<endl;
    cout<<setw (15) << "[2] -  Area of rectangle"<<endl;
    cout<<setw (15) << "[3] -  Area of triangle"<<endl;
    cout<<setw (13) << "[4] -  Area of circle"<<endl;
    cout<<setw (10) << "[5] -  Exit"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    cout<<"-----------------------------------------------------------"<<endl;
    switch (choice){
        case 1:
            cout<< "AREA OF SQUARE"<<endl;
            cout<<"---------------------------------------------------------------"<<endl;
            cout<<"Enter the side of the square: ";
            cin>>a;
            answer1 = square (a, b);
            cout<<"The area is "<<answer1<<" sq. units"<<endl;
            break;
            
        case 2:
            cout<< "AREA OF RECTANGLE"<<endl;
            cout<<"---------------------------------------------------------------"<<endl;
            cout<<"Enter the length and width of the rectangle: ";
            cin>>a>>b;
            answer1 = rectangle (a, b);
            cout<<"The area is "<<answer1<<" sq. units"<<endl;
            break;
            
        case 3:
            cout<< "AREA OF TRIANGLE"<<endl;
            cout<<"---------------------------------------------------------------"<<endl;
            cout<<"Enter the base and height of the triangle: ";
            cin>>a>>b;
            answer1 = triangle (a, b);
            cout<<"The area is "<<answer1<<" sq. units"<<endl;
            break;

        case 4:
            cout<< "AREA OF CIRCLE"<<endl;
            cout<<"---------------------------------------------------------------"<<endl;
            cout<<"Enter the radius of the circle: ";
            cin>>a;
            answer1 = circle (a, b);
            cout<<"The area is "<<answer1<<" sq. units"<<endl;
            break;
            
        case 5:
            cout<<"Thank you!"<<endl;
            system ("pause");
            break;
    
  
        return 0;
   
}
}


int square (int a, int b){
    int square;
    b = 2;
    square = pow(a,b);
    return square;
}

int rectangle (int a, int b){
    int rectangle;
    rectangle = a * b;
    return rectangle;
}

int triangle (int a, int b){
    int triangle;
    triangle = a * b / 2;
    return triangle;
}

int circle (int a, int b){
    int circle;
    b = 2;
    circle = PI * pow(a,b);
    return circle;
}

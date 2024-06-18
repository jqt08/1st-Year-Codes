#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>


using namespace std;

#define PI 3.14

int main()
{
   float a, b, c;
   a = 5;
   b = 6;
   float C = 90 * PI/180;

    cout<<"Law of Cosines"<<endl;
    cout<<"Given that a = 5\n"<<"and b = 6\n";
    cout<<"and the angle C is 90"<<endl;

    c = sqrt(pow(a,2) + pow(b,2) - 2*(a*b)* cos(C));
    
    cout<< fixed << setprecision (2) <<"The value of side c is: "<< c;
    


    return 0;
}


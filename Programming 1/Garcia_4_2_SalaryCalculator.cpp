#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
using std::setw; 
int main()
{
    
    string id;
    string date; 
    string employee;
    string absences;
    float salary;
    float lates;
    float z= 5160;

    float a, b, c, e, f, g;
  
    cout<<"ID: ";
    cin>>id;
    cout<<"Salary: ";
    cin>>salary;
    cout<<"Lates in minutes: ";
    cin>>lates;

 a= salary;
 f= lates/60;
 e= salary * .12;
 c= (a - b);

    cout<< setw(55) << "FEU - Institute of Technology"<<endl;
    cout<<"Employee ID: " << id << setw(40) << "Payroll Period:\n";
    cin>>date;
    cin.ignore(256, '\n');
    cout<<"Employee name: ";
    getline(cin,employee);

g= ((salary/30)/8) * f;


    cout<<"\nINCOME \n"<< "DEDUCTIONS\n";
    cout<<"Monthly Salary: " << salary << setw(40) << "Lates and\n";
    cout<<"absences "<< g <<endl;

b= z + g;
    cout<<setw(50) << "Philhealth" << setw(20) << "(1000.00)"<<endl;
    cout<<setw(50) << "Pag-ibig" << setw(20) << "(800.00)"<<endl;
    cout<<setw(50) << "SSS" << setw(20) << "(1200.00)"<<endl;
    cout<<setw(50) << "Withholding tax" << setw(20) << e <<endl;

    cout<< "Total Earnings: " << salary <<endl;
    cout<< "Total Deductions: " << b <<endl;
    cout<< "Net Pay:" << c <<endl;
    

    return 0;
    
    
}
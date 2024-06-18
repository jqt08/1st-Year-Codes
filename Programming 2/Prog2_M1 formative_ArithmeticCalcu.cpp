#include <iostream>
#include <iomanip>

using namespace std;

int add(int a,int b);
int subtract(int a, int b);
int multiply (int a, int b);
int divide(int a, int b);
int modulo(int a, int b);

int main()
{
    start:
    char answer;
    string choice1;
    int choice, a, b, sum, difference, product, quotient, modulus;
    do{
    cout<<"========================================================="<<endl;
    cout<<"\n                           MENU                        "<<endl;
    cout<<"\n========================================================="<<endl;
    cout<<setw (10) << "1. Add"<<endl;
    cout<<setw (15) << "2. Subtract"<<endl;
    cout<<setw (15) << "3. Multiply"<<endl;
    cout<<setw (13) << "4. Divide"<<endl;
    cout<<setw (14) << "5. Modulus"<<endl;
    cout<<"Enter your choice(1-5): ";
    cin>>choice;
    cout<<"Enter your two integer numbers: ";
    cin>> a >> b;
    switch (choice){
        case 1:
            sum = add(a, b);
            cout<< "Result: "<<sum<<endl;
            break;
            
        case 2:
            difference = subtract (a,b);
            cout<<" Result: "<<difference<<endl;
            break;
            
        case 3:
            product = multiply (a,b);
            cout<<"Result: "<<product<<endl;
            break;
        
        case 4:
            quotient = divide (a,b);
            cout<<"Result: "<<quotient<<endl;
            break;
            
        case 5:
            modulus = modulo(a,b);
            cout<<"Results: "<<modulus<<endl;
            break;
    }
  cout<<"Press y or Y to continue: ";
  cin>>answer;
  
    }while (answer == 'y' || answer == 'Y');
  
        return 0;
   

}


int add (int a, int b){
    int add;
    add = a + b;
    
    return add;
}
int subtract (int a, int b){
    int subtract;
    subtract = a - b;
    
    return subtract;
}
int multiply (int a, int b){
    int multiply;
    multiply = a * b;
    
    return multiply;
}
int divide (int a, int b){
    int divide;
    divide = a / b;
    
    return divide;
}
int modulo (int a, int b){
    int modulo;
    modulo = a % b;
    
    return modulo;
}

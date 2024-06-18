  #include <iostream>  
  #include <iomanip>  
  using namespace std; 
  
  char answer;
  double fahrenheitToCelsius(double fahrenheit)  
  {      double celsius;        
  celsius = (fahrenheit - 32.0) * 5.0 / 9.0;      
  return celsius;  
      
  }   
  double Cel_To_Fah(float n) 
  {     
      return ((n * 9.0 / 5.0) + 32.0); 
      
  }      
  int main()  
  {      
      double fahrenheit,Celsius;      
      int choice;      
    do{          
          cout<<"****************************************************************************"<<endl;         
          cout << setw(50);           
          cout<<"Temperature Converter"<<endl;          
          cout<<"****************************************************************************"<<endl;                   
          cout<<"[1] - Celsius to fahrenheit "<<endl;         
          cout<<"[2] - Fahrenheit to Celsius"<<endl;          
          cout<<"[3] - Celsius to Kelvin"<<endl;          
          cout<<"****************************************************************************"<<endl;                   
          cout<<"Enter your choice : ";          
          cin>>choice;
        switch (choice){                    
            case 1:                       
                cout<<"Enter temperature in Celsius :";              
                cin>>Celsius;              
                cout<<Celsius<<" degree Celsius is " <<Cel_To_Fah(Celsius)<<" degree fahrenheit"<<endl; 
                cout<<"Do you want to continue [Y/N] : ";          
                cin>>answer;
                break;                            
            case 2:          
                cout<<"Enter temperature in fahrenheit :";              
                cin>>fahrenheit;              
                cout<<fahrenheit<<" degree Fahrenheit is " <<fahrenheitToCelsius(fahrenheit)<<" degree fahrenheit"<<endl; 
                cout<<"Do you want to continue [Y/N] : ";          
                cin>>answer; 
                break;                  
            case 3:                   
                cout<<"Enter temperature in Celsius :";              
                cin>>Celsius;              
                cout<<Celsius<<" degree Celsius is " <<Celsius + 273.15<<" degree Kelvin"<<endl;
                cout<<"Do you want to continue [Y/N] : ";          
                cin>>answer;
                break;                        
            }                             
      }          
            while (answer == 'Y' || answer == 'y');
                           
  }      

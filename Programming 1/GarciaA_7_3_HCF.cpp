 #include <iostream>  
 using namespace std;  
 int hcf(int m, int n) 
 {     
     if (m % n == 0) {         
         return n;      
         } 
         else
         {         
             return hcf(n, m % n);   
             } 
     
 }  
 int main() 
 {     
     int m, n;     
     cout << "Enter two positive integers: ";     
     cin >> m >> n;    
     cout << "HCF of " << m << " and " << n << " is " << hcf(m, n) << "." << endl;     
     return 0;
     }

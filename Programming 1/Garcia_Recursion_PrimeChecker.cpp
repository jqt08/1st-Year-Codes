#include <iostream>
using namespace std;

bool isPrime(int n, int i = 2) {
    
    if (n <= 1) return false;
    if (n <= 3) return true;

    for (; i * i <= n; i++) {
        if (n % i == 0) return false;
  }
  
    return true;
}

int reverseNumber(int num) {
    if (num < 10)
        return num;
    
    int lastDigit = num % 10;
    int remainingDigits = num / 10;
    int reversedNumber = reverseNumber(remainingDigits);
    
    int power = 1;
    int temp = remainingDigits;
    while (temp > 0) {
        temp /= 10;
        power *= 10;
    }
    
    return lastDigit * power + reversedNumber;
}

int main() {
    int choice;
    do {
    cout << "\n1. Check if a number is prime or not" << endl;
    cout << "2. Reverse a number using recursion" << endl;
    cout << "3. Exit" << endl;
    cin >> choice;
    
    switch (choice){
    
    case 1:
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if (isPrime(n)) {
        cout << "\nYes, it is a prime number" << endl;
    } else {
        cout << "\nNo, it is not a prime number" << endl;
    }
    break;
    
    case 2:
    {
    int number;
    
    cout << "Enter number: ";
    cin >> number;
    
    int reversed = reverseNumber(number);
    cout << "\nThe reverse of number " << number <<  " is: " << reversed << endl;
    break;
    
    }
    
    
    case 3:
    return 0;
    
    
    default:
    cout << "Please pick a proper value..." << endl;
    break;

    }
}while (choice != 3);
}
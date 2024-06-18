//makes the 2nd array an exponent of the first
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int array1[5];
    int array2[5];

    cout<<"Enter [5] integers for array1 and [5] for array2"<<endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter an integer for array1 " << ": ";
        cin >> array1[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << "Enter an integer for array2 " << ": ";
        cin >> array2[i];
    }

    for (int i = 0; i < 5; i++) {
        array1[i] = pow(array1[i], array2[i]);
    }

    cout << "New values of array1: ";
    for (int i = 0; i < 5; i++) {
        cout << array1[i] << " ";
    }

    return 0;
}

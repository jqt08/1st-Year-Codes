#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int size = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> array(size);
    for (int i = 0; i < size; i++)
    {
        cout <<"Array element "<< i + 1 <<" : ";
        cin >> array[i];
    }

    sort(array.begin(), array.end());

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ", ";
    }

    return 0;
}

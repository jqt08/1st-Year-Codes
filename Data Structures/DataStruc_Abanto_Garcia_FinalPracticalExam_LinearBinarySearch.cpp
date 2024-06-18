#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void displayMenu() {
    cout << "1. Linear search" << endl;
    cout << "2. Binary search" << endl;
    cout << "3. Display Unsorted List" << endl;
    cout << "4. Reset Data" << endl;
    cout << "Enter choice >> ";
}

int linearSearch(const vector<int>& arr, int searchTerm) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == searchTerm) {
            return i;
        }
    }
    return -1;  // Search term not found
}

int binarySearch(const vector<int>& arr, int searchTerm) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == searchTerm) {
            return mid;
        } else if (arr[mid] < searchTerm) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;  // Search term not found
}

void displayList(const vector<int>& arr) {
    cout << "Unsorted List: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> values;
    int num;

    for (int i = 1; i <= 7; i++) {
        bool isDuplicate;
        do {
            isDuplicate = false;
            cout << "Value " << i << ": ";
            cin >> num;

            // Check for duplicate values
            if (find(values.begin(), values.end(), num) != values.end()) {
                cout << "Duplicate value! Please enter another number." << endl;
                isDuplicate = true;
            } else {
                values.push_back(num);
            }
        } while (isDuplicate);
    }

    system("pause");  // Pause execution until a key is pressed
    system("cls");    // Clear the console screen

    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                int searchTerm;
                cout << "Search Term: ";
                cin >> searchTerm;
                cout << "Unsorted Data: ";
                displayList(values);
                int index = linearSearch(values, searchTerm);
                if (index != -1) {
                    cout << "Search term found at index " << index << endl;
                } else {
                    cout << "Search term not found." << endl;
                }
                break;
            }
            case 2: {
                int searchTerm;
                cout << "Search Term: ";
                cin >> searchTerm;
                sort(values.begin(), values.end());
                cout << "Sorted array in Ascending order: ";
                displayList(values);
                int index = binarySearch(values, searchTerm);
                if (index != -1) {
                    cout << "Search term found at index " << index << endl;
                } else {
                    cout << "Search term not found." << endl;
                }
                break;
            }
            case 3:
                displayList(values);
                break;
            case 4:
                values.clear();
                for (int i = 1; i <= 7; i++) {
                    bool isDuplicate;
                    do {
                        isDuplicate = false;
                        cout << "Value " << i << ": ";
                        cin >> num;

                        // Check for duplicate values
                        if (find(values.begin(), values.end(), num) != values.end()) {
                            cout << "Duplicate value! Please enter another number." << endl;
                            isDuplicate = true;
                        } else {
                            values.push_back(num);
                        }
                    } while (isDuplicate);
                }
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        system("pause");  // Pause execution until a key is pressed
        system("cls");    // Clear the console screen
    } while (choice != 4);

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int vowel_count[5] = {0}; 
    int space_count = 0;

    cout << "Enter a string in all CAPITAL letters: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'A') {
            vowel_count[0]++;
        }
        else if (input[i] == 'E') {
            vowel_count[1]++;
        }
        else if (input[i] == 'I') {
            vowel_count[2]++;
        }
        else if (input[i] == 'O') {
            vowel_count[3]++;
        }
        else if (input[i] == 'U') {
            vowel_count[4]++;
        }
        else if (input[i] == ' ') {
            space_count++;
        }
    }

    cout << "Vowels:" << endl;
    cout << "A\t" << vowel_count[0] << endl;
    cout << "E\t" << vowel_count[1] << endl;
    cout << "I\t" << vowel_count[2] << endl;
    cout << "O\t" << vowel_count[3] << endl;
    cout << "U\t" << vowel_count[4] << endl;
    cout << "Whitespaces - \t" << space_count << endl;

    return 0;
}

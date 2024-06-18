#include <iostream>
#include <iomanip>
using namespace std;

struct Player {
    string nickname, age, score1, score2;
};

struct Node {
    Player player;
    Node* next;
};

Node* head = nullptr;
int playerCount = 0;

void addRecord() {
    if (playerCount == 5) {
        cout << "Cannot add more players." << endl;
        return;
    }

    Node* newNode = new Node;

    cout << "Enter nickname: ";
    cin >> newNode->player.nickname;

    cout << "Enter age: ";
    cin >> newNode->player.age;

    cout << "Enter score 1: ";
    cin >> newNode->player.score1;

    cout << "Enter score 2: ";
    cin >> newNode->player.score2;

    newNode->next = head;
    head = newNode;

    playerCount++;
    cout << "Record added successfully! " << endl;
}

void viewRecords() {
    if (playerCount == 0) {
        cout << "No records to display. " << endl;
        return;
    }

    Node* currentNode = head;
    while (currentNode != nullptr) {
        Player player = currentNode->player;
        cout << "Nickname: " << player.nickname << "\tAge: " << player.age << "\tScore 1: " << player.score1 << "\tScore 2: " << player.score2 << endl;
        currentNode = currentNode->next;
    }
}

void computeAverage() {
    if (playerCount == 0) {
        cout << "No records to compute average." << endl;
        return;
    }

    float totalAverage = 0;
    Node* currentNode = head;
    while (currentNode != nullptr) {
        float average = (stof(currentNode->player.score1) + stof(currentNode->player.score2)) / 2;
        totalAverage += average;
        currentNode = currentNode->next;
    }

    cout << "The average of all players is: " << totalAverage / playerCount << endl;
}

void showMaxAverage() {
    if (playerCount == 0) {
        cout << "No records to display." << endl;
        return;
    }

    float maxAverage = (stof(head->player.score1) + stof(head->player.score2)) / 2;
    Node* currentNode = head->next;
    while (currentNode != nullptr) {
        float average = (stof(currentNode->player.score1) + stof(currentNode->player.score2)) / 2;
        if (average > maxAverage) {
            maxAverage = average;
        }
        currentNode = currentNode->next;
    }

    currentNode = head;
    while (currentNode != nullptr) {
        float average = (stof(currentNode->player.score1) + stof(currentNode->player.score2)) / 2;
        if (average == maxAverage) {
            Player player = currentNode->player;
            cout << "Nickname: " << player.nickname << "\tAge: " << player.age << "\tScore 1: " << player.score1 << "\tScore 2: " << player.score2 << endl;
        }
        currentNode = currentNode->next;
    }
}

void showMinAverage() {
    if (playerCount == 0) {
        cout << "No records to display." << endl;
        return;
    }

    float minAverage = (stof(head->player.score1) + stof(head->player.score2)) / 2;
    Node* currentNode = head->next;
    while (currentNode != nullptr) {
        float average = (stof(currentNode->player.score1) + stof(currentNode->player.score2)) / 2;
        if (average < minAverage) {
            minAverage = average;
        }
        currentNode = currentNode->next;
    }

    currentNode = head;
    while (currentNode != nullptr) {
        float average = (stof(currentNode->player.score1) + stof(currentNode->player.score2)) / 2;
        if (average == minAverage) {
            Player player = currentNode->player;
            cout << "Nickname: " << player.nickname << "\tAge: " << player.age << "\tScore 1: " << player.score1 << "\tScore 2: " << player.score2 << endl;
        }
        currentNode = currentNode->next;
    }
}


int main() {
int choice = 0;
do {
    cout << "==============================================" << endl;
    cout << setw(25) << " MENU " << endl;
    cout << "==============================================" << endl;
    cout << "1. Add Record" << endl;
    cout << "2. View Records" << endl;
    cout << "3. Compute Average" << endl;
    cout << "4. Show Player with Maximum Average" << endl;
    cout << "5. Show Player with Minimum Average" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            addRecord();
            break;
        case 2:
            viewRecords();
            break;
        case 3:
            computeAverage();
            break;
        case 4:
            showMaxAverage();
            break;
        case 5:
            showMinAverage();
            break;
        case 6:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number from 1-6." << endl;
            break;
    }

} while (choice != 6);

return 0;
}
       

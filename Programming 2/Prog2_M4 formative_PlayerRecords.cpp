#include <iostream>
#include <iomanip>

using namespace std;

struct Player {
    string id, name, bday, address, gender, program, year;
    int score1, score2;
    float average;
};

Player p[5];
int playerCount = 0;

void addRecord(){
    if (playerCount == 5){
        cout<<"Cannot add more players."<<endl;
        return;
    }
    

cout << "Enter your Student ID Number: ";
cin >> p[playerCount].id;

cout << "Enter Full Name: ";
cin.ignore();
getline (cin, p[playerCount].name);

cout << "Enter your Birthday: ";
getline (cin, p[playerCount].bday);

cout << "Enter your address: ";
getline (cin, p[playerCount].address);

cout << "What is your gender? ";
getline (cin, p[playerCount].gender);

cout << "What is your Degree Program? ";
getline (cin, p[playerCount].program);

cout << "What is your Year Level? ";
getline (cin, p[playerCount].year);

cout << "Enter score 1: ";
cin >> p[playerCount].score1;

cout << "Enter score 2: ";
cin >> p[playerCount].score2;


p[playerCount].average = (float)(p[playerCount].score1 + p[playerCount].score2) / 2;

playerCount++;
cout<<"Record added successfully! "<<endl;
}

void viewRecords(){
  if (playerCount == 0){
    cout<<"No records to display. "<<endl;
    return;
  }
  for (int i = 0; i < playerCount; i++) {
    cout << "ID Number: " << p[i].id << "\tName: " << p[i].name << "\tBirthday: " << p[i].bday << "\tAddress: " << p[i].address << "\tGender: " << p[i].gender << "\tProgram: " << p[i].program << "\tYear Level: " << p[i].year << "\tScore 1: " << p[i].score1 << "\tScore 2: " << p[i].score2 << "\tAverage: " << p[i].average << endl;
  }
}

void computeAverage() {
  if (playerCount == 0) {
    cout << "No records to compute average." << endl;
    return;
  }
  
  float totalAverage = 0;
  for (int i = 0; i < playerCount; i++) {
    totalAverage += p[i].average;
  }
  
  cout << "The average of all players is: " << (float)totalAverage / playerCount << endl;
}

void showMaxAverage() {
  if (playerCount == 0) {
    cout << "No records to display." << endl;
    return;
  }
  
  float maxAverage = p[0].average;
  for (int i = 1; i < playerCount; i++) {
    if (p[i].average > maxAverage) {
      maxAverage = p[i].average;
    }
  }
  
  cout << "The player(s) with maximum average: " << endl;
  for (int i = 0; i < playerCount; i++) {
    if (p[i].average == maxAverage) {
      cout << p[i].name << endl;
    }
  }
}

void showMinAverage() {
  if (playerCount == 0) {
    cout << "No records to display." << endl;
    return;
  }
  
  float minAverage = p[0].average;
  for (int i = 1; i < playerCount; i++) {
    if (p[i].average < minAverage) {
      minAverage = p[i].average;
    }
  }
  
  cout << "The player(s) with minimum average: " << endl;
  for (int i = 0; i < playerCount; i++) {
    if (p[i].average == minAverage) {
      cout << p[i].name << endl;
    }
  }
}

int main() {
  int choice;
  
  while (true) {
    cout << "==============================================" << endl;
    cout << "                            MENU " << endl;
    cout << "==============================================" << endl;
    cout << "1. Add record " << endl;
    cout << "2. View players records " << endl;
    cout << "3. Compute for the average " << endl;
    cout << "4. Show the player(s) who gets the max average. " << endl;
    cout << "5. Show the player(s) who gets the min average. " << endl;
    cout << "6. Exit " << endl;
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
        return 0;
      default:
        cout << "Invalid choice." << endl;
        break;
    }
  }
  
  return 0;
}



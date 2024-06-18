//header files used
#include <iostream>	//allows the use of basic cin cout functions
#include <string>	//allows the use of string data type for storing string values
#include <fstream>	//allows the use of file handling
#include <cstring>	//allows the use of arrays
#include <cctype>	//allows the use of toupper and tolower
using namespace std;	//indicates that standard namespace will be used throughout the code

string Degrees [] = {"BSCSSE", "BSITDA", "BSCPE", "BSCE", "BSME"};	//arrays were used to store strings
string Level [] = {"1st Year", "2nd Year", "3rd Year", "4th Year"};	//that represent the degree program, year level and months
string Months [] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

class Student {
	public:
		struct data {
			string Name, Address, Program, yrlvl, ID;	//A class named Student that contains a struct
			string bmonth, Birthday;					//named data which stores a students records
			int bdate, byear;							//and a pointer to the next student record
			char Gender;
			data *next;
		};
		       
		data *head = NULL;
		
		void AddRecord();								//function names
		void DisplayRecords();
		void SearchRecords();
		void DeleteRecord();
		void OpenRecords();

};

//function to add student records
void Student::AddRecord(){	
	data *newinput = new data;

	int deg, lvl;
	char z;
	
	system ("CLS");

// basic trapping of Student Number	
	while (true){
		cout << "\nEnter Student Number: ";
		cin >> newinput -> ID;
		
		if (newinput -> ID.size() == 9){
			bool validID = true; 					// add a bool to initialize the validID as always true
			
			for (int i = 0; i < newinput -> ID.size(); i++){
				if (!isdigit(newinput ->ID[i])){    // confirm if the input from the user are all digits/numbers
					validID = false; 				// return false to exit the loop if an invalid character is found
				}
			}
		
			if (validID){  	 						// if validID is still true, exit the while loop
				break;
			}
		
		}
		
		cout << "Invalid Input! Ex: 202212345" << endl;
		system ("pause");							//pauses the execution of the program
		system ("CLS");								//clears the screen
		AddRecord();
	}
	
	
//Check if the first letters of the user's inputted names start with uppercase, if not, will change it to uppercase	
	cout << "Enter Full Name: ";
	cin.ignore();
	getline (cin, newinput -> Name);
	
	for (int i = 0; i < newinput -> Name.size(); i++){
		if (i == 0 || newinput -> Name[i - 1] == ' '){
			if (islower(newinput -> Name[i])){							// if the first letter or the letter after the space is lowercase
				newinput -> Name[i] = toupper(newinput -> Name[i]);		// transform it into uppercase to minimize errors if different inputs
			}															// were typed
		}
	}	
	
	
// basic trapping of Gender	
	while (true){	
		cout << "Enter Gender: ";
		cin >> newinput -> Gender;
		cin.ignore();
		
		newinput -> Gender = toupper (newinput -> Gender);  // in case the user inputs a small (f/m), the system will transform it into uppercase letter 
															// so that it will minimize errors and let the input still be accepted
		if (newinput -> Gender == 'M' || newinput -> Gender == 'F'){
			break;
		} else {
			cout << "Invalid character! Refer 'F' for Female, and 'M' for Male." << endl << endl;
			system ("pause");
			system ("CLS");
		}
	}
	
	cout << "--- Enter Birth Month, Date, and Year ---" << endl;
	
	while (true){
		cout << "    Month [January-December]: ";
		cin >> newinput -> bmonth;
		for (int i = 0; i < newinput -> bmonth.size(); i++){		// for loop to read the input and convert top uppercase if the input is 
			if (i == 0){											// typed in lowercase
				if (islower(newinput -> bmonth[i])){
					newinput -> bmonth[i] = toupper(newinput -> bmonth[i]);
				}
			}
		}
		
		bool validMonth = false;
		for (int i = 0; i < 12; i++){
			if (newinput -> bmonth == Months[i]){			//input is accepted if within the valid months range
				validMonth  = true;
				break;
			}	
		}

		if (!validMonth){									//input rejected if valid month is not within range
			cout << "Invalid Month!" << endl << endl;
			system ("pause");
			system ("CLS");	
		} else {
			break;
		}
	}
		
		cout << "    Date [1 - 31]:    ";
		
	while (true){
		cin >> newinput -> bdate;
		
		if (newinput -> bdate >= 1 && newinput -> bdate <= 31){			
			break;														
		} else {						//input is rejected if date is below 1 or above 31
			cout << "Invalid number! Only numbers from 1-31 are allowed." << endl << endl;
			system ("pause");
			system ("CLS");
		}
	}
	
	while (true){	
		cout << "    Year[1950-2023]:  ";
		cin >> newinput -> byear;
		
		if (newinput -> byear >= 1950 && newinput -> byear <= 2023){	
			break;	
		} else {						//input is rejected if year inputted is below 1950 or above 2023
			cout << "Invalid year! The only accepted years are from 1950s - present." << endl << endl; 
			system ("pause");
			system ("CLS");
		}	
	}
	
	
	
	cout << "\nBirthday: " << newinput -> bmonth << " " << newinput -> bdate << ", " << newinput -> byear << endl << endl;
	
	
/*	cout << "Birthday: ";
	getline (cin, newinput -> Birthday); */
	
	cout << "Enter Address: ";
	cin.ignore();
	getline (cin, newinput -> Address);
	
	cout << endl << "Choose your corresponding courses and year levels below:" << endl;
	
	for (int i = 0; i < 5; i++){
		cout << "\t [" << i + 1 << "] " << Degrees [i] << endl;			//for loop to display numbers efficiently
	}
	
	cout << "\nEnter your Choice: ";
	cin >> deg;
		
	newinput -> Program = Degrees [deg - 1];
	cout << "Degree Program: " << newinput -> Program << endl << endl;
	
	for (int i = 0; i < 4; i++){										//for loop to display numbers efficiently
		cout << "\t [" << i + 1 << "] " << Level [i] << endl;
	}
		
	cout << "Enter your Choice: ";
	cin >> lvl;
		
	newinput -> yrlvl = Level [lvl - 1];                              
	cout << "Year Level: " << newinput -> yrlvl << endl << endl;
		
	newinput -> next = head;
	head = newinput;
		
	cout << "Record Added Successfully!" << endl;
	cout << "Do you want to add another record [y/n]: ";
	cin >> z;

	if (z == 'y'|| z == 'Y'){
	system ("CLS");
	AddRecord();
		
	} else {
		return;
	}	
}
	
//function to display currently made records
void Student::DisplayRecords(){
	data *current = head;
	
	if (current == NULL){						//if no records have been made yet this prompt pops up 
		cout << "\nNo records to display!" << endl;
		return;
	}
	
	while (current != NULL){					//displays the currently made records to the screen
		cout << "\n\t Student Number: " << current -> ID << "\n\t Name: " << current->Name << "\n\t Gender: " << current->Gender << "\n\t Birthday: " << current->bmonth << " " << current -> bdate << ", " << current -> byear << "\n\t Address: " << current->Address << "\n\t Degree Program: " << current->Program << "\n\t Year Level: " << current->yrlvl << endl << endl;
		
		current = current -> next;
	}
}
	
//function to search for records saved	
void Student::SearchRecords(){    
	data *current = head;		
	
	int s;
	string sname, sprogram, slvl, sid;
	char sgen, a;
	
	if (current == NULL){		//if no records have been made this prompt pops up
		cout << "No records to search!" << endl;
		return;
	}
	
	else {
		system ("CLS");
		cout << "\n- - - - - - - - - - S E A R C H - - - R E C O R D S - - - - - - - - - -" << endl << endl;
		
		search:
			cout << "\t\t [1] Student Number" << endl;		//allows the search of records using 
			cout << "\t\t [2] Name" << endl;				//these 5 options
			cout << "\t\t [3] Gender" << endl;
			cout << "\t\t [4] Degree Program" << endl;
			cout << "\t\t [5] Year Level" << endl;
			cout << "\t\t Search by: ";
			cin >> s;
			cout << endl;
			
			switch (s){
				case 1: {
					cout << "Enter Student Number: ";
					cin >> sid;            
					cout << endl;
					
					if (sid.length() != 9){					//makes an error if the user input is not 9 cases
						cout << "Invalid input! Please enter 9 numbers." << endl;
						break;
					}
					
					while (current != NULL){
						if (current -> ID == sid){
							cout << "Name: " << current -> Name << endl;
							cout << "Birthday: " << current -> bmonth << " " << current -> bdate << ", " << current -> byear << endl; 
							cout << "Gender: " << current -> Gender << endl;
							cout << "Address: " << current -> Address << endl;
							cout << "Degree Program: " << current -> Program << endl;
							cout << "Year Level: " << current -> yrlvl << endl << endl;
						}
						
						current = current -> next;
					}
					cout << "Records not found" << endl;
					break;
				}
				
				case 2: {
					cout << "Enter Name: ";
					getline (cin >> ws, sname);    
					cout << endl;
					
					for (int i = 0; i < sname.length(); i++){	//converts the first letter of an users input to uppercase
						if (i == 0 || sname[i-1] == ' '){		//to minimize errors
							sname[i] = toupper(sname[i]);
						}
					}
					
					while (current != NULL){
						if (current -> Name == sname){
							cout << "Student Number: " << current -> ID << endl;
							cout << "Birthday: " << current -> bmonth << " " << current -> bdate << ", " << current -> byear << endl; 
							cout << "Gender: " << current -> Gender << endl;
							cout << "Address: " << current -> Address << endl;
							cout << "Degree Program: " << current -> Program << endl;
							cout << "Year Level: " << current -> yrlvl << endl << endl;
						}
						
						current = current -> next;					
							
					}
					cout << "Records not found" << endl;
					break;
				}
				
				
				case 3: {
					
					cout << "Enter Gender [F/M]: ";
					cin >> sgen;           
					cout << endl;
					
					sgen = toupper (sgen);		//converts an users input to uppercase to minimize errors
					
					while (current != NULL){
						if (current -> Gender == sgen){
							cout << "Student Number: " << current -> ID << endl;
							cout << "Name: " << current -> Name << endl;
							cout << "Birthday: " << current -> bmonth << " " << current -> bdate << ", " << current -> byear << endl; 
							cout << "Address: " << current -> Address << endl;
							cout << "Degree Program: " << current -> Program << endl;
							cout << "Year Level: " << current -> yrlvl << endl << endl;
						}	
																
						current = current -> next;	
					}
					cout << "Records not found" << endl;
					break;
				}
				
				case 4: {
					cout << "Enter Degree Program: ";
					getline (cin >> ws, sprogram);
					cout << endl;
					
					while (current != NULL){
						if (current -> Program == sprogram){
							cout << "Student Number: " << current -> ID << endl;
							cout << "Name: " << current -> Name << endl;
							cout << "Birthday: " << current -> bmonth << " " << current -> bdate << ", " << current -> byear << endl; 
							cout << "Gender: " << current -> Gender << endl;
							cout << "Address: " << current -> Address << endl;
							cout << "Year Level: " << current -> yrlvl << endl << endl;
						}
							
						current = current -> next;
						
					}
					cout << "Records not found" << endl;
					break;
				}
				
				case 5: {
					cout << "Enter Year Level: ";
					getline (cin >> ws, slvl);         
					cout << endl;

					for (int i = 0; i < slvl.length(); i++){	//changes the first letter after a whitespace to an uppercase
						if (i == 0 || slvl[i-1] == ' '){		//to minimize errors
							slvl[i] = toupper(slvl[i]);
						}
					}
					
					while (current != NULL){
						if (current -> yrlvl == slvl){
							cout << "Student Number: " << current -> ID << endl;
							cout << "Name: " << current -> Name << endl;
							cout << "Birthday: " << current -> bmonth << " " << current -> bdate << ", " << current -> byear << endl; 
							cout << "Gender: " << current -> Gender << endl;
							cout << "Address: " << current -> Address << endl;
							cout << "Degree Program: " << current -> Program << endl << endl;
						}
															
						current = current -> next;	
					cout << "Records not found" << endl;	
					}
					
					break;
				}
				
				default: cout << "Invalid Number! Please try again.";
					goto search;	
				
		}
		
		cout << "Search again? [y/n]: ";
		cin >> a;
		
		if (a == 'y' || a == 'Y'){
			system ("CLS");
			SearchRecords();
		} else {
			return;
		}
		
	}
}

//function to delete records
void Student::DeleteRecord(){
	data *current = head;
	data *back = NULL;
	
	string deleteID;
	char d;
	
	if (current == NULL){			//if no records have been made this prompt pops up
		cout << "\nNo records to delete!" << endl;
	} else {
		cout << "\nStudent Number to Delete: ";
		cin >> deleteID;
		
		while (current != NULL){
			if (current -> ID == deleteID){
				if (back == NULL){
					head = current -> next;
				} else {
					back -> next = current -> next;
				}
				
			delete current;
			
			cout << "\nRecord deleted successfully!" << endl;
			cout << "Delete Again? [y/n]: ";
			cin >> d;
			
				if (d == 'y' || d == 'Y'){
					DeleteRecord();
					
				} else {
					
					return;
				}
				
			} 
			
			back = current;
			current = current -> next;
		}
		
		cout << "Student Number not found! Record cannot be deleted." << endl;	
	}
	
}
//function to open student records via file handling
void Student::OpenRecords(){
	int opt;
	data *current = head;
	
	if (current == NULL){			//if no records have been made this prompt pops up
		cout << "\nNo records to open!" << endl;
		return;
	}
	
	ofstream MyFile ("Student Records.txt");	//makes a txt file named Student Records
	string view;
	if (MyFile.is_open()) { //if the file is open displays the currently saved student records
		
		while (current != NULL) {
			MyFile << "Student Number: " << current -> ID << endl;
			MyFile << "\tName: " << current -> Name << endl;
			MyFile << "\tGender: " << current -> Gender << endl;
			MyFile << "\tBirthday: " << current -> Birthday << endl;
			MyFile << "\tAddress: " << current -> Address << endl;
			MyFile << "\tDegree Program: " << current -> Program << endl;
			MyFile << "\tYear Level: " << current -> yrlvl << endl << endl;
			current = current -> next;
		}
		
		MyFile.close();
		cout << "File created successfully! Check your files and you can see a .txt file called Student Records." << endl << endl;
		
		menu1:
			cout << "[1] Read File from this Console" << endl;
			cout << "[2] Go Back to Menu" << endl;
			cout << "Selection: ";
			cin >> opt;
			cout << endl;
			
			switch (opt){
				case 1: {
					ifstream MyFile ("Student Records.txt");
					if (MyFile.is_open()){
						
						while (getline (MyFile, view)){
							cout << endl;
							cout << view;
						}
						
						cout << endl;
						system ("pause");
						system ("CLS");
						
					} else {
						cout << "File cannot be opened!" << endl;
					}
					
					MyFile.close();
					
					break;
				}
				
				case 2: {
					return;
				}
				
				default: {
					cout << "Invalid number!" << endl;
					system ("CLS");
					goto menu1;
				}
			
			} 

	}	

}



//main function 	
int main (){
	
	Student info;
	
	int num;
	char select;
	
	do {			//do-while loop for basic error trapping
		menu:
			cout << "======= STUDENT MANAGEMENT INFORMATION SYSTEM =======" << endl << endl;
			cout << "\t     [1] Add Record" << endl;
			cout << "\t     [2] Search Record" << endl;
			cout << "\t     [3] Delete Record" << endl;
			cout << "\t     [4] Display Records" << endl;
			cout << "\t     [5] Open Records" << endl;
			cout << "\t     [6] Exit" << endl;
			cout << "\t     Select a Number: ";
			cin >> num;
			
		switch (num) {
			case 1: {
				info.AddRecord(); //function call
				cout << "Do you want to go back to the menu [y/n]: ";
				cin >> select;
				system("CLS");
				break;
			}
	
			case 2: {
				info.SearchRecords();	//function call
				cout << "Do you want to go back to menu [y/n]: ";
				cin >> select;
				system("CLS");
				break;
			}
	
			case 3: {
				info.DeleteRecord();	//function call
				cout << "Do you want to go back to the menu [y/n]: ";
				cin >> select;
				system("CLS");
				break;
			}
	
			case 4: {
				info.DisplayRecords();	//function call
				cout << "Do you want to go back to the menu [y/n]: ";
				cin >> select;
				system("CLS");
				break;
			}
			
			case 5: {
				info.OpenRecords();	//function call
				cout << "Do you want to go back to the menu [y/n]: ";
				cin >> select;
				system("CLS");				
				break;
			}
	
			case 6: {
				cout << "Thank you for using our program!" << endl;
				cout << "Group Members: " << endl; 
				cout << "ARQUIZA, Andrea\nBOMANGLAG, Eron\nCABELIN, Jullian\nGARCIA, Aaron Jacob\nREGALA, Alex"<< endl;
				exit (0);
			}
	
			default: cout << "Invalid Selection!";
				goto menu;

		}

	} while (select == 'y' || select == 'Y');		
	
return 0;
	
}
	
	


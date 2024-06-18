#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    
    string name;
    string course;
    string year_Level;
    string student_No;
    int g1, g2, g3, g4, g5, g6; 

    cout<<"Student Record"<<endl;
    cout<<"Student No.:";
    getline(cin,student_No);
    cout<<"Name:";
    getline(cin,name);
    cout<<"Course:";
    getline(cin,course);
    cout<<"Year Level:";
    getline(cin,year_Level);

    cout<<"Grade Details"<<endl;
    cout<<"[1] Subject Code Grade:";
    cin>>g1;
    cout<<"[2] Subject Code Grade:";
    cin>>g2;
    cout<<"[3] Subject Code Grade:";
    cin>>g3;
    cout<<"[4] Subject Code Grade:";
    cin>>g4;
    cout<<"[5] Subject Code Grade:";
    cin>>g5;
    cout<<"[6] Subject Code Grade:";
    cin>>g6; 
    
    float gwa = (g1 + g2 + g3 + g4 + g5 + g6) / 6;
    cout<<"GWA:"<<gwa<<endl;
    string result = (gwa >= 70) ? "Passed" : "Failed";
    cout<<"Remark:"<<result;

    
    return 0;
}

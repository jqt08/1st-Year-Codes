
#include <iostream> //to use basic cin cout functions
#include <cstdlib> //to use srand and rand functions
#include <windows.h> //to use the sleep function

using namespace std;

void title();                   // Modules used in the making of the program       
void warrior();                 // MODULE 1- MAKING OF THE PROGAM ITSELF                  
void rogue();                   // MODULE 2- DIDNT USE PSEUDOCODES 
void mage();                    // MODULE 3- PREPROCESSOR DIRECTIVE, COMMENTS, ARITHMETIC OPERATORS
void warriorSkill();                       //COMPOUND OPERATORS, RELATIONAL OPERATORS, LOGICAL OPERATORS
void rogueSkill();              // MODULE 4- COUT, CIN
void mageSkill();               // MODULE 5- RELATIONAL OPERATORS, IF , IF - ELSE, SWITCH STATEMENTS
void lose ();                   // MODULE 6- WHILE, DO - WHILE, GOTO
void win ();                    // MODULE 7- VOID FUNCTION

int main(){
   int champ, HP, MP, skill, ATK, stage, EHP, EATK, choice, stage1, MPc, random, DMG, FDMG, stage2, ans;
   string name, answer, Warrior, Rogue, Mage, champType, answer1, poisoned, burned; //variables used
   
   
   defeat: // goto function
   title();
        cout<<"What is your name? ";
        cin>>name;                  //cin= used to input
        Sleep(1000);                //stops the program momentarily (to add some effect)
        cout<<"\nWelcome "<<name<<"!"<<endl;
        Sleep(1000);    
        first:                  // goto function that allows us to jump here
        do {                      // to loop and stops if the user answers "yes"
    cout<<"\nCHOOSE A CLASS...\n"<<endl;
    cout<<"[1] WARRIOR = 100 HP \n            = 15 MP \n            = 20 ATK"<<endl;
    cout<<"\n[2] ROGUE   = 90 HP \n            = 20 MP \n            = 20 ATK"<<endl;
    cout<<"\n[3] MAGE    = 80 HP \n            = 40 MP \n            = 20 ATK"<<endl;
        cin>>champ;
            switch (champ){
            case 1: 
                champType="Warrior";
                HP = 100;
                MP = 15;                                            //All character has increased dmg just for the sake 
                ATK = 20;                                           // of showing the program works
                DMG = 20;
                cout<<"\nA Well - balanced fighter."<<endl;
                cout<<"Pick the Warrior?"<<endl;
                cout<<"Yes or No"<<endl;
                cin>>answer;
                system("CLS");                      //clears the User interface
                break;                              // break is used so it would not execute other cases
            case 2: 
                champType="Rogue";                    //calling variable champType as on of the classes                            
                HP = 90;                              //as the program circles around the classes
                MP = 20;
                ATK = 20;
                DMG = 20;
                cout<<"\nUses status effects to gain the upper hand."<<endl;
                cout<<"Pick the Rogue?"<<endl;
                cout<<"Yes or No"<<endl;
                cin>>answer; 
                system("CLS"); 
                break;
            case 3: 
                champType="Mage";
                HP = 80;
                MP = 40;
                ATK = 20;
                DMG = 20;
                cout<<"\nLOW HP but uses HIGH damaging spells."<<endl;
                cout<<"Only character that deals double the ATK when using skills."<<endl;
                cout<<"Pick the Mage?"<<endl;
                cout<<"Yes or No"<<endl;
                cin>>answer; 
                system("CLS"); 
                break;
            default:
                cout<<"Please pick a valid option..."<<endl;
                goto first;
            
            }
        }while (answer=="No"||answer=="no");

    cout<<"You have chosen the "<<champType<<" class."<<endl;
    system("CLS");          // clears the output of the program
second:
do {            // to loop incase the user answers "no"
if (champType == "Warrior")
{
    cout<<"Pick a number to view skill effects"<<endl;
    warrior();
    cin>>skill;
        switch(skill){
            case 1:
                cout<<"\nIncrease HP by [5]."<<endl;
                cout<<"Costs [4] MP"<<endl;
                cout<<"\nAre you done viewing all the skills?"<<endl;
                cout<<"[Yes or No]"<<endl;
                cin>>answer1; 
                system("CLS"); 
                break;
            case 2:
                cout<<"\nDeals 2x normal attack damage."<<endl;
                cout<<"Costs [8] MP"<<endl;
                cout<<"\nAre you done viewing all the skills?"<<endl;
                cout<<"[Yes or No]"<<endl;
                cin>>answer1; 
                system("CLS"); 
                break;
            case 3:
                cout<<"\nIncrease ATK by [5]."<<endl;
                cout<<"Costs [6] MP "<<endl;
                cout<<"\nAre you done viewing all the skills?"<<endl;
                cout<<"[Yes or No]"<<endl;
                cin>>answer1; 
                system("CLS"); 
                break;
            case 4:
                cout<<"\nDeals [15] damage"<<endl;
                cout<<"Does not cost MP"<<endl;
                cout<<"\nAre you done viewing all the skills?"<<endl;
                cout<<"[Yes or No]"<<endl;
                cin>>answer1; 
                system("CLS"); 
                break;
            default:
                cout<<"Please pick a valid option..."<<endl;
                goto second;
        }
}
else if (champType == "Rogue")
{
    cout<<"Pick a number to view skill effects"<<endl;
    rogue();
    cin>>skill;
        switch(skill){
            case 1:
                cout<<"\nDeals normal attack damage but POISONS the enemy."<<endl;
                cout<<"Poison deals damage over time."<<endl;       // when used deals extra damage every turn
                cout<<"Costs [8] MP"<<endl;
                cout<<"\nAre you done viewing all the skills?"<<endl;
                cout<<"[Yes or No]"<<endl;
                cin>>answer1; 
                system("CLS"); 
                break;
            case 2:
                cout<<"\nDeals a Critical Strike."<<endl;
                cout<<"A Critical Strike hits for 2x the normal attack damage."<<endl;
                cout<<"Costs [11] MP"<<endl;
                cout<<"\nAre you done viewing all the skills?"<<endl;
                cout<<"[Yes or No]"<<endl;
                cin>>answer1; 
                system("CLS"); 
                break;
            case 3:
                cout<<"\nDrains the life of and enemy."<<endl;
                cout<<"Life drained would be half the damage."<<endl;
                cout<<"Costs [9] MP"<<endl;
                cout<<"\nAre you done viewing all the skills?"<<endl;
                cout<<"[Yes or No]"<<endl;
                cin>>answer1; 
                system("CLS"); 
                break;
            case 4:
                cout<<"\nDeals [15] damage"<<endl;
                cout<<"Does not cost MP"<<endl;
                cout<<"\nAre you done viewing all the skills?"<<endl;
                cout<<"[Yes or No]"<<endl;
                cin>>answer1; 
                system("CLS"); 
                break;
            default:
                cout<<"Please pick a valid option..."<<endl;
                goto second;
        }
}
else if (champType == "Mage")
{
    cout<<"Pick a number to view skill effects"<<endl;
    mage();
    cin>>skill;
        switch(skill){
            case 1:
                cout<<"\nDamages and BURNS target."<<endl;
                cout<<"Burned targets recieve damage over time."<<endl;     //when used deals extra dmg over time
                cout<<"Costs [12] MP"<<endl;
                cout<<"\nAre you done viewing all the skills?"<<endl;
                cout<<"[Yes or No]"<<endl;
                cin>>answer1; 
                system("CLS"); 
                break;
            case 2:
                cout<<"\nFreezes target."<<endl;
                cout<<"Deals 1.5x the normal attack damage."<<endl;
                cout<<"Costs [16] MP"<<endl;
                cout<<"\nAre you done viewing all the skills?"<<endl;
                cout<<"[Yes or No]"<<endl;
                cin>>answer1; 
                system("CLS"); 
                break;
            case 3:
                cout<<"\nHeals the user."<<endl;
                cout<<"Costs [15] MP"<<endl;
                cout<<"\nAre you done viewing all the skills?"<<endl;
                cout<<"[Yes or No]"<<endl;
                cin>>answer1; 
                system("CLS"); 
                break;
            case 4:
                cout<<"\nDeals [10] damage"<<endl;
                cout<<"Does not cost MP"<<endl;
                cout<<"\nAre you done viewing all the skills?"<<endl;
                cout<<"[Yes or No]"<<endl;
                cin>>answer1; 
                system("CLS"); 
                break;
            default:
                cout<<"Please pick a valid option..."<<endl;
                goto second;
        }
}   
} while (answer1 == "No" || answer1 == "no");

stage1 = 0; // to lock the stages

cout<<"You are a "<<champType<<" tasked to rescue the princess"<<endl; 
cout<<"\nHP = "<<HP<<" \tMP = "<<MP<<" \tATK = "<<ATK<<endl;
stages:                         // goto function 
cout<<"Pick a stage..."<<endl;
cout<<"[1]  [2]  [3]"<<endl;
cin>>stage;
    switch(stage){
        case 1:
            EHP = 100;
            EATK = 10;
            cout<<"Kuya Guard"<<endl;
            cout<<"HP = "<<EHP<<"\tATK = "<<EATK<<endl;                      
            do{
                if (champType == "Warrior")
                {
                    cout<<"What would you like to do?"<<endl;
                    cout<<"********************************************"<<endl;
                    cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                    cout<<"********************************************"<<endl;
                    cout<<"\n*****************************"<<endl;
                    cout<<"**EHP = ["<<EHP<<"]"<<"\tEATK = ["<<EATK<<"]**"<<endl;  
                    cout<<"*****************************"<<endl;
                warriorSkill();
                    cin>>choice;
                    switch (choice){
                        case 1:
                            MPc = 4;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            HP += 5;
                           
                            cout<<"You increased your max HP!"<<endl;

                            Sleep(500);
                            cout<<"Kuya Guard attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;        //used to randomize a number from 1-5
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;                       
                            
                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }
                            
                            break;
                        case 2:
                            MPc = 8;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            DMG = ATK * 2;
                            EHP -= DMG;
                            
                            cout<<"You strike Kuya Guard using your sword!"<<endl;

                            Sleep(500);
                            cout<<"Kuya Guard attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;                       
                            
                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }
                            
                            break;
                        case 3:
                            MPc = 6;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            ATK += 5;
                            
                            cout<<"You increased your max ATK!"<<endl;

                            Sleep(500);
                            cout<<"Kuya Guard attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;                       
                            
                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }
                            
                            break;
                        case 4:
                            EHP -= ATK;
                            cout<<"You hit Kuya Guard with your normal attack!"<<endl;

                            Sleep(500);
                            cout<<"Kuya Guard attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;

                        default:
                            cout<<"Please pick a valid option..."<<endl;
                    }
                }
                if (champType == "Rogue")
                {
                    cout<<"What would you like to do?"<<endl;
                    cout<<"********************************************"<<endl;
                    cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                    cout<<"********************************************"<<endl;
                    cout<<"\n*****************************"<<endl;
                    cout<<"**EHP = ["<<EHP<<"]"<<"\tEATK = ["<<EATK<<"]**"<<endl;  
                    cout<<"*****************************"<<endl;
                rogueSkill();
                    cin>>choice;
                    switch (choice){
                        case 1:
                            MPc = 8;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            EHP -= DMG;         
                            poisoned = "Kuya Guard";

                            cout<<"You poisoned Kuya Guard!"<<endl;
                            Sleep(500);

                            if (poisoned == "Kuya Guard"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to poison."<<endl;
                            }

                            cout<<"Kuya Guard attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 2:
                            MPc = 11;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            EHP -= ATK * 2;
                            
                            cout<<"You dealt a critical hit to Kuya Guard!"<<endl;

                            if (poisoned == "Kuya Guard"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to poison."<<endl;
                            }

                            cout<<"Kuya Guard attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 3:
                            MPc = 9;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}    
                            EHP -= DMG;
                            HP += ATK * .5;
                            
                            cout<<"You drained the life of Kuya Guard!"<<endl;
                            cout<<"Healing you for "<<ATK/2<<" HP."<<endl;

                            if (poisoned == "Kuya Guard"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to poison."<<endl;
                            }

                            cout<<"Kuya Guard attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 4:
                            EHP -= ATK;
                            cout<<"You hit the enemy with your normal attack!"<<endl;

                            if (poisoned == "Kuya Guard"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to poison."<<endl;
                            }
                            
                            cout<<"Kuya Guard attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            
                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;

                        default:
                            cout<<"Please pick a valid option..."<<endl;
                    }
                }

                if (champType == "Mage")
                {
                    cout<<"What would you like to do?"<<endl;
                    cout<<"********************************************"<<endl;
                    cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                    cout<<"********************************************"<<endl;
                    cout<<"\n*****************************"<<endl;
                    cout<<"**EHP = ["<<EHP<<"]"<<"\tEATK = ["<<EATK<<"]**"<<endl;  
                    cout<<"*****************************"<<endl;
                mageSkill();
                    cin>>choice;
                    switch (choice){
                        case 1:
                            MPc = 12;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}  

                            EHP -= DMG;
                            burned = "Kuya Guard";

                            cout<<"You burned Kuya Guard!"<<endl;

                            if (burned == "Kuya Guard"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to burn."<<endl;
                            }

                            cout<<"Kuya Guard attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 2:
                            
                            MPc = 16;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;} 

                            FDMG = DMG * 1.5;
                            EHP -= FDMG;

                            cout<<"You froze Kuya Guard!"<<endl;

                            if (burned == "Kuya Guard"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to burn."<<endl;
                            }

                            cout<<"Kuya Guard attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 3:
                            MPc = 15;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}

                            HP += 20;

                            cout<<"You healed yourself!"<<endl;

                            if (burned == "Kuya Guard"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did "<<random<<" damage due to burn."<<endl;
                            }

                            cout<<"Kuya Guard attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 4:
                            EHP -= ATK;
                            cout<<"You hit Kuya Guard with your normal attack!"<<endl;
                            
                            if (burned == "Kuya Guard"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to burn."<<endl;
                            }

                            cout<<"Kuya Guard attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;  

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;

                        default:
                            cout<<"Please pick a valid option..."<<endl;
                    }
                }  
            }while (HP >= 1 || EHP >=1); 

        case 2:                                                     //STAGE 2!!!!!!!!!!!!!!!!!!!
            if (stage1 == 0){
                cout<<"You have not unlocked this stage yet..."<<endl;
                system("pause");
                goto stages;
            } 
            else if (stage1 == 1){
            EHP = 120;
            EATK = 15;
            if (champType == "Warrior"){
                HP = 110;                              // Will be increasing stats again
                MP = 20;                               // just for the sake of finishing the level.
                ATK = 25;
                DMG = 25;
            }
            if (champType == "Rogue"){
                HP = 100;
                MP = 25;
                ATK = 30;
                DMG = 30;
            }
            if (champType == "Mage"){
                HP = 100;
                MP = 50;
                ATK = 20;
                DMG = 40;
            }
            cout<<"Ate sa Canteen"<<endl;
            cout<<"HP = "<<EHP<<"\tATK = "<<EATK<<endl; 
            do{
                if (champType == "Warrior")
                {
                    cout<<"What would you like to do?"<<endl;
                    cout<<"********************************************"<<endl;
                    cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                    cout<<"********************************************"<<endl;
                    cout<<"\n*****************************"<<endl;
                    cout<<"**EHP = ["<<EHP<<"]"<<"\tEATK = ["<<EATK<<"]**"<<endl;  
                    cout<<"*****************************"<<endl;
                warriorSkill();
                    cin>>choice;
                    switch (choice){
                        case 1:
                            MPc = 4;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            HP += 5;
                           
                            cout<<"You increased your max HP!"<<endl;

                            Sleep(500);
                            cout<<"Ate sa Canteen attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;                       
                            
                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage2 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }
                            
                            break;
                        case 2:
                            MPc = 8;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            DMG = ATK * 2;
                            EHP -= DMG;
                            
                            cout<<"You strike Ate sa Canteen using your sword!"<<endl;

                            Sleep(500);
                            cout<<"Ate sa Canteen attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;                       
                            
                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage2 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }
                            
                            break;
                        case 3:
                            MPc = 6;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            ATK += 5;
                            
                            cout<<"You increased your max ATK!"<<endl;

                            Sleep(500);
                            cout<<"Ate sa Canteen attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;                       
                            
                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage2 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }
                            
                            break;
                        case 4:
                            EHP -= ATK;
                            cout<<"You hit Ate sa Canteen with your normal attack!"<<endl;

                            Sleep(500);
                            cout<<"Ate sa Canteen attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage2 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;

                        default:
                            cout<<"Please pick a valid option..."<<endl;
                    }
                }
                if (champType == "Rogue")
                {
                    cout<<"What would you like to do?"<<endl;
                    cout<<"********************************************"<<endl;
                    cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                    cout<<"********************************************"<<endl;
                    cout<<"\n*****************************"<<endl;
                    cout<<"**EHP = ["<<EHP<<"]"<<"\tEATK = ["<<EATK<<"]**"<<endl;  
                    cout<<"*****************************"<<endl;
                rogueSkill();
                    cin>>choice;
                    switch (choice){
                        case 1:
                            MPc = 8;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            EHP -= DMG;         
                            poisoned = "Ate sa Canteen";

                            cout<<"You poisoned Ate sa Canteen!"<<endl;
                            Sleep(500);

                            if (poisoned == "Ate sa Canteen"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to poison."<<endl;
                            }

                            cout<<"Ate sa Canteen attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage2 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 2:
                            MPc = 11;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            EHP -= ATK * 2;
                            
                            cout<<"You dealt a critical hit to Ate sa Canteen!"<<endl;

                            if (poisoned == "Ate sa Canteen"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to poison."<<endl;
                            }

                            cout<<"Ate sa Canteen attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage2 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 3:
                            MPc = 9;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}    
                            EHP -= DMG;
                            HP += ATK * .5;
                            
                            cout<<"You drained the life of Ate sa Canteen!"<<endl;
                            cout<<"Healing you for "<<ATK/2<<" HP."<<endl;

                            if (poisoned == "Ate sa Canteen"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to poison."<<endl;
                            }

                            cout<<"Ate sa Canteen attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage2 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 4:
                            EHP -= ATK;
                            cout<<"You hit Ate sa Canteen with your normal attack!"<<endl;

                            if (poisoned == "Ate sa Canteen"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to poison."<<endl;
                            }
                            
                            cout<<"Ate sa Canteen attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            
                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage2 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;

                        default:
                            cout<<"Please pick a valid option..."<<endl;
                    }
                }

                if (champType == "Mage")
                {
                    cout<<"What would you like to do?"<<endl;
                    cout<<"********************************************"<<endl;
                    cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                    cout<<"********************************************"<<endl;
                    cout<<"\n*****************************"<<endl;
                    cout<<"**EHP = ["<<EHP<<"]"<<"\tEATK = ["<<EATK<<"]**"<<endl;  
                    cout<<"*****************************"<<endl;
                mageSkill();
                    cin>>choice;
                    switch (choice){
                        case 1:
                            MPc = 12;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}  

                            EHP -= DMG;
                            burned = "Ate sa Canteen";

                            cout<<"You burned Ate sa Canteen!"<<endl;

                            if (burned == "Ate sa Canteen"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to burn."<<endl;
                            }

                            cout<<"Ate sa Canteen attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage2 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 2:
                            
                            MPc = 16;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;} 

                            FDMG = DMG * 1.5;
                            EHP -= FDMG;

                            cout<<"You froze Ate sa Canteen!"<<endl;

                            if (burned == "Ate sa Canteen"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to burn."<<endl;
                            }

                            cout<<"Ate sa Canteen attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage2 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 3:
                            MPc = 15;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}

                            HP += 20;

                            cout<<"You healed yourself!"<<endl;

                            if (burned == "Ate sa Canteen"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did "<<random<<" damage due to burn."<<endl;
                            }

                            cout<<"Ate sa Canteen attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage2 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 4:
                            EHP -= ATK;
                            cout<<"You hit Ate sa Canteen with your normal attack!"<<endl;
                            
                            if (burned == "Ate sa Canteen"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to burn."<<endl;
                            }

                            cout<<"Ate sa Canteen attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;  

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "Pick another stage or Exit."<<endl;
                            cout << "[1] PICK ANOTHER STAGE.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage2 = 1;
                                    system("pause");
                                    goto stages;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;

                        default:
                            cout<<"Please pick a valid option..."<<endl;
                    }
                }  
            }while (HP >= 1 || EHP >=1);                      
            } //else if 

        case 3:                                                         //CASE 3!!!!!!!!!!!!!!!!!!!!
            if (stage2 == 0){
                cout<<"You have not unlocked this stage yet..."<<endl;
                system("pause");
                goto stages;
            } 
            else if (stage2 == 1){
                EHP = 200;
                EATK = 20;
                if (champType == "Warrior"){
                HP = 120;                              // Will be increasing stats again
                MP = 30;                               // just for the sake of finishing the level.
                ATK = 35;
                DMG = 35;
                }
                if (champType == "Rogue"){
                HP = 110;
                MP = 35;
                ATK = 40;
                DMG = 40;
                }
                if (champType == "Mage"){
                HP = 100;
                MP = 60;
                ATK = 30;
                DMG = 50;
                }
                cout<<"Sir Aki"<<endl;
                cout<<"HP = "<<EHP<<"\tATK = "<<EATK<<endl;
                do{
                if (champType == "Warrior")
                {
                    cout<<"What would you like to do?"<<endl;
                    cout<<"********************************************"<<endl;
                    cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                    cout<<"********************************************"<<endl;
                    cout<<"\n*****************************"<<endl;
                    cout<<"**EHP = ["<<EHP<<"]"<<"\tEATK = ["<<EATK<<"]**"<<endl;  
                    cout<<"*****************************"<<endl;
                warriorSkill();
                    cin>>choice;
                    switch (choice){
                        case 1:
                            MPc = 4;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            HP += 5;
                           
                            cout<<"You increased your max HP!"<<endl;

                            Sleep(500);
                            cout<<"Sir Aki attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;                       
                            
                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "WELL DONE "<<name<< " IN RESCUING THE PRINCESS!!!"<<endl;
                            cout<<" YOU HAVE SUCCESSFULLY COMPLETED THE GAME!!!"<<endl;
                            cout<<"Please choose if you want to PLAY AGAIN or EXIT."<<endl;
                            cout << "[1] PLAY AGAIN.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 0;
                                    stage2 = 0;
                                    system("pause");
                                    goto first;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }
                            
                            break;
                        case 2:
                            MPc = 8;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            DMG = ATK * 2;
                            EHP -= DMG;
                            
                            cout<<"You strike Sir Aki using your sword!"<<endl;

                            Sleep(500);
                            cout<<"Sir Aki attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;                       
                            
                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "WELL DONE "<<name<< " IN RESCUING THE PRINCESS!!!"<<endl;
                            cout<<" YOU HAVE SUCCESSFULLY COMPLETED THE GAME!!!"<<endl;
                            cout<<"Please choose if you want to PLAY AGAIN or EXIT."<<endl;
                            cout << "[1] PLAY AGAIN.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 0;
                                    stage2 = 0;
                                    system("pause");
                                    goto first;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }
                            
                            break;
                        case 3:
                            MPc = 6;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            ATK += 5;
                            
                            cout<<"You increased your max ATK!"<<endl;

                            Sleep(500);
                            cout<<"Sir Aki attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;                       
                            
                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "WELL DONE "<<name<< " IN RESCUING THE PRINCESS!!!"<<endl;
                            cout<<" YOU HAVE SUCCESSFULLY COMPLETED THE GAME!!!"<<endl;
                            cout<<"Please choose if you want to PLAY AGAIN or EXIT."<<endl;
                            cout << "[1] PLAY AGAIN.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 0;
                                    stage2 = 0;
                                    system("pause");
                                    goto first;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }
                            
                            break;
                        case 4:
                            EHP -= ATK;
                            cout<<"You hit Sir Aki with your normal attack!"<<endl;

                            Sleep(500);
                            cout<<"Sir Aki attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "WELL DONE "<<name<< " IN RESCUING THE PRINCESS!!!"<<endl;
                            cout<<" YOU HAVE SUCCESSFULLY COMPLETED THE GAME!!!"<<endl;
                            cout<<"Please choose if you want to PLAY AGAIN or EXIT."<<endl;
                            cout << "[1] PLAY AGAIN.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 0;
                                    stage2 = 0;
                                    system("pause");
                                    goto first;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;

                        default:
                            cout<<"Please pick a valid option..."<<endl;
                    }
                }
                if (champType == "Rogue")
                {
                    cout<<"What would you like to do?"<<endl;
                    cout<<"********************************************"<<endl;
                    cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                    cout<<"********************************************"<<endl;
                    cout<<"\n*****************************"<<endl;
                    cout<<"**EHP = ["<<EHP<<"]"<<"\tEATK = ["<<EATK<<"]**"<<endl;  
                    cout<<"*****************************"<<endl;
                rogueSkill();
                    cin>>choice;
                    switch (choice){
                        case 1:
                            MPc = 8;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            EHP -= DMG;         
                            poisoned = "Sir Aki";

                            cout<<"You poisoned Sir Aki!"<<endl;
                            Sleep(500);

                            if (poisoned == "Sir Aki"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to poison."<<endl;
                            }

                            cout<<"Sir Aki attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "WELL DONE "<<name<< " IN RESCUING THE PRINCESS!!!"<<endl;
                            cout<<" YOU HAVE SUCCESSFULLY COMPLETED THE GAME!!!"<<endl;
                            cout<<"Please choose if you want to PLAY AGAIN or EXIT."<<endl;
                            cout << "[1] PLAY AGAIN.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 0;
                                    stage2 = 0;
                                    system("pause");
                                    goto first;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 2:
                            MPc = 11;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}   
                            EHP -= ATK * 2;
                            
                            cout<<"You dealt a critical hit to Sir Aki!"<<endl;

                            if (poisoned == "Sir Aki"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to poison."<<endl;
                            }

                            cout<<"Sir Aki attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "WELL DONE "<<name<< " IN RESCUING THE PRINCESS!!!"<<endl;
                            cout<<" YOU HAVE SUCCESSFULLY COMPLETED THE GAME!!!"<<endl;
                            cout<<"Please choose if you want to PLAY AGAIN or EXIT."<<endl;
                            cout << "[1] PLAY AGAIN.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 0;
                                    stage2 = 0;
                                    system("pause");
                                    goto first;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 3:
                            MPc = 9;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}    
                            EHP -= DMG;
                            HP += ATK * .5;
                            
                            cout<<"You drained the life of Sir Aki!"<<endl;
                            cout<<"Healing you for "<<ATK/2<<" HP."<<endl;

                            if (poisoned == "Sir Aki"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to poison."<<endl;
                            }

                            cout<<"Sir Aki attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "WELL DONE "<<name<< " IN RESCUING THE PRINCESS!!!"<<endl;
                            cout<<" YOU HAVE SUCCESSFULLY COMPLETED THE GAME!!!"<<endl;
                            cout<<"Please choose if you want to PLAY AGAIN or EXIT."<<endl;
                            cout << "[1] PLAY AGAIN.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 0;
                                    stage2 = 0;
                                    system("pause");
                                    goto first;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 4:
                            EHP -= ATK;
                            cout<<"You hit Sir Aki with your normal attack!"<<endl;

                            if (poisoned == "Sir Aki"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to poison."<<endl;
                            }
                            
                            cout<<"Sir Aki attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            
                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "WELL DONE "<<name<< " IN RESCUING THE PRINCESS!!!"<<endl;
                            cout<<" YOU HAVE SUCCESSFULLY COMPLETED THE GAME!!!"<<endl;
                            cout<<"Please choose if you want to PLAY AGAIN or EXIT."<<endl;
                            cout << "[1] PLAY AGAIN.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 0;
                                    stage2 = 0;
                                    system("pause");
                                    goto first;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;

                        default:
                            cout<<"Please pick a valid option..."<<endl;
                    }
                }

                if (champType == "Mage")
                {
                    cout<<"What would you like to do?"<<endl;
                    cout<<"********************************************"<<endl;
                    cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                    cout<<"********************************************"<<endl;
                    cout<<"\n*****************************"<<endl;
                    cout<<"**EHP = ["<<EHP<<"]"<<"\tEATK = ["<<EATK<<"]**"<<endl;  
                    cout<<"*****************************"<<endl;
                mageSkill();
                    cin>>choice;
                    switch (choice){
                        case 1:
                            MPc = 12;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}  

                            EHP -= DMG;
                            burned = "Sir Aki";

                            cout<<"You burned Sir Aki!"<<endl;

                            if (burned == "Sir Aki"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to burn."<<endl;
                            }

                            cout<<"Sir Aki attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "WELL DONE "<<name<< " IN RESCUING THE PRINCESS!!!"<<endl;
                            cout<<" YOU HAVE SUCCESSFULLY COMPLETED THE GAME!!!"<<endl;
                            cout<<"Please choose if you want to PLAY AGAIN or EXIT."<<endl;
                            cout << "[1] PLAY AGAIN.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 0;
                                    stage2 = 0;
                                    system("pause");
                                    goto first;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 2:
                            
                            MPc = 16;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;} 

                            FDMG = DMG * 1.5;
                            EHP -= FDMG;

                            cout<<"You froze Sir Aki!"<<endl;

                            if (burned == "Sir Aki"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to burn."<<endl;
                            }

                            cout<<"Sir Aki attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "WELL DONE "<<name<< " IN RESCUING THE PRINCESS!!!"<<endl;
                            cout<<" YOU HAVE SUCCESSFULLY COMPLETED THE GAME!!!"<<endl;
                            cout<<"Please choose if you want to PLAY AGAIN or EXIT."<<endl;
                            cout << "[1] PLAY AGAIN.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 0;
                                    stage2 = 0;
                                    system("pause");
                                    goto first;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 3:
                            MPc = 15;
                            if (MPc > MP){
                                cout<<"You don't have enough MP for that."<<endl;
                                cout<<"\n********************************************"<<endl;
                                cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                                cout<<"********************************************"<<endl;
                                break;}

                            HP += 20;

                            cout<<"You healed yourself!"<<endl;

                            if (burned == "Sir Aki"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did "<<random<<" damage due to burn."<<endl;
                            }

                            cout<<"Sir Aki attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;
                            MP -= MPc;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;   

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "WELL DONE "<<name<< " IN RESCUING THE PRINCESS!!!"<<endl;
                            cout<<" YOU HAVE SUCCESSFULLY COMPLETED THE GAME!!!"<<endl;
                            cout<<"Please choose if you want to PLAY AGAIN or EXIT."<<endl;
                            cout << "[1] PLAY AGAIN.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 0;
                                    stage2 = 0;
                                    system("pause");
                                    goto first;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;
                        case 4:
                            EHP -= ATK;
                            cout<<"You hit Sir Aki with your normal attack!"<<endl;
                            
                            if (burned == "Sir Aki"){
                            srand(time(0));
                            random = rand()%9+1;
                            EHP -= random;
                            cout<<"You did an extra "<<random<<" damage due to burn."<<endl;
                            }

                            cout<<"Sir Aki attacks!"<<endl;
                            HP -= EATK;
                            cout<<"You took "<<EATK<<" damage leaving you with ["<<HP<<"] health."<<endl;

                            srand(time(0));
                            random = rand()%4+1;
                            MP += random;
                            cout<<"\nYou have regenerated "<<random<<" MP. "<<endl;
                            cout<<"********************************************"<<endl;
                            cout<<"**HP = ["<<HP<<"]\tMP = ["<<MP<<"]\tATK = ["<<ATK<<"]**"<<endl;  
                            cout<<"********************************************"<<endl;  

                            if (HP<=0){
                            lose();
                            system("pause");
                            goto defeat;
                            }
                            else if (EHP<=0){
                            win();
                            cout << "WELL DONE "<<name<< " IN RESCUING THE PRINCESS!!!"<<endl;
                            cout<<" YOU HAVE SUCCESSFULLY COMPLETED THE GAME!!!"<<endl;
                            cout<<"Please choose if you want to PLAY AGAIN or EXIT."<<endl;
                            cout << "[1] PLAY AGAIN.\n[2] EXIT."<<endl;
                            cin >> ans;
                            switch (ans){
                                case 1:
                                    stage1 = 0;
                                    stage2 = 0;
                                    system("pause");
                                    goto first;
                                case 2:
                                    return 0;
                                default:
                                    cout<<"Please pick a valid option..."<<endl;
                            }
                            }

                            break;

                        default:
                            cout<<"Please pick a valid option..."<<endl;
                    }
                }  
            }while (HP >= 1 || EHP >=1);     

            }// else if

            default:
                cout<<"Please pick a valid option..."<<endl;
                goto stages;
                
            }//switch (stage)
    return 0;
}//int main
    
    void title(){
    cout<<"=============================="<<endl;
    cout<<"==                          =="<<endl;
    cout<<"==       FEU DUNGEON        =="<<endl;
    cout<<"==                          =="<<endl;
    cout<<"=============================="<<endl;
    cout<<"\nCHARACTER CREATION.\n";
    }
    void warrior(){
        cout<<"\n[1] Shield Stance\t[2] Sword Strike\n\n[3] Rage\t        [4] Normal Attack "<< endl;
    }
    void rogue(){
        cout<<"\n[1] Poison Arrow\t[2] Backstab\n\n[3] Life Drain\t        [4] Normal Attack "<< endl;
    } 
    void mage(){
        cout<<"\n[1] Blaze\t[2] Freeze\n\n[3] Heal\t[4] Normal Attack "<< endl;
    }
    void warriorSkill(){
        cout<<"\n[1] Shield Stance - [4] MP\t[2] Sword Strike - [8] MP"<<endl;
        cout<<"                  - +5 HP\t                 - 2x DMG"<<endl;
        cout<<"[3] Rage - [6] MP\t        [4] Normal Attack "<< endl;
        cout<<"         - +5 ATK"<< endl;    
    }
    void rogueSkill(){
        cout<<"\n[1] Poison Arrow - [8] MP\t[2] Backstab - [11] MP"<<endl;
        cout<<"                 - Poisons enemy\t     - 2x DMG"<<endl;
        cout<<"[3] Life Drain - [9] MP\t        [4] Normal Attack "<< endl;
        cout<<"               - Drains Life"<< endl;    
    
    }
    void mageSkill(){
        cout<<"\n[1] Blaze - [12] MP\t        [2] Freeze - [16] MP"<<endl;
        cout<<"          - Burns target\t   - 1.5x DMG"<<endl;
        cout<<"[3] Heal - [15] MP\t        [4] Normal Attack "<< endl;
        cout<<"         - Heals user"<< endl;    
    
    }
    void lose (){ 
    cout << "You died." << endl;
    cout << "Going back to the start..."<< endl;  
    } 
    void win (){ 
    cout << "\nYou defeated the enemy!" << endl;
    }
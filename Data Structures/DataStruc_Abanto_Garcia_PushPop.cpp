#include <iostream>
using namespace std;
int stack[5], stack2[5], n=5, top=-1, top1=-1;

void push(int val, int choice) {
   if(choice == 1 && top>=n-1)
        cout<<"Stack 1 Overflow"<<endl;
   else if(choice == 2 && top1>=n-1)
        cout<<"Stack 2 Overflow"<<endl;
   else {
        if (choice == 1){
            top++;
            stack[top]=val; 
       }
       else if (choice == 2){
            top1++;
            stack2[top1]=val;   
       }
   }
}


void pop(int choice) {
   if(choice == 1 && top==-1)
   cout<<"Stack Underflow"<<endl;
   else if(choice == 2 && top1==-1)
   cout<<"Stack Underflow"<<endl;
   
   else {
        if (choice == 1){
            cout<<"\nThe popped element is "<< stack[top] <<endl;
            top--; 
        }
        else if (choice == 2){
            cout<<"\nThe popped element is "<< stack2[top1] <<endl;
            top1--; 
        }
      
   }
}


void display(int choice) {
    if (choice == 1){
        if(top>=0) {
            cout<<"Stack elements are:";
            for(int i=top; i>=0; i--)
                cout<<stack[i]<<" ";
            cout<<endl; 
        }
        else {
            cout<<"\nStack is empty"<<endl;
        }
    }
    else if (choice == 2){
        if(top1>=0) {
            cout<<"Stack elements are:";
            for(int i=top1; i>=0; i--)
                cout<<stack2[i]<<" ";
            cout<<endl; 
        }
        else {
            cout<<"\nStack is empty"<<endl;
        }
    }
    else
        cout<<"Invalid choice"<<endl;
}


void popnt(int choice){   
    int transfer, transfer1;
    
    if (choice == 1){
        if(top<=-1){
            cout<<"Stack Underflow"<<endl; 
            return;
        }
        cout<<"The popped and transferred element is "<< stack[top] <<endl;
        transfer = stack[top];
        top--;
            
        if(top1>=n-1){
            cout<<"Stack 2 Overflow: Cannot transfer element"<<endl;
            top++;
            stack[top] = transfer;
        }
        else {
            top1++;
            stack2[top1] = transfer;
        }
    }
        
    if (choice == 2){
        if(top1<=-1){
            cout<<"Stack Underflow"<<endl; 
            return;
        }
        cout<<"The popped and transferred element is "<< stack2[top1] <<endl;
        transfer1 = stack2[top1];
        top1--;
            
        if(top>=n-1){
            cout<<"Stack 1 Overflow: Cannot transfer element"<<endl;
            top1++;
            stack2[top1] = transfer1;
        }
        else {
            top++;
            stack[top] = transfer1;
        }
    }
}


int main() {
   int ch, val, choice;
   do {
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Pop and Transfer"<<endl;
   cout<<"5) Exit"<<endl;
      cout<<"\nEnter choice: ";
      cin>>ch;
      switch(ch) {
         case 1: {
            a:
            cout<<"\nSelect a stack to push (1 or 2): ";
            cin>>choice;
            if (choice != 1 && choice != 2){
                cout << "Please pick a proper value..."<< endl;
                goto a;
            }
            cout<<"Enter value to be pushed: ";
            cin>>val;
            push(val, choice);
            break;
         }
         case 2: {
            b:
            cout<<"\nSelect a stack to pop from (1 or 2): ";
            cin>>choice;
            if (choice != 1 && choice != 2){
                cout << "Please pick a proper value..."<< endl;
                goto b;
            }
            pop(choice);
            break;
         }
         case 3: {
            c:
            cout<<"\nSelect a stack to display (1 or 2): ";
            cin>>choice;
            if (choice != 1 && choice != 2){
                cout << "Please pick a proper value..."<< endl;
                goto c;
            }
            display(choice);
            break;
         }
         case 4: {
            d:
            cout<<"\nSelect a stack to pop and transfer from (1 or 2): ";
            cin>>choice;
            if (choice != 1 && choice != 2){
                cout << "Please pick a proper value..."<< endl;
                goto d;
            }
            popnt(choice);
            break;
         }
         case 5: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=5);
   return 0;
}
/*
Unit - Team TN06
Besagas, John Paul
Lacap, Xynil
Garcia, Aaron
Lechuga, Jienne
*/

#include <iostream>
#include <cstdlib>

using namespace std;

struct Product
{
    string name;
    int price;
};

struct Node
{
    Product data;
    Node *next;
};

void Add_To_Cart(Node **cart, Product productList[], int productCount)
{
    int choice;
    cout << "Enter the product number you want to add to the cart: ";
    cin >> choice;

    if (choice < 1 || choice > productCount)
    {
        cout << "Invalid choice." << endl;
        return;
    }

    Node *newNode = new Node;
    newNode->data = productList[choice - 1];
    newNode->next = NULL;

    if (*cart == NULL)
    {
        *cart = newNode;
    }
    else
    {
        Node *temp = *cart;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    cout << productList[choice - 1].name << " added to cart." << endl;
}

void View_Cart(Node *cart)
{
    if (cart == NULL)
    {
        cout << "Cart is empty." << endl;
        return;
    }

    cout << "Cart:" << endl;
    int total = 0;
    int count = 1;
    while (cart != NULL)
    {
        cout << count << ". " << cart->data.name << " - " << cart->data.price << " PHP " << endl;
        total += cart->data.price;
        cart = cart->next;
        count++;
    }
    cout << "Total: " << total << " PHP " << endl;
}

void Checkout(Node **cart)
{
    if (*cart == NULL)
    {
        cout << "Cart is empty." << endl;
        return;
    }

    cout << "Thank you for shopping!" << endl;

    Node *temp;
    while (*cart != NULL)
    {
        temp = *cart;
        *cart = (*cart)->next;
        delete temp;
    }
}
void Remove_Item(Node **cart)
{
    if (*cart == NULL)
    {
        cout << "Cart is empty." << endl;
        return;
    }

    int choice;
    cout << "Enter the item number you want to remove: ";
    cin >> choice;

    if (choice < 1)
    {
        cout << "Invalid choice." << endl;
        return;
    }

    Node *current = *cart;
    Node *previous = NULL;

    int count = 1;
    while (current != NULL && count < choice)
    {
        previous = current;
        current = current->next;
        count++;
    }

    if (current == NULL)
    {
        cout << "Invalid choice." << endl;
        return;
    }

    if (previous == NULL)
    {
        *cart = current->next;
    }
    else
    {
        previous->next = current->next;
    }

    cout << current->data.name << " removed from cart." << endl;
    delete current;
}

int main()
{

    int productCount = 5;
    Product productList[productCount] = {
        {"iPhone 13 Pro Max (128 GB)", 69990},
        {"Samsung S23 (128 GB)", 53990},
        {"Xiaomi 13 Ultra (128 GB)", 43000},
        {"Samsung Z Fold (256 GB)", 98990},
        {"iPhone 14 Pro Max (128 GB)", 77990}};

    Node *cart = NULL;

    int choice;

    cout << "---------------------------------------------------------------------------------------------------------------" << endl;
    cout << R"(
 ________  _____ ______   ________  ________  _________  ________  ___  ___  ________  ________   _______
|\   ____\|\   _ \  _   \|\   __  \|\   __  \|\___   ___\\   __  \|\  \|\  \|\   __  \|\   ___  \|\  ___ \
\ \  \___|\ \  \\\__\ \  \ \  \|\  \ \  \|\  \|___ \  \_\ \  \|\  \ \  \\\  \ \  \|\  \ \  \\ \  \ \   __/|
 \ \_____  \ \  \\|__| \  \ \   __  \ \   _  _\   \ \  \ \ \   ____\ \   __  \ \  \\\  \ \  \\ \  \ \  \_|/__
  \|____|\  \ \  \    \ \  \ \  \ \  \ \  \\  \|   \ \  \ \ \  \___|\ \  \ \  \ \  \\\  \ \  \\ \  \ \  \_|\ \
    ____\_\  \ \__\    \ \__\ \__\ \__\ \__\\ _\    \ \__\ \ \__\    \ \__\ \__\ \_______\ \__\\ \__\ \_______\
   |\_________\|__|     \|__|\|__|\|__|\|__|\|__|    \|__|  \|__|     \|__|\|__|\|_______|\|__| \|__|\|_______|
   \|_________|

)" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < productCount; i++)
    {
        cout << i + 1 << ". " << productList[i].name << " - " << productList[i].price << " PHP " << endl;
    }
    do
    {
        cout << "--------------------------------------------------------------------------------------------------------------- " << endl;
        cout << "\t\t\t\t\t\t\tMENU" << endl;
        cout << "--------------------------------------------------------------------------------------------------------------- " << endl;
        cout << "1. Add to cart" << endl;
        cout << "2. View cart" << endl;
        cout << "3. Delete an item in the cart" << endl;
        cout << "4. Checkout " << endl;
        cout << "5. Exit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            for (;;)
            {
                Add_To_Cart(&cart, productList, productCount);
                cout << "Enter 1 to add another product or 0 to go back to the menu: ";
                cin >> choice;
                if (choice != 0 && choice != 1)
                {
                    cout << "Invalid input." << endl;
                    cin.clear();
                    break;
                }
                if (choice == 0)
                {
                    break;
                }
            }
            break;
        case 2:
            View_Cart(cart);
            break;
        case 3:
            Remove_Item(&cart);
            break;
        case 4:
            Checkout(&cart);
            break;
        case 5:
            cout << R"(
___  ___  ________   ___  _________                           _________  _______   ________  _____ ______
|\  \|\  \|\   ___  \|\  \|\___   ___\                        |\___   ___\\  ___ \ |\   __  \|\   _ \  _   \
\ \  \\\  \ \  \\ \  \ \  \|___ \  \_|      ____________      \|___ \  \_\ \   __/|\ \  \|\  \ \  \\\__\ \  \
 \ \  \\\  \ \  \\ \  \ \  \   \ \  \      |\____________\         \ \  \ \ \  \_|/_\ \   __  \ \  \\|__| \  \
  \ \  \\\  \ \  \\ \  \ \  \   \ \  \     \|____________|          \ \  \ \ \  \_|\ \ \  \ \  \ \  \    \ \  \
   \ \_______\ \__\\ \__\ \__\   \ \__\                              \ \__\ \ \_______\ \__\ \__\ \__\    \ \__\
    \|_______|\|__| \|__|\|__|    \|__|                               \|__|  \|_______|\|__|\|__|\|__|     \|__|

            )" << endl;
            cout << "\t\t\t\t\t\tBesagas, John Paul" << endl;
            cout << "\t\t\t\t\t\tLacap, Xynil" << endl;
            cout << "\t\t\t\t\t\tGarcia, Aaron" << endl;
            cout << "\t\t\t\t\t\tLechuga, Jienne" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    system("cls"); // clears the screen
    int s, choise, code, flag; // s for size of array/inventory // flag to check if shoe with code is available or not
    do // do while cause we need to enter atleats once
    {
        cout << "Enter the size of the iventory :: ";
        cin >> s;
    } while (s <= 0); // size of inventory cannot be 0 or negative

    int items[s]; // array that stores codes
    int size[s]; // array that stores the size
    int quantity[s]; // array thats stores the quantity
    int price[s]; // array that stores the price

    for (int i = 0; i < s; i++) // initialize everything to 0 so no random value
    {
        items[i] = 0;
        size[i] = 0;
        quantity[i] = 0;
        price[i] = 0;
    }

    while (true) // infinte loop
    { 
        // Menu displayed to user
        cout << "----------------------------------------------------------------------" << endl;
        cout << "[0] Exit the program " << endl;
        cout << "[1] Add a new item / shoe to the inventory" << endl;
        cout << "[2] Remove an item from / shoe the inventory" << endl;
        cout << "[3] Update the quantity of an existing item " << endl;
        cout << "[4] Update the price of an existing item" << endl;
        cout << "[5] Display the current inventory and the total value of the inventory" << endl;
        cout << "----------------------------------------------------------------------" << endl;
        cout << "Enter :: ";
        cin >> choise;

        if (choise == 0) // press 0 to break the loop
            break;
        else if (choise == 1)
        {
            for (int i = 0; i < s; i++) // we first check if we have space is inventory or not
            {
                if (items[i] == 0) // if 0 is found that means that spot is empty in our inventory and we can put new item there
                {
                    cout << "Enter the code of the Shoe / product :: "; // enters data for shoe
                    cin >> items[i];
                    cout << "Enter the size of the Shoe / product :: ";
                    cin >> size[i];
                    cout << "Enter the quantity of the Shoe / product :: ";
                    cin >> quantity[i];
                    cout << "Enter the price of the Shoe / product :: ";
                    cin >> price[i];
                    cout << "Product successfully added !" << endl;
                    flag = 1; // flag = 1 means the space is found
                    break; // breaks the loop
                }
                else
                    flag = 0; // flag = 0 means there is no space found yet
            }
            if (flag == 0) // if flag is 0 even after loop then there is no more space in inventory
                cout << "***There is no space in inventory***" << endl;
        }
        else if (choise == 2)
        {
            cout << "Enter the code of the Shoe / product :: ";
            cin >> code; // entering code of the item we wnat to remove
            for (int i = 0; i < s; i++)
            {
                if (code == items[i]) // if the code exists in our database, it will be removed
                {
                    items[i] = 0;
                    size[i] = 0;
                    quantity[i] = 0;
                    price[i] = 0;
                    cout << "Product successfully Removed !" << endl;
                    flag = 1; // means show is found
                    break;
                }
                else
                    flag = 0; // show isnt found yet
            }
            if (flag == 0) // still 0 means there is no shoe
                cout << " *****Item with code " << code << " cannot be found*****" << endl;
        }
        else if (choise == 3)
        {
            cout << "Enter the code of the Shoe / product :: ";
            cin >> code;
            for (int i = 0; i < s; i++)
            {
                if (code == items[i])
                {
                    cout << "Enter the new quantity of the shoe " << items[i] << " :: ";
                    cin >> quantity[i];
                    cout << "quantity successfully changed !" << endl;
                    flag = 1;
                    break;
                }
                else
                    flag = 0;
            }
            if (flag == 0)
                cout << " *****Item with code " << code << " cannot be found*****" << endl;
        }
        else if (choise == 4)
        {
            cout << "Enter the code of the Shoe / product :: ";
            cin >> code;
            for (int i = 0; i < s; i++)
            {
                if (code == items[i])
                {
                    cout << "Enter the new price of the shoe " << items[i] << " :: ";
                    cin >> price[i];
                    cout << "Price successfully changed !" << endl;
                    flag = 1;
                    break;
                }
                else
                    flag = 0;
            }
            if (flag == 0)
                cout << " *****Item with code " << code << " cannot be found*****" << endl;
        }
        else if (choise == 5)
        {
            cout << "Shoe's Code\tSize \t     Quantity \t      Price (Rs)" << endl;
            for (int i = 0; i < s; i++)
                cout << items[i] << "\t\t" << size[i] << "\t\t" << quantity[i] << "\t\t" << price[i] << endl;
        }
        else
        {
            cout << "-------------------" << endl;
            cout << "Incorrect Input :( " << endl;
            cout << "-------------------" << endl;
        }
    }
    cout << "*** GoodBai ***" << endl;
    return 0;
}

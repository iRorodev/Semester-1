// Fizza Ali 22i8787 Question 3

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int choise, amount, discount, price;
    cout << "######-> Welcome to FASTcafe <-#####" << endl;
    cout << "please select the option" << endl;
    cout << "[0] Takeaway " << endl;
    cout << "[1] Dine in " << endl;
    cout << "[2] Delivery" << endl;
    cout << "Selected category: ";
    cin >> choise;

    if (choise == 0)
    {
        cout << "######-> Welcome to Takeaway menu <-#####" << endl;
        cout << "[0] Burger " << endl;
        cout << "[1] Paratha roll " << endl;
        cout << "[2] Pakistani food" << endl;
        cout << "Selected category: ";
        cin >> choise;
        if (choise == 0)
        {
            cout << "Select Burger type:" << endl;
            cout << "[1] PF_Ragra (Rs: 299)" << endl;
            cout << "[2] OOP_Chatkhara (Rs5: 499)" << endl;
            cout << "[3] Hot_DS (Rs: 599)" << endl;
            cout << "[4] Redhot_Algo (Rs: 699)" << endl;
            cout << "Selected: ";
            cin >> choise;
            cout << "How many would you like: ";
            cin >> amount;

            if (choise == 1)
                price = 299 * amount;
            else if (choise == 2)
                price = 499 * amount;
            else if (choise == 3)
                price = 599 * amount;
            else if (choise == 4)
                price = 699 * amount;
            else
            {
                cout << "Incorrect Choise" << endl;
                return 0;
            }
        }
        else if (choise == 1)
        {
            cout << "Select paratha roll type:" << endl;
            cout << "[1] FAST_MalaiParatha (Rs: 299)" << endl;
            cout << "[2] CS_ChesseParatha (Rs: 399)" << endl;
            cout << "[3] DS_DhamakaParatha (Rs: 599)" << endl;
            cout << "[4] AI_DoubleTroubleParatha (Rs: 699)" << endl;
            cout << "[5] CY_SecurityTightParatha (Rs: 499)" << endl;
            cout << "[6] SE_MeethaParatha (Rs: 199)" << endl;
            cout << "[7] EE_ParhakuParatha (Rs: 799)" << endl;
            cout << "Selected: ";
            cin >> choise;
            cout << "How many would you like: ";
            cin >> amount;

            if (choise == 1)
                price = 299 * amount;
            else if (choise == 2)
                price = 399 * amount;
            else if (choise == 3)
                price = 599 * amount;
            else if (choise == 4)
                price = 699 * amount;
            else if (choise == 5)
                price = 499 * amount;
            else if (choise == 6)
                price = 199 * amount;
            else if (choise == 7)
                price = 799 * amount;
            else
            {
                cout << "Incorrect Choise" << endl;
                return 0;
            }
        }
        else if (choise == 2)
        {
            cout << "Select Pakistani food type:" << endl;
            cout << "[1] pointerHaleem (Rs: 199)" << endl;
            cout << "[2] loopNihaari (Rs: 199)" << endl;
            cout << "[3] arrayDaal (Rs: 149)" << endl;
            cout << "[4] recursiveGhosht (Rs: 399)" << endl;
            cout << "Selected: ";
            cin >> choise;
            cout << "How many would you like: ";
            cin >> amount;
            if (choise == 1)
                price = 199 * amount;
            else if (choise == 2)
                price = 199 * amount;
            else if (choise == 3)
                price = 149 * amount;
            else if (choise == 4)
                price = 399 * amount;
            else
            {
                cout << "Incorrect Choise" << endl;
                return 0;
            }
        }
        else
        {
            cout << "Incorrect Choise" << endl;
            return 0;
        }
    }
    else if (choise == 1)
    {
        cout << "######-> Welcome to Dine in menu <-#####" << endl;
        cout << "[0] Burger " << endl;
        cout << "[1] Paratha roll " << endl;
        cout << "[2] Pakistani food" << endl;
        cout << "Selected category: ";
        cin >> choise;
        if (choise == 0)
        {
            cout << "Select Burger type:" << endl;
            cout << "[1] PF_Ragra (Rs: 299)" << endl;
            cout << "[2] OOP_Chatkhara (Rs5: 499)" << endl;
            cout << "[3] Hot_DS (Rs: 599)" << endl;
            cout << "[4] Redhot_Algo (Rs: 699)" << endl;
            cout << "Selected: ";
            cin >> choise;
            cout << "How many would you like: ";
            cin >> amount;

            if (choise == 1)
                price = 299 * amount;
            else if (choise == 2)
                price = 499 * amount;
            else if (choise == 3)
                price = 599 * amount;
            else if (choise == 4)
                price = 699 * amount;
            else
            {
                cout << "Incorrect Choise" << endl;
                return 0;
            }
        }
        else if (choise == 1)
        {
            cout << "Select paratha roll type:" << endl;
            cout << "[1] FAST_MalaiParatha (Rs: 299)" << endl;
            cout << "[2] CS_ChesseParatha (Rs: 399)" << endl;
            cout << "[3] DS_DhamakaParatha (Rs: 599)" << endl;
            cout << "[4] AI_DoubleTroubleParatha (Rs: 699)" << endl;
            cout << "[5] CY_SecurityTightParatha (Rs: 499)" << endl;
            cout << "[6] SE_MeethaParatha (Rs: 199)" << endl;
            cout << "[7] EE_ParhakuParatha (Rs: 799)" << endl;
            cout << "Selected: ";
            cin >> choise;
            cout << "How many would you like: ";
            cin >> amount;

            if (choise == 1)
                price = 299 * amount;
            else if (choise == 2)
                price = 399 * amount;
            else if (choise == 3)
                price = 599 * amount;
            else if (choise == 4)
                price = 699 * amount;
            else if (choise == 5)
                price = 499 * amount;
            else if (choise == 6)
                price = 199 * amount;
            else if (choise == 7)
                price = 799 * amount;
            else
            {
                cout << "Incorrect Choise" << endl;
                return 0;
            }
        }
        else if (choise == 2)
        {
            cout << "Select Pakistani food type:" << endl;
            cout << "[1] pointerHaleem (Rs: 199)" << endl;
            cout << "[2] loopNihaari (Rs: 199)" << endl;
            cout << "[3] arrayDaal (Rs: 149)" << endl;
            cout << "[4] recursiveGhosht (Rs: 399)" << endl;
            cout << "Selected: ";
            cin >> choise;
            cout << "How many would you like: ";
            cin >> amount;
            if (choise == 1)
                price = 199 * amount;
            else if (choise == 2)
                price = 199 * amount;
            else if (choise == 3)
                price = 149 * amount;
            else if (choise == 4)
                price = 399 * amount;
            else
            {
                cout << "Incorrect Choise" << endl;
                return 0;
            }
        }
        else
        {
            cout << "Incorrect Choise" << endl;
            return 0;
        }
    }
    else if (choise == 2)
    {
        cout << "######-> Welcome to Delivery menu <-#####" << endl;
        cout << "[0] Burger " << endl;
        cout << "[1] Paratha roll " << endl;
        cout << "[2] Pakistani food" << endl;
        cout << "Selected category: ";
        cin >> choise;
        if (choise == 0)
        {
            cout << "Select Burger type:" << endl;
            cout << "[1] PF_Ragra (Rs: 299)" << endl;
            cout << "[2] OOP_Chatkhara (Rs5: 499)" << endl;
            cout << "[3] Hot_DS (Rs: 599)" << endl;
            cout << "[4] Redhot_Algo (Rs: 699)" << endl;
            cout << "Selected: ";
            cin >> choise;
            cout << "How many would you like: ";
            cin >> amount;

            if (choise == 1)
                price = 299 * amount;
            else if (choise == 2)
                price = 499 * amount;
            else if (choise == 3)
                price = 599 * amount;
            else if (choise == 4)
                price = 699 * amount;
            else
            {
                cout << "Incorrect Choise" << endl;
                return 0;
            }
        }
        else if (choise == 1)
        {
            cout << "Select paratha roll type:" << endl;
            cout << "[1] FAST_MalaiParatha (Rs: 299)" << endl;
            cout << "[2] CS_ChesseParatha (Rs: 399)" << endl;
            cout << "[3] DS_DhamakaParatha (Rs: 599)" << endl;
            cout << "[4] AI_DoubleTroubleParatha (Rs: 699)" << endl;
            cout << "[5] CY_SecurityTightParatha (Rs: 499)" << endl;
            cout << "[6] SE_MeethaParatha (Rs: 199)" << endl;
            cout << "[7] EE_ParhakuParatha (Rs: 799)" << endl;
            cout << "Selected: ";
            cin >> choise;
            cout << "How many would you like: ";
            cin >> amount;

            if (choise == 1)
                price = 299 * amount;
            else if (choise == 2)
                price = 399 * amount;
            else if (choise == 3)
                price = 599 * amount;
            else if (choise == 4)
                price = 699 * amount;
            else if (choise == 5)
                price = 499 * amount;
            else if (choise == 6)
                price = 199 * amount;
            else if (choise == 7)
                price = 799 * amount;
            else
            {
                cout << "Incorrect Choise" << endl;
                return 0;
            }
        }
        else if (choise == 2)
        {
            cout << "Select Pakistani food type:" << endl;
            cout << "[1] pointerHaleem (Rs: 199)" << endl;
            cout << "[2] loopNihaari (Rs: 199)" << endl;
            cout << "[3] arrayDaal (Rs: 149)" << endl;
            cout << "[4] recursiveGhosht (Rs: 399)" << endl;
            cout << "Selected: ";
            cin >> choise;
            cout << "How many would you like: ";
            cin >> amount;
            if (choise == 1)
                price = 199 * amount;
            else if (choise == 2)
                price = 199 * amount;
            else if (choise == 3)
                price = 149 * amount;
            else if (choise == 4)
                price = 399 * amount;
            else
            {
                cout << "Incorrect Choise" << endl;
                return 0;
            }
        }
        else
        {
            cout << "Incorrect Choise" << endl;
            return 0;
        }
    }
    else
    {
        cout << "Incorrect Choise" << endl;
        return 0;
    }

    if (price >= 0 && price < 1000)
        discount = price * 0.05;
    else if (price >= 1000 && price < 1500)
        discount = price * 0.10;
    else if (price >= 1500 && price < 2000)
        discount = price * 0.15;
    else if (price >= 2000 && price < 2500)
        discount = price * 0.20;
    else if (price >= 2500 && price < 3000)
        discount = price * 0.30;
    else if (price >= 3000)
        discount = price * 0.50;

    cout << "---------------------------" << endl;
    cout << "Your bill is: Rs " << price << " /-" << endl;
    cout << "The discount is: Rs " << discount << "/-" << endl;
    cout << "Total Payable: Rs" << price - discount << "/-" << endl;
    return 0;
}
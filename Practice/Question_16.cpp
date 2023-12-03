// Fizza Ali 22i8787 Question 6

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int choise;                 // where only one thing is required
    int cheese_one, cheese_two; // types of cheese
    int cheeseamount;           // amout of cheese,
    int a, b, c;                // ingrediands used for freshn it up // and for sauces :D
    // typing ingrident_one ... same thing is way too long and i dont wana do that
    int freshnitupamount; // amount of ingrediants
    float bill;
    cout << "------------------------------------" << endl;
    cout << "*** Welcome to FAST BURGER SHOP *** " << endl;
    cout << "------------------------------------" << endl;

    cout << "First add a bun to your burger:" << endl;
    cout << "[1] Potato Bun (0.72$)" << endl;
    cout << "[2] Ciabatta Bun (0.72$)" << endl;
    cout << "[3] Brioche Bun (0.72$)" << endl;
    cout << "Please select the type of bun you want :: ";
    cin >> choise;
    // dont touch the brackets "{}". idk where is what and commenting didnt help
    switch (choise)
    {
    case 1:
    case 2:
    case 3:
    {
        cout << "***Bun Successfully added***" << endl;
        bill += 0.72;

        cout << "Enter the amount of cheese slices you want (0 || 1 || 2) :: ";
        cin >> cheeseamount;

        switch (cheeseamount)
        {
        case 0:
        {
            cout << "You have decided to skip adding cheese" << endl;
            break; // break for case 0
        }          // case 0
        case 1:
        case 2:
        {
            cout << "----------------------------------------" << endl;
            cout << "Now its time to add cheese: " << endl;
            cout << "[1] Parmesan" << endl;
            cout << "[2] Cheddar" << endl;
            cout << "[3] Mozzarella" << endl;
            cout << "[4] blue cheese" << endl;
            cout << "Please select the type of cheese you want :: ";

            if (cheeseamount == 1)
            {
                cin >> cheese_one;
                if (cheese_one == 1 || cheese_one == 2 || cheese_one == 3 || cheese_one == 4)
                {
                    cout << "*** Cheese Successfully added ***" << endl;
                    bill += 0.5;
                } // for cheese_one
                else
                {
                    cout << "Incorrect Cheese Type" << endl;
                    return 0;
                } // else
            }     // for cheezeamount == 1
            else
            {
                cin >> cheese_one >> cheese_two;
                if (cheese_one == 1 || cheese_one == 2 || cheese_one == 3 || cheese_one == 4)
                {
                    if (cheese_two == 1 || cheese_two == 2 || cheese_two == 3 || cheese_two == 4)
                    {
                        cout << "*** Cheese Successfully added ***" << endl;
                        bill += 2 * 0.50;
                    } // for cheese_two ==1
                    else
                    {
                        cout << "Incorrect Cheese Type" << endl;
                        return 0;
                    } // else
                }     // for cheese_one
                else
                {
                    cout << "Incorrect Cheese Type" << endl;
                    return 0;
                } // else
            }     // for else

            break; // break for case 1 case 2
        }          // case 1 case 2
        default:   // for switch cheezeamount
        {
            cout << "Incorrect Cheese amount" << endl;
            return 0;
        } // defauly for swicth cheeseamount

        }      // switch cheeseamount
        break; // break for case 1 2 3
    }          // case 1 2 3 for choise
    default:   // default for switch choise
    {
        cout << "Incorrect BunType" << endl;
        return 0;
    } // default for swicth choise
    } // switch choise

    cout << "----------------------------------" << endl;
    cout << "Now its time for turn up the taste" << endl;
    cout << "[1] egg" << endl;
    cout << "[2] Onions" << endl;
    cout << "[3] Bread Crumbs" << endl;
    cout << "[4] Garlic" << endl;
    cout << "Please Select :: ";
    cin >> choise;

    switch (choise)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    {
        cout << "***Successfully added***" << endl;
        bill += 1.2;
        cout << "How many type of Ingrediants would u like? ( 0 || 1 || 2 || 3 ) :: ";
        cin >> freshnitupamount;

        switch (freshnitupamount)
        {
        case 0:
        {
            cout << "You have decided to skip the freshn it up phase " << endl;
            break;
        }
        case 1:
        case 2:
        case 3:
        {
            cout << "Now its time for fresh'N it up" << endl;
            cout << "[1] Chillies " << endl;
            cout << "[2] Pickles" << endl;
            cout << "[3] Condiments" << endl;
            cout << "[4] Lettuce" << endl;
            cout << "[5] Onions" << endl;
            if (freshnitupamount == 1)
            {
                cin >> a;
                if (a == 1 || a == 2 || a == 3 || a == 4 || a == 5)
                {
                    cout << "***Successfully added***" << endl;
                    bill += 0.2;
                }
                else
                    cout << "Enter a correct Option" << endl;
                break;
            }
            else if (freshnitupamount == 2)
            {
                cin >> a >> b;
                if ((a == 1 || a == 2 || a == 3 || a == 4 || a == 5) && (b == 1 || b == 2 || b == 3 || b == 4 || b == 5))
                {
                    cout << "***Successfully added***" << endl;
                    bill += 0.4;
                }
                else
                    cout << "Enter a correct Option" << endl;
                break;
            }
            else
            {
                cin >> a >> b >> c;
                if ((a == 1 || a == 2 || a == 3 || a == 4 || a == 5) && (b == 1 || b == 2 || b == 3 || b == 4 || b == 5) && (c == 1 || c == 2 || c == 3 || c == 4 || c == 5))
                {
                    cout << "***Successfully added***" << endl;
                    bill += 0.6;
                }
                else
                    cout << "Enter a correct Option" << endl;
                break;
            }
            break;
        }
        default:
        {
            cout << "Incorrect amount" << endl;
            return 0;
        }      // default 2 lines above
        }      // switch amount cheese
        break; // case 1 2 3 4
    }          // case 1 2 3 4
    default:
    {
        cout << "Incorrect Option" << endl;
        return 0;
    } // default 2 lines above
    } // switch choise

    cout << "Time to get saucy " << endl;
    cout << "[0] skip" << endl;
    cout << "[1] Ketchup" << endl;
    cout << "[2] Mustard" << endl;
    cout << "[3] Chilli Sauce" << endl;
    cout << "[4] Special Sauce" << endl;
    cout << "[5] Mayonese" << endl;
    cout << "Please Select 3 types of Sauces" << endl;
    cin >> a >> b >> c;

    switch (choise)
    {
    case 0:
    {
        cout << "You have decided to skip the sauce phase " << endl;
        break;
    }
    case 1:
    case 2:
    case 3:
    case 4:
    {
        if ((a == 1 || a == 2 || a == 3 || a == 4 || a == 5) && (b == 1 || b == 2 || b == 3 || b == 4 || b == 5) && (c == 1 || c == 2 || c == 3 || c == 4 || c == 5))
        {
            cout << "***Successfully added***" << endl;
            bill += 0.9;
        }
        else
            cout << "Enter a correct Option" << endl;
        break;
    } // case 1 2 3 4
    default:
    {
        cout << "Incorrect Input" << endl;
        return 0;
    } // default above

    } // switch choise

    cout << "------------------------------------" << endl;
    cout << "your order has been placed" << endl;
    cout << "Your bill is :: " << bill << " $" << endl;
    return 0;
} // main
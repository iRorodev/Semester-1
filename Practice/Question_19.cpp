// Muhammad Rohail  22i8776  SE-A

// Control Software for your vehicle (Switch)

#include <iostream>
using namespace std;

void getswicthstatus();   // used to take inout of all switches
void gethandle();         // used to take input of inside and outside handle of both doors
void getgearshift();      // used tp take gear
void validate();          // validates all the handles and dashboard switches
void validate(char gear); // validates the gear

int childlock, masterlock, dashleft, dashright;
char gear;
int linside, loutside, rinside, routside;
int check = 1; // if everything is okay check == 1 else check will be 0

int main()
{
   getswicthstatus();
   validate();

   if (check == 0) // smth wrong input and check will be 0
      cout << "\n\nPlease try again by entering correct data" << endl;
   else
   {
      switch (masterlock)
      {
      case 0:
      {
         // no door can open if master lock is switched off
         cout << "\n\nNo door will open becasue masterlock in not active" << endl;
         break;
      }
      case 1:
      {
         switch (childlock)
         {
         case 0: // chilock off so door can also be opend from inside!
         {
            switch (gear)  // door can only open if gear is P
            {
            case 'P':
            {
               if (linside == 1 || loutside == 1 || dashleft == 1 && rinside == 1 || routside == 1 || dashright == 1)
                  cout << "\n\nBoth doors will open" << endl;
               else if (linside == 1 || loutside == 1 || dashleft == 1)
                  cout << "\n\nLeft door will open" << endl;
               else if (rinside == 1 || routside == 1 || dashright == 1)
                  cout << "\n\nRight door open" << endl;
               else
                  cout << "\n\nNo door will open" << endl;
               break;
            }
            }
            break;
         }
         case 1: // childlock is on so door cant be opened from inside
         {
            switch (gear)
            {
            case 'P': //doors can only open gear is P
            {
               if (loutside == 1 || dashleft == 1 && routside == 1 || dashright == 1)
                  cout << "\n\nBoth doors will open" << endl;
               else if (loutside == 1 || dashleft == 1)
                  cout << "\n\nLeft door will open" << endl;
               else if (routside == 1 || dashright == 1)
                  cout << "\n\nRight door open" << endl;
               else
                  cout << "\n\nNo door will open" << endl;
               break;
            }
            }
         }
         }
      }
      }
   }
   return 0;
}
void getswicthstatus()
{
   cout << "\nEnter dashboard switches for left door, right door, childlock and then masterlock O for OFF 1 for ON" << endl;
   cin >> dashleft >> dashright >> childlock >> masterlock;
   gethandle();
}
void gethandle()
{
   cout << "\nEnter Handles for left door (inside/outside)" << endl;
   cin >> linside >> loutside;
   cout << "\nEnter Handles for Right door (inside/outside)" << endl;
   cin >> rinside >> routside;
   getgearshift();
}
void getgearshift()
{
   cout << "Enter Gear status (one of P N D 1 2 3 R)" << endl;
   cin >> gear;
   validate(gear);
}
void validate()
{
   if ((dashleft != 1) && (dashleft != 0))
   {
      check = 0;
      cout << "leftdoor dash is invalid" << endl;
   }
   if ((dashright != 1) && (dashright != 0))
   {
      check = 0;
      cout << "rightdoor dash is invalid" << endl;
   }
   if ((childlock != 1) && (childlock != 0))
   {
      check = 0;
      cout << "Chilock is invalid" << endl;
      if ((masterlock != 1) && (masterlock != 0))
      {
         check = 0;
         cout << "Masterlock is invalid" << endl;
      }
      if ((linside != 1) && (linside != 0))
      {
         check = 0;
         cout << "left door inside input is invalid" << endl;
      }
      if ((loutside != 1) && (loutside != 0))
      {
         check = 0;
         cout << "left door outside input is invalid" << endl;
      }
      if ((rinside != 1) && (rinside != 0))
      {
         check = 0;
         cout << "right door inside input is invalid" << endl;
      }
      if ((routside != 1) && (routside != 0))
      {
         check = 0;
         cout << "right door outside input is invalid" << endl;
      }
   }
}
void validate(char gear)
{
   if ((gear != 'P') && (gear != 'N') && (gear != 'D') && (gear != '1') && (gear != '2') && (gear != '3') && (gear != 'R'))
   {
      cout << "Invalid Gear input" << endl;
      getgearshift();
   }
}
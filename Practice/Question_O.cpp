#include<iostream>
using namespace std;
int day, month, year;

void magic()
{
    if ( day*month == year )
        cout<<" Date is Magic :)"<<endl;
    else
        cout<<" Date is not magic :("<<endl;  
}
int main()
{
    cout<<"Enter the date: "<<endl;
    cout<<"Please enter two digit year!"<<endl;
    cin>>day>>month>>year;

    if (day >= 0 && day <= 31)
    {
        if (month >=0 && month <=12)
        {
            if( year - 100 > 0)
            {
                cout<<"You have entered wrong year"<<endl;
                return 0;
            }
            else 
            { 
                magic();
            }
            
        }
    }
    return 0;
}
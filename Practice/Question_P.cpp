#include<iostream>
using namespace std;
void minutes( int sec );
void hours( int sec );
void day(int sec );
int main()
{
    int sec, min, hour, day;
    cout<<"Enter the amount of seconds"<<endl;
    cin>>sec;
    
    if ( sec >= 60 && sec < 3600 )
    {
        minutes( sec );
    }
    else if ( sec >= 3600 && sec < 86400 )
    {
        hours (sec);
    }
    else if ( sec >= 86400 )
    {
        hours (sec);  
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
    return 0;
}
void minutes( int sec )
{
    int min = sec / 60;
    sec = sec % 60;
    cout<<min<<" minutes "<<sec<<" seconds ";

}
void hours( int sec )
{
    int hour = sec / 3600;
    sec = sec % 3600;
    int min = sec / 60;
    sec = sec % 60;
    cout<<hour<<" hours "<<min<<" minutes "<<sec<<" seconds ";

}
void days(int sec )
{
    int day = sec / 86400;
    sec = sec % 86400;
    int hour = sec / 3600;
    sec = sec % 3600;
    int min = sec / 60;
    sec = sec % 60;
    cout<<day<<" days "<<hour<<" hours "<<min<<" minutes "<<sec<<" seconds ";
}
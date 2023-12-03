#include<iostream>
#include<string.h>
using namespace std;

int store1 , store2 , store3, store4, store5;

void input();
void conversion();
void validate();
int main()
{
input();
validate();
conversion();
return 0;
}

void input()
{
cout<<"Enter sales of store 1: ";
cin>>store1; 
cout<<"Enter sales of store 2: ";
cin>>store2; 
cout<<"Enter sales of store 3: ";
cin>>store3; 
cout<<"Enter sales of store 4: ";
cin>>store4;
cout<<"Enter sales of store 5: ";
cin>>store5;
}
void conversion()
{
cout<<"each x = 50 "<<endl;
cout<<endl;
cout<<"Store 1 : ";
int i;
for ( i = store1/50 ; i != 0 ; i-- )
cout<<"x";
cout<<endl;
cout<<"Store 2 : ";
for ( i = store2/50 ; i != 0 ; i-- )
cout<<"x";
cout<<endl;
cout<<"Store 3 : ";
for ( i = store3/50 ; i != 0 ; i-- )
cout<<"x";
cout<<endl;
cout<<"Store 4 : ";
for ( i = store4/50 ; i != 0 ; i-- )
cout<<"x";
cout<<endl;
cout<<"Store 5 : ";
for ( i = store5/50 ; i != 0 ; i-- )
cout<<"x";
cout<<endl;
}
void validate()
{
if ( store1 < 0 || store2 < 0 || store3 < 0 || store4 < 0 || store5 < 0 )
{
cout<<"negative sales? pls input all sales again"<<endl;
input();
}
}



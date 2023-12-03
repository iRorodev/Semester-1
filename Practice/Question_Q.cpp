#include<iostream>
using namespace std;

float add( float x,float y);
float sub( float x,float y);
float mul( float x,float y);
float div( float x,float y);
float mod( int x,int y);

int main()
{
    char A;
    float a,b;
    cout<<"Enter character:"<<endl;
    cin>>A;

    cout<<"ENter two numbers"<<endl;
    cin>>a>>b;

    switch (A)
    {
        case '+':
        cout<<"The Result is: "<<add(a,b);
        break;
        case '-':
        cout<<"The Result is: "<<sub(a,b);
        break;
        case '*':
        cout<<"The Result is: "<<mul(a,b);
        break;
        case '/':
        cout<<"The Result is: "<<div(a,b);
        break;
        case '%':
        cout<<mod(a,b);
        break;
        defaul:
        cout<<"Invalid operator!";
        break;
    }
    return 0;
}
float add( float x,float y)
{
    return x+y;
}
float sub( float x,float y)
{
    return x-y;
}
float mul( float x,float y)
{
    return x*y;
}
float div( float x,float y)
{
    return x/y;
}
float mod( int x,int y)
{
    cout<<"some reason it doesnt allow me to mod two floating points so enter two integers again :("<<endl;
    cin>>x>>y;
    return x%y;
}
#include <bits/stdc++.h>
using namespace std;

float sum (float x , float y);
float sub (float x , float y);
float mul( float x , float y);
float divide ( float x, float y);
float avg (float x , float y);

int main()
{
  float a, b;
  cout<<"\n Enter any two numbers :";
  cin>> a >> b;

  cout<<sum(a,b)<<endl;
  cout<<sub(a,b)<<endl;
  cout<<mul(a,b)<<endl;
  cout<<divide(a,b)<<endl;
  cout<<avg(a,b)<<endl;

  return 0;
}

float sum (float x , float y)
{
   return x+y;
}
float sub (float x , float y)
{
  return x-y;
}
float mul( float x , float y)
{
  return x*y;
}
float divide ( float x, float y)
{
  return x/y;
}
float avg (float x , float y)
{
  return (x +y)/2 ;
}

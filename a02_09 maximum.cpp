//functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.

#include<iostream>
#include<conio.h>
using namespace std;

float maximum(float, float);
int maximum(int, int);
int main()
{
    int a, b;
    float c, d;
    cout<<"Enter two integer numbers.\n";
    cin>>a>>b;
    cout<<"Enter any two numbers.\n";
    cin>>c>>d;
    cout<<"The maximum between two integer numbers is "<<maximum(a,b)<<"\nAnd the maximum between two decimal numbers is "<<maximum(c,d);
    getch();
    return 0;
}


int maximum(int a, int b)
{
    if(a>b)
        return (a);
    else
        return (b);
}

float maximum(float a, float b)
{
    if(a>b)
        return (a);
    else
        return (b);
}

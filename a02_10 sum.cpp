//functions using function overloading to add two numbers having different data types.

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float sum(float, float);
int sum(int, int);
int main()
{
    int num1, num2;
    cout<<"Enter two integers.\n";
    cin>>num1 >>num2;
    cout<<"The sum of "<< num1 <<" and "<<num2 <<" is "<<sum(num1,num2)<<endl<<endl;

    float num3, num4;
    cout<<"Enter two real numbers.\n";
    cin>>num3 >>num4;
    cout<<"The sum of "<< num3 <<" and "<<num4 <<" is "<<sum(num3,num4)<<endl;

    getch();
    return 0;
}


int sum(int a, int b)
{
    return (a+b);
}

float sum(float a, float b)
{
    return (a+b);
}

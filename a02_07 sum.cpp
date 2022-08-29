//function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>
#include<conio.h>
using namespace std;

int add(int, int, int=0);
int main()
{
    int num1, num2, num3, sum;
    cout<<"Enter two numbers.\n";
    cin>>num1>>num2;
    sum=add(num1, num2);
    cout<<"sum of "<<num1<<" and "<<num2<<" is "<<sum<<endl;
    cout<<"Enter three numbers.\n";
    cin>>num1>>num2>>num3;
    sum=add(num1, num2, num3);
    cout<<"sum of "<<num1<<" , "<<num2<<" and "<<num3 << " is "<<sum;
    getch();
    return 0;
}


int add(int x, int y, int z)
{
    int a;
    a=x+y+z;
    return a;
}

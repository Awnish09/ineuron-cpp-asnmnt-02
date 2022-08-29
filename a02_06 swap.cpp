//function to swap data of two int variables using call by reference

#include<iostream>
#include<conio.h>
using namespace std;

void swap(int &, int &);
int main()
{
    int num1, num2;
    cout<<"Enter two numbers.\n";
    cin>>num1>>num2;
    swap(num1,num2);
    cout<<"num1 = "<<num1<<"\nnum2 = "<<num2;
    getch();
    return 0;
}


void swap(int &x, int &y)
{
    int a;
    a=x;
    x=y;
    y=a;
}

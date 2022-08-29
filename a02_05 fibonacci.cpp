//function to check whether a given number is a term in a Fibonacci series or not.

#include<iostream>
#include<conio.h>
using namespace std;

void fibo(int);
int main()
{
    int num;
    cout<<"Enter a number.\n";
    cin>>num;
    fibo(num);
    getch();
    return 0;
}


void fibo(int x)
{
    int a=-1, b=1, c, i;
    for( i=1; i<=x+2; i++)
    {
        c=a+b;
        if(c==x)
            break;
        a=b;
        b=c;
    }
    if(i<=x+2 && c==x)
        cout<<x <<" is a term in Fibonacci series.";
    else
        cout<<x <<" is not a term in Fibonacci series.";
}

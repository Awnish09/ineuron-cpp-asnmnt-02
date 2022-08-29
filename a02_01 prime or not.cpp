//function to check whether a given number is a Prime number or not.

#include<iostream>
using namespace std;

void prime_num(int);
int main()
{
    int num;
    cout<<"Enter a number.\n";
    cin>>num;
    prime_num(num);
    return 0;
}

void prime_num(int x)
{
    int i, count;
    for(i=2, count=0; i<x/2; i++)
    {
        if(x%i==0)
            break;
        count ++;
    }
    if(count==x/2-2)
        cout<<x<<" is a prime number.";
    else
        cout<<x<<" is not a prime number.";
}

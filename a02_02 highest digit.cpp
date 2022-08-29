//function to find the highest value digit in a given number.

#include<iostream>
using namespace std;

int highest_dgt(int);
int main()
{
    int num, temp;
    cout<<"Enter a number.\n";
    cin>>num;
    temp=highest_dgt(num);
    cout<<temp<<" is the highest digit in the given number.";
    return 0;
}


int highest_dgt(int x)
{
    int t;
    t=x%10;
    x/=10;
    for( x; x; x/=10)
    {
        if(t<x%10)
            t=x%10;
    }
    return t;
}

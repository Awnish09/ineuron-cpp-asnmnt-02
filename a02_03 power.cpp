//function to calculate x raised to the power y.

#include<iostream>
using namespace std;

int power(int, int);
int main()
{
    int num, pow, temp;
    cout<<"Enter a number and a number for power to which number is raised.\n";
    cin>>num>>pow;
    temp=power(num, pow);
    cout<<num<<" to the power "<<pow <<" is "<<temp <<".";
    return 0;
}


int power(int x, int y)
{
    int i, t=1;
    for( i=1; i<=y; i++)
    {
        t*=x;
    }
    return t;
}

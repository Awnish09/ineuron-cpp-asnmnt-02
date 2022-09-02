//function to print Pascal Triangle up to N lines.

#include<iostream>
#include<conio.h>
using namespace std;

//int combination(int, int);
void pascal_triangle(int);
int main()
{
    int n;
    cout<<"Enter a number.\n";
    cin>>n;
    pascal_triangle(n);
    return 0;
}


int combination(int, int);
void pascal_triangle(int n)
{
    int i, j, x=0, y=1, z, m;
    if(n%2==0)
        m=2*n+1;
    else
        m=2*n-1;
    for( i=0; i<n; i++)
    {
        for(j=0, z=0; j<m; j++)
        {
            if(j>=(n-1)-i && j<=n+i && x<y)
            {
                printf("%d",combination(i,z));
                //printf("*");
                z++;
            }
            else
                printf(" ");
            if(x<y)
                x+=1;
            else
                x-=1;
        }
        printf("\n");
    }
}

int factorial(int);
int combination(int n, int r)
{
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}

int factorial(int n)
{
    int a=1, i;
    if(n<=0)
        return 1;
    for(i=1; i<=n; i++)
    {
        a*=i;
       // printf("%d\n");
    }
    return a;
}

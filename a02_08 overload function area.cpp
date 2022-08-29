//Define overloaded functions to calculate area of circle, area of rectangle and area of triangle

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float area(int);
int area(int, int);
float area(int, int, int);
int main()
{
    int radius;
    cout<<"Enter the radius of the circle.\n";
    cin>>radius;
    cout<<"The radius of a circle is "<< area(radius)<<endl<<endl;

    int length, breadth;
    cout<<"Enter the length and breadth of the rectangle.\n";
    cin>>length >>breadth;
    cout<<"The area of the rectangle is "<<area(length, breadth)<<endl<<endl;

    int side1, side2, side3;
    cout<<"Enter all three sides of the triangle.\n";
    cin>>side1>>side2>>side3;
    cout<<"The area of a triangle is "<<area(side1, side2, side3)<<endl;
    getch();
    return 0;
}


float area(int r)
{
    float a;
    a=3.14*r*r;
    return a;
}

int area(int l, int b)
{
    return (l*b);
}

float area(int s1, int s2, int s3)
{
    float a, s;
    s=(s1 + s2 + s3)/2.0;
    a=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    return a;
}

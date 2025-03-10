#include<iostream>
using namespace std;
int sum(int,int,int=0);
float area(int);
int area(int,int);
float area(float,float);
int maximum(int,int);
float maximum(float,float);


int main()
{
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<<maximum(a,b)<<endl;
    float m,n;
    cout<<"enter two numbers:";
    cin>>m>>n;
    cout<<maximum(m,n)<<endl;
    return 0;
}
int maximum(int x,int y)
{
    if(x>y)
    return x;
    else 
    return y;
}
float maximum(float x,float y)
{
    if(x>y)
    return x;
    else 
    return y;
}

int main()
{
    int a,b;
    cout<<"enter length and breadth of a rectangle:";
    cin>>a>>b;
    cout<<"area of rectangle is "<<area(a,b)<<endl;
    int r;
    cout<<"enter a radius:";
    cin>>r;
    cout<<"area of circle is "<<area(r)<<endl;
    float m,n;
    cout<<"enter base and height of triangle:";
    cin>>m>>n;
    cout<<"area of triangle is "<<area(m,n)<<endl;
    return 0;
}

float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
float area(float b,float h)
{
   return b*h/2.0;
}


int main()
{
    int a,b,c;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<<"sum of "<<a<<" and "<<b<<" are "<<sum(a,b)<<endl;
    cout<<"enter three numbers:";
    cin>>a>>b>>c;
    cout<<"sum of "<<a<<","<<b<<" and "<<c<<" are "<<sum(a,b,c)<<endl;
    return 0;
}
int sum(int x,int y,int z)
{
    return x+y+z;
}

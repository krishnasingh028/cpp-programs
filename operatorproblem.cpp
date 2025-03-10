#include<iostream>
using namespace std;
int main()
{
    int a='A';
    char b=++a;
    cout<<b<<endl;
    return 0;
}

int main()
{
    int a=3,b=4;
    a=(a+b)-(b=a);
    cout<<a<<" "<<b<<endl;
    return 0;
}

int main()
{
    int a=3,b=4;
    a*=b;
    b=a/b;
    a/=b;
    cout<<a<<" "<<b<<endl;
    return 0;
}

int main()
{
    int a=3,b=4;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b<<endl;
    return 0;
}

int main()
{
    int n,sum=0;
    cout<<"enter a number=";
    cin>>n;
    while(n && n>0)
    {
        sum+=n%10;
        n/=10;
    }
    if(n>=0)
    cout<<"sum is "<<sum<<endl;
    else
    cout<<"invalid number"<<endl;
    return 0;
}

int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(n>99 && n<1000)
    {
    int m=n%10;
    n=m*100+n/10;
    cout<<"new number is "<<n<<endl;
    }
    else
    cout<<"not a three-digit number"<<endl;
    return 0;
}
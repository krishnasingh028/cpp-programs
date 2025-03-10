#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(n==0)
    cout<<"number is zero"<<endl;
    else if(n<0)
    cout<<"negative number"<<endl;
    else if(n & 1)
    cout<<"number is odd"<<endl;
    else
    cout<<"number is even"<<endl;
    return 0;
}

int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(n>99 && n<1000)
    cout<<n<<" is a three digit number"<<endl;
    else 
    cout<<n<<" is not a three digit number"<<endl;
    return 0;
}

int main()
{
    int a,b,c,n;
    cout<<"enter three numbers:";
    cin>>a>>b>>c;
    if(n=a>b?a>c?a:c : b>c?b:c)
    cout<<n<<endl;
    return 0;
}

int main()
{
    int cp,sp;
    cout<<"enter cp and sp of a product:";
    cin>>cp>>sp;
    if(cp<sp)
    cout<<"profit:"<<(sp-cp)*100.0/cp;
    else 
    cout<<"loss:"<<(cp-sp)*100.0/cp;
    return 0;
}
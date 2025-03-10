#include<iostream>
using namespace std;

inline float area(float);
inline float si(int,int,int);
inline int even_odd(int);
int factorial(int);
int combination(int,int);
int prime(int);
void factors(int);
int lcm(int,int);
int hcf(int,int);
int nextprime(int);
void primes(int);
void fibonacci(int);
void armstrong(int,int);
int sumseries(int);
void pascal(int);

int main()
{
    float r;
    cout<<"enter radius of circle:";
    cin>>r;
    cout<<area(r)<<endl;

    int x,y,z;
    cout<<"enter value of p,r and t:";
    cin>>x>>y>>z;
    cout<<si(x,y,z)<<endl;

    int n;
    cout<<"enter a number:";
    cin>>n;
 
    cout<<"factorial of "<<n<<" is "<<factorial(n)<<endl;

    if(even_odd(n)==-1)
    cout<<n<<" is neither even nor odd"<<endl;
    else if(even_odd(n)==1)
    cout<<n<<" is even"<<endl;
    else
    cout<<n<<" is odd"<<endl; 

    
    int n,r;
    cout<<"enter value of n and r:";
    cin>>n>>r;
    cout<<"resultant combination is "<<combination(n,r)<<endl;

    int k;
    cout<<"enter a number:";
    cin>>k;
    factors(k);

    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<<"lcm of "<<a<<" and "<<b<<" is "<<lcm(a,b)<<endl;
    cout<<"hcf of "<<a<<" and "<<b<<" is "<<hcf(a,b)<<endl;

    int x;
    cout<<"enter a number:";
    cin>>x;
    cout<<"next prime number is "<<nextprime(++x)<<endl;

    int N;
    cout<<"enter value of N:";
    cin>>N;
    primes(N);
    fibonacci(N);

    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    armstrong(a,b);

    int x;
    cout<<"enter a number:";
    cin>>x;
    cout<<"sum of first "<<x<<" series number is "<<sumseries(x)<<endl;

    int x;
    cout<<"enter a number:";
    cin>>x;
    pascal(x);
    return 0;
}

void pascal(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<combination(i,j);
        }
        cout<<endl;
    }
}

int sumseries(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    sum+=factorial(i)/i;
    return sum;
}

int factorial(int x)
{
    int fact=1;
    while(x)
    {
        fact*=x;
        x--;
    }
    return fact;
}


void armstrong(int m,int n)
{
    int k,sum,x;
    for(int i=m<n?++m : ++n ; i<m||i<n ;i++)
    {
         k=i,sum=0;
        while(k)
        { 
            x=k%10;
           sum+=x*x*x;
           k/=10; 
        }
        if(i==sum)
        cout<<i<<" ";
    }
    cout<<endl;
}



void fibonacci(int N)
{
    int a=0,b=1,sum=0;
    cout<<"first "<<N<<" fibonacci series numbers are ";
    for(int i=1;i<=N;i++)
    {
        cout<<sum<<" ";
        sum=a+b;
        b=a;
        a=sum;
    }
    cout<<endl;
}

void primes(int x)
{
    int count=1,k=2;
    for(int i=2; i<=k && count<=x ;i++)
    {
        if(k%i==0)
        {
            if(i==k)
            {
            cout<<k<<" ";
            count++;
            }
            k++;
            i=1;
        }
    }
    cout<<endl;
}

int nextprime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            if(i<n)
            n++;
            else break;
            i=1;
        }
    }
    if(n==1)
    return 2;
    else
    return n; 
}



float area(float x)
{
    return 3.14*x*x;
}

float si(int p,int r,int t)
{
    return p*r*t/100.0;
}

int even_odd(int x)
{
    if(x<=0)
    return -1;
    else if(x%2==0)
    return 1;
    else 
    return 0;
}


int factorial(int x)
{
    int fact=1;
    while(x)
    {
        fact*=x;
        x--;
    }
    return fact;
}


int combination(int a,int b)
{
    return factorial(a)/factorial(a-b)/factorial(b);
}


void factors(int n)
{
    int i=2;
    while(i<=n)
    {
        if(n%i==0)
        {
            if(prime(i)==1)
            {
                cout<<i<<" ";
                n/=i;
            }
        }
        else i++;
    }
    cout<<endl;
}

int prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        break;
    }
    if(a==i)
    return 1;
    else
    return 0;
}


int lcm(int m,int n)
{
    for(int l=m>n?m:n ; l<=m*n ; l++)
    {
        if(l%m==0 && l%n==0)
        return l;
    }
    return 0;
}

int hcf(int m,int n)
{
    for(int h=m<n?m:n ; h>=1 ; h--)
    {
        if(m%h==0 && n%h==0)
        return h;
    }
    return 1;
}


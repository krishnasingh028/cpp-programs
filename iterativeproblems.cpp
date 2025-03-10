#include<iostream>
using namespace std;
int main()
{
    int i=0;
    while(i<10)
    {
    cout<<2*i+1<<" ";
    i++;
    }
    cout<<endl;
    return 0;
}

int main()
{
    int i=1;
    while(i<=10)
    {
    cout<<i*i<<" ";
    i++;
    }
    cout<<endl;
    return 0;
}

int main()
{
    int i=0,N;
    cout<<"enter value of N:";
    cin>>N;
    cout<<"first "<<N<<" odd natural numbers are:"<<endl;
    while(i<N)
    {
        cout<<2*i+1<<" ";
        i++;
    }
    cout<<endl;
    return 0;
}

int main()
{
   int i=1,N,sum=0;
   cout<<"enter value of N:";
   cin>>N;
   while(i<=N)
   {
     sum+=2*i;
     i++;
   }
   cout<<"sum of first N even natural numbers are "<<sum<<endl;
   return 0;
}

int main()
{
   int i=1,N,sum=0;
   cout<<"enter value of N:";
   cin>>N;
   while(i<=N)
   {
     sum+=i*i;
     i++;
   }
   cout<<"sum of first N even natural numbers are:"<<sum<<endl;
   return 0;
}

int main()
{
   int n,fact=1;
   cout<<"enter value of n:";
   cin>>n;
   for(int i=1;i<=n;i++)
   fact*=i;
   cout<<"factorial of "<<n<<" is "<<fact<<endl;
   return 0;
}

int main()
{
   int i,n;
   cout<<"enter a number:";
   cin>>n;
   for(i=0; n ;i++)
   n/=10;
   cout<<"number has "<<i<<" digits"<<endl;
   return 0;
}

int main()
{
   int i,n;
   cout<<"enter a number:";
   cin>>n;
   for(i=2;i<n;i++)
   {
      if(n%i==0)
      break;
   }
   if(i==n)
   cout<<n<<" is a prime number"<<endl;
   else 
   cout<<n<<" is not a prime number"<<endl;
   return 0;
}

int main()
{
   int m,n,lcm;
   cout<<"enter two numbers:";
   cin>>m>>n;
   for(lcm=m>n?m:n ; lcm<m*n ; lcm++)
   {
      if(lcm%m==0 && lcm%n==0)
      break;
   }
   cout<<"lcm of "<<m<<" and "<<n<<" is "<<lcm<<endl;
   return 0;
}

int main()
{
   int n,rev=0;
   cout<<"enter a number:";
   cin>>n;
   while(n)
   {
      rev=rev*10+n%10;
      n/=10;
   }
   cout<<"reverse number is "<<rev<<endl;
   return 0;
}

int main()
{
   int n;
   cout<<"prime numbers between 1 and 100 are ";
   for(int i,n=2;n<=100;n++)
   {
      for(i=2;i<n;i++)
      {
         if(n%i==0)
         break;
      }
      if(i==n)
      cout<<n<<" ";
   }
   cout<<endl;
   return 0;
}


int main()
{
   int m,n;
   cout<<"enter two numbers:";
   cin>>m>>n;
   for(int i,x=m<n?m:n ; x<=n ; x++)
   {
      for(i=2;i<x;i++)
      {
         if(x%i==0)
         break;
      }
      if(x==i)
      cout<<x<<" ";
   }
   cout<<endl;
   return 0;
}  


int main()
{
   int n,i;
   cout<<"enter a number:";
   cin>>n;
   for(n=++n ; n ; n++)
   {
      for(i=2;i<n;i++)
      {
         if(n%i==0)
         break;
      }
      if(n==i)
      break;
   }
   cout<<n<<endl;
   return 0;
}

int main()
{
    int a=0,b=1,sum=0;
    int N;
    cout<<"enter value of N:";
    cin>>N;
    for(int i=1;i<N;i++)
    {
        sum=a+b;
        b=a;
        a=sum;
    }
    cout<<N<<"th fibonacci series is "<<sum<<endl;
    return 0;
}


int main()
{
    int a=0,b=1,sum=0;
    int N;
    cout<<"enter value of N:";
    cin>>N;
    cout<<"first "<<N<<" fibonacci series numbers are:" ;
    for(int i=1;i<=N;i++)
    {
        cout<<sum<<" ";
        sum=a+b;
        b=a;
        a=sum;
    }
    cout<<endl;
    return 0;
}


int main()
{
    int a=0,b=1,sum=0;
    int N;
    cout<<"enter value of N:";
    cin>>N;
    while(sum<N)
    {
        sum=a+b;
        b=a;
        a=sum;
    }
    if(sum==N)
    cout<<N<<" is a fibonacci series number"<<endl;
    else 
    cout<<N<<" is not a fibonacci series number"<<endl;
    return 0;
}


int main()
{
  cout<<"armstrong numbers under 1000 are ";
  for(int i=0;i<=1000;i++)
  {
    int sum=0,n=i;
    while(n)
    {
        int rem=n%10;
        sum+=rem*rem*rem;
        n/=10;
    }
    if(sum==i)
    cout<<i<<" ";
  }
    cout<<endl;
    return 0;
}
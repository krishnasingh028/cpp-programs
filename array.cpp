#include<iostream>
using namespace std;
void sorting(int b[],int);         /* sorting of an array*/
void rotate(int b[],int,int,int);  /*rotate an array by n position and in d direction*/
int occurance(int b[],int);       /* occurance of two adjacent values in an array */
void swap(int b[],int,int,int);   /* swaping two specific indices */
int duplicate(int b[],int);       /* count total duplicate values */
void unique(int b[],int);         /* finding all unique elements */
void frequency(int b[],int);      /* count frequency of each elements */
void mergearray(int a[],int b[],int size); /* merge two array and sorted in descending order */

int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr1[n],arr2[n];
    cout<<"enter elements of array 1:";
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    cout<<"enter elements of array 2:";
    for(int i=0;i<n;i++)
    cin>>arr2[i];
    mergearray(arr1,arr2,n);
    return 0;
}

void mergearray(int a[],int b[],int size)
{
    int temp,c[2*size];
    for(int i=0;i<2*size;i++)
    {
        if(i<size)
          c[i]=a[i];
        else
          c[i]=b[i-size]; 
    }
    for(int i=0;i<2*size-1;i++)
    {
        for(int j=i+1;j<2*size;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    } 
    for(int i=0;i<2*size;i++)
    cout<<c[i]<<" ";
    cout<<endl;
}

int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int a[n];
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    frequency(a,n);
    return 0;
}

void frequency(int b[],int size)
{
    for(int i=0;i<size;i++)
    {
        int count=1;
        for(int j=i+1;j<size && b[i]!= -1 ;j++)
        {
            if(b[i]==b[j])
            {
                count++;
                b[j]= -1;
            }
        }
        if(b[i]!= -1)
        cout<<b[i]<<": "<<count<<" times"<<endl;
    }
}

int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int a[n];
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    unique(a,n);
    return 0;
}

void unique(int b[],int size)
{
    for(int i=0;i<size-1;i++)
    {
       for(int j=0;j<size;j++)
       {
          if(b[i]==b[j] && i!=j)
          break;
          else if(j==size-1)
          cout<<b[i]<<" ";
       }
    }
    cout<<endl; 
}

int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int a[n];
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"total no. of duplicate elements are "<<duplicate(a,n)<<endl;
    return 0;
}

int duplicate(int b[],int size)
{
    
}

int main()
{
    int n,x,y;
    cout<<"enter size of array:";
    cin>>n;
    int a[n];
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter two specific indices:";
    cin>>x>>y;
    swap(a,n,x,y);
    return 0;
}

void swap(int b[],int size,int i,int j)
{
    int temp=b[i];
    b[i]=b[j];
    b[j]=temp;
    for(int i=0;i<size;i++)
    cout<<b[i]<<" ";
    cout<<endl;
}

int main()
{
    int a[10],sum=0;
    cout<<"enter 10 elements in array:";
    for(int i=0;i<10;i++)
    cin>>a[i];
    for(int i=0;i<10;i++)
    sum+=a[i];
    cout<<"average of elements is array is "<<sum/10.0<<endl;
    return 0;
}

int main()
{
    int a[10],sumeven=0,sumodd=0;
    cout<<"enter 10 elements:";
    for(int i=0;i<10;i++)
    cin>>a[i];
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
        sumeven+=a[i];
        else 
        sumodd+=a[i];
    }
    cout<<"sum of even elements in array:"<<sumeven<<endl;
    cout<<"sum of odd elements in array:"<<sumodd<<endl;
    return 0;
}

int main()
{
    int a[10];
    cout<<"enter elements in array:";
    for(int i=0;i<10;i++)
    cin>>a[i];
    int greatest=a[0];
    for(int i=1;i<10;i++)
    {
        if(greatest<a[i])
        greatest=a[i];
    }
    cout<<"greatest element in array is "<<greatest<<endl;
    return 0;
}

int main()
{
    int a[10],temp;
    cout<<"enter 10 numbers:";
    for(int i=0;i<10;i++)
    cin>>a[i];
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            { 
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

int main()
{
    int a[10],temp,i;
    cout<<"enter 10 numbers:";
    for(i=0;i<10;i++)
    cin>>a[i];
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            { 
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }
    }
    for(i=1;i<10;i++)
    {
        if(a[i]>a[0])
        break;
    }
    cout<<a[i]<<endl;
    return 0;
}

int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int a[n],b[n];
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0,j=0; i!=n;i++,j++)
    b[j]=a[i];
    for(int j=0;j<n;j++)
    cout<<b[j]<<" ";
    cout<<endl;
    return 0;
}

int main()
{
   int n,temp;
   cout<<"enter size of array:";
   cin>>n;
   int a[n];
   cout<<"enter elements of array:";
   for(int i=0;i<n;i++)
   cin>>a[i];
   for(int i=0;i<n-1;i++)
   {
      for(int j=i+1;j<n;j++)
      {
         if(a[i]>a[j])
         {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
   for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
   cout<<endl;
   return 0;
}



int main()
{
    int size;
   cout<<"enter size of array:";
   cin>>size;
   int b[size];
   cout<<"enter elements of array:";
   for(int i=0;i<size;i++)
   cin>>b[i];
   sorting(b,size);
   return 0;
}

void sorting(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
   {
      for(int j=i+1;j<n;j++)
      {
         if(a[i]>a[j])
         {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
   for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
   cout<<endl;
}


int main()
{
    int x;
    cout<<"size of array:";
    cin>>x;
    int a[x];
    cout<<"enter elements of array:";
    for(int i=0;i<x;i++)
    cin>>a[i];
    int position,direction;
    cout<<"Remainder:"<<endl;
    cout<<"here 0: for left and 1: for right direction"<<endl;
    cout<<"enter position value:";
    cin>>position;
    cout<<"enter direction symbol:";
    cin>>direction;
    rotate(a,x,position,direction);
    return 0;
}

void rotate(int b[],int size,int n,int d)
{
    int c[size];
    if(d==0)
    {
       for(int i=size-1;i>=0;i--)
       {
        if(i-n>=0)
        c[i-n]=b[i];
        else
        c[size+i-n]=b[i];
       }
    }
    else 
    {
        for(int i=0;i<size;i++)
        {
            if(i+n<size)
            c[i+n]=b[i];
            else
            c[i+n-size]=b[i];
        }
    }
    for(int i=0;i<size;i++)
    cout<<c[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[10]={1,3,3,2,3,4,5,4,4,5};
    cout<<"value will be: "<<occurance(arr,10)<<endl;
    return 0;
}

int occurance(int b[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(b[i]==b[i+1])
        break;
    }
    return b[i];
}


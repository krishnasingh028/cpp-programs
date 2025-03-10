#include<iostream>
#include<string.h>
using namespace std;
void sort_array(int b[],int,bool=true);
void sort_string(char str[][50],int,bool=true);
void rotate_array(int arr[],int,int=1,int=1);
int checkprime(int);
void substring(char str[],int,int,int= -1);


int main()
{
    char s[50]="ram aur shyam";
    substring(s,strlen(s),2,4);
    return 0;
}

void substring(char str[],int size,int i,int j)
{
    int l;
    char substr[50];
    if(j!= -1)
    {
      for(l=0;i<j;l++,i++)
      substr[l]=str[i];
      substr[l]='\0';
    }
    else
    {
        for(l=0;str[i];l++,i++)
        substr[l]=str[i];
        substr[l]='\0';
    }

    cout<<substr<<endl;
}

int main()
{
    int n=14;
    cout<<"prime factors are:"<<endl;
    for(int i=2;i<=14;i++)
    {
        if(n%i==0)
        {
           if(checkprime(i)==i)
           cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
int checkprime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        break;
    }
    if(a==i)
    return a;
    else 
    return 1;
}

int main()
{
    int a[6]={10,12,24,21,14,27};
    rotate_array(a,6,2);
    return 0;
}

void rotate_array(int arr[],int size,int n,int d)
{
    int b[size];
    if(d==1)
    {
       for(int i=0;i<size;i++)
       {
           if(i+n<size)
           b[i+n]=arr[i];
           else
           b[i+n-size]=arr[i];
       }
    }
    else 
    {
        for(int i=size-1;i>=0;i--)
        {
            if(i-n>=0)
            b[i-n]=arr[i];
            else
            b[size+i-n]=arr[i];
        }
    }
    for(int i=0;i<size;i++)
    cout<<b[i]<<" ";
    cout<<endl;
}

int main()
{
    char s[5][50];
    for(int i=0;i<5;i++)
    cin.getline(s[i],50);
    cout<<endl;
    sort_string(s,5);
    cout<<endl;
    sort_string(s,5,false);
}

void sort_string(char str[][50],int n,bool d)
{
    char temp[50];
    if(d==true)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(strcmp(str[i],str[j])>0)
                {
                    strcpy(temp,str[i]);
                    strcpy(str[i],str[j]);
                    strcpy(str[j],temp);
                }
            }
        }
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(strcmp(str[i],str[j])<0)
                {
                    strcpy(temp,str[i]);
                    strcpy(str[i],str[j]);
                    strcpy(str[j],temp);
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<str[i]<<endl;
}

int main()
{
    int arr[5]={19,23,43,2,12};
    sort_array(arr,5);
    sort_array(arr,5,false);
    return 0;
}
void sort_array(int b[],int size,bool d)
{
    if(d==true)
    {
        cout<<"array's element in ascending order are:";
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(b[i]>b[j])
                {
                    int temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
    }
    else 
    {
        cout<<"array's elements in descending order are:";
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(b[i]<b[j])
                {
                    int temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
    }
  for(int i=0;i<size;i++)
  cout<<b[i]<<" ";
  cout<<endl;
}
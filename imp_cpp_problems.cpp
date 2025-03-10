
#include<iostream>
#include<string.h>
using namespace std;


class Circle
{
  private:
     float r;
  public:
      void setRadius(float r)
      {
        this->r=r;
      }  
      void showRadius()
      {
        cout<<r<<endl;
      } 
      float area()
      {
        return 3.14*r*r;
      }
      float circumference()
      {
        return 2*3.14*r;
      }
};
int main()
{
   Circle c;
   int r;
   cout<<"enter Radius of Circle:";
   cin>>r;
   c.setRadius(r);
   c.showRadius();
   cout<<"area of Circle:"<<c.area()<<endl;
   cout<<"circumference of Circle:"<<c.circumference()<<endl;
   return 0;
}


class Date
{
  private: 
      int d,y;
      char m[5];
  public:
      void setdate(int d,char m[],int y)
      {
        this->d=d;
        strcpy(this->m,m);
        this->y=y;
      }  
      // void getdate()
      // {
      //   cout<<"d="<<d<<", m="<<m<<" ,y="<<y<<endl;
      // }  
      // void showdate()
      // {
      //   cout<<"date:"<<d<<"-"<<m<<"-"<<y<<endl;
      // }
      void displaydate()
      {
        cout<<"date:"<<d<<"-"<<m<<"-"<<y<<endl;
      }
};
int main()
{
  Date d;
  d.setdate(31,"Dec",2022);
  d.displaydate();
  // d.getdate();
  return 0;
}

class Time
{
   private:
     int hr,min,sec;
   public:
     void setvalues(int hr,int min,int sec)
     {
      this->hr=hr;
      this->min=min;
      this->sec=sec;
     }  
     void showvalue()
     {
      cout<<"time: "<<hr<<":"<<min<<":"<<sec<<endl;
     }
};
int main()
{
  Time* t;
  t=new Time();
  t->setvalues(3,24,23);
  t->showvalue();
  delete t;
  return 0;
}

class complex1
{
   private:
      int a,b;
   public:
      void inputvalue();
      void showvalue();   
};
void complex1::inputvalue()
{
  cin>>a>>b;
}
void complex1::showvalue()
{
  cout<<"a="<<a<<" b="<<b<<endl;
}
int main()
{
  complex1 c;
  c.inputvalue();
  c.showvalue();
  return 0;
}

class complex2
{
   private:
       int a,b;
   public:
       void setdata(int a,int b)
       {
         this->a=a;
         this->b=b;
       } 
       void showdata()
       {
         cout<<a<<" "<<b<<endl;
       }   
};
int main()
{
   complex2 c;
   c.setdata(3,4);
   c.showdata();
   return 0;
}

class complex3
{
    private:
     int a,b;
    public:
      friend void setvalue(int x,int y);
      friend void deal::getvalue();  
};
class deal
{
     private:
        int a=5,b=6;
     public:
         void getvalue();
};
void setvalue(int x,int y)
{
   complex3 o1,o2;
   o1.a=x;
   o2.b=y;
}


int main()
{
   int a[]={0,1,2,0,3,5};
   int len=sizeof(a)/sizeof(int);
   for(int i=0,j=i+1;j<len;j++)
   {
      if(a[i]==0 && a[j]!=0)
      {
         swap(a[i],a[j]);
         i++;
      }
      if(a[i]!=0)
       i++;
   }
   for(int i=0;i<len;i++)
   cout<<a[i]<<" ";
   cout<<endl;
   return 0;
}

int main()
{
   int a[]={2,3,4,5,6,7};
   int len=sizeof(a)/sizeof(int);
   int direction,position;
   cout<<"for right direction press 1 else press 0"<<endl;
   cout<<"enter value for direction:";
   cin>>direction;
   cout<<"enter value for position:";
   cin>>position;
   if(direction==1)
   {
      int n=len-position;
      for(int i=0,j=n-1;i<=j;i++,j--)
       swap(a[i],a[j]);
       for(int i=n,j=len-1;i<=j;i++,j--)
       swap(a[i],a[j]);
      for(int i=0,j=len-1;i<=j;i++,j--)
      swap(a[i],a[j]);
   }
   else
   {
      int n=position;
      for(int i=0,j=n-1;i<=j;i++,j--)
       swap(a[i],a[j]);
       for(int i=n,j=len-1;i<=j;i++,j--)
       swap(a[i],a[j]);
      for(int i=0,j=len-1;i<=j;i++,j--)
      swap(a[i],a[j]);
   }
   for(int i=0;i<len;i++)
   cout<<a[i]<<" ";
   cout<<endl;
   return 0;
}


int main()
{
    int a[]={0,1,2,0,3,4,0,0,5,4};
    int len=sizeof(a)/sizeof(int);
    int temp[len];
    for(int i=0,j=0;j<len;i++)
    {
      if(i<len && a[i]!=0)
      {
      temp[j]=a[i];
      j++;
      }
      if(i>=len)
      {
      temp[j]=0;
      j++;
      }
    }
    for(int i=0;i<len;i++)
    cout<<temp[i]<<" ";
    cout<<endl;
    return 0;
}

class complex
{
   private:
      int a,b;
   public:
      complex() {}
      complex(int x,int y):a(x),b(y)
      {}
      friend complex operator+(complex,complex);
      void showdata();
};
class time
{
   private:
      int hr,min,sec;
   public:
      time(int x,int y,int z):hr(x),min(y),sec(z)
      {}
      friend void operator+(time,time);   

};
complex operator+(complex c1,complex c2)
{
   complex temp;
   temp.a=c1.a+c2.a;
   temp.b=c1.b+c2.b;
   return temp;
}
void complex::showdata()
{
   cout<<"a="<<a<<" b="<<b<<endl;
}
int main()
{
   complex c1(2,3),c2(3,4);
   complex c3=c1+c2;
   c3.showdata();
   return 0;
}

int main()
{
    int a[10]={1,2,0,1,2,0,0,2,1,2};
    int i=0,j=0,k=9;
    while(j<=k)
    {
       if(a[j]==0)
       {
        int temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        i++;
        j++;
       }
       else if(a[j]==2)
       {
          int temp=a[j];
          a[j]=a[k];
          a[k]=temp;
          k--;
       }
      else j++;
    }
    for(int i=0;i<10;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

int main()
{
    int b[17];
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int size=4,i=0,j=0,k=0,row=size,column=0;
    while(size)
    {
        for(;j<row;j++,k++)
           b[k]=a[i][j];
        for(++i,j--;i<row;i++,k++)
            b[k]=a[i][j];
        for(i--,j--;j>=column;j--,k++)
           b[k]=a[i][j];
        for(j++,i--;i>column+1;i--,k++)
           b[k]=a[i][j];
        row--;
        column++;
        size--;
    }
    for(int i=0;i<16;i++)
    cout<<b[i]<<" ";
    cout<<endl;
}

int main()
{
   int arr1[]={2,4,6,5,1,1,1};
   int arr2[]={3,4,4,5,5,6,4,6};
   for(int i=0,j=1;i<7 ;j++)
   {
      if(arr1[i]==-1)
      {
      i++;
      j=i;
      }
      else if(arr1[i]==arr1[j])
         arr1[j]= -1;
       if(j==6)
       {
          i++;
          j=i;
       }
   }
   int i=0;
   for(int j=0;j<8 && i<7;j++)
   {
      if(arr1[i]==arr2[j] && arr1[i]!=-1)
      {
         cout<<arr1[i]<<" ";
         i++;
         j=-1;
      }
      if(j==7)
      {
         j=-1;
         i++;
      }
   }
   cout<<endl;
   return 0;
}

void inputdata(int*);
void showdata(int);
void five();
void seven();
void reversestring(char str[], int size);

int main()
{
    char s[100];
    cout << "Enter a string: ";
    cin.getline(s, 100);
    reversestring(s, strlen(s));
    return 0;
}

void reversestring(char str[], int size)
{
    int i, j, k;
    char b[10][20];
    for (i = 0, k = 0; str[k]; i++)
    {
        for (j = 0; str[k] != ' ' && str[k] != '\0'; j++, k++)
            b[i][j] = str[k];
        b[i][j] = '\0'; // Add null-terminator at the end of each word
        if (str[k] == '\0')
            break;
        k++; // Skip the space
    }
    for (int l = i; l >= 0; l--)
    {
        cout << b[l] << " ";
    }
    cout << endl;
}

int main()
{
    int a;
    inputdata(&a);
    showdata(a);
    return 0;
}
void inputdata(int* p)
{
    cin>>*p;
}
void showdata(int p)
{
    cout<<p;
}

int main()
{
  int count=0;
  while(count<=100)
  {
     for(int i=0;i<10 && count<100;i++,count++)
    {
        if(i<5)
        cout<<"shashank singh"<<endl;
        else 
        cout<<" "<<endl;
    }
    for(int i=0;i<14 && count<100;i++,count++)
    {
        if(i<7)
        cout<<"shashank singh"<<endl;
        else 
        cout<<" "<<endl;
    }
  }
    return 0;
}


int main()
{
  int arr[7]={12,13,43,2,53,24,64};
  for(int i=0,j=6 ; i<j ; i++,j--)
   {
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
   }
   for(int i=0;i<7;i++)
   cout<<arr[i]<<" ";
   cout<<endl;
   return 0;
}



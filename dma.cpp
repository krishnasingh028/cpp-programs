#include<iostream>
#include<string.h>
using namespace std;



class Time
{
    private: 
        int hr,min,sec;
    public:
        void settime(int,int,int);
        void showtime(); 
        void displayarray(int);
        void setarray(int);
        friend bool operator>(Time,Time);
        void sortarray(int);
};
bool operator>(Time t1,Time t2)
{
    if(t1.hr>t2.hr)
    return true;
    else if(t1.hr<t2.hr)
    return false;
    else if(t1.min>t2.min)
    return true;
    else if(t1.min<t2.min)
    return false;
    else if(t1.sec>t2.sec)
    return true;
    else if (t1.sec<t2.sec)
    return false;
    else return true; 
}
void Time::sortarray(int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(this[i]>this[j]==true)
            {
                Time temp=this[i];
                this[i]=this[j];
                this[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    this[i].showtime();
}
void Time::setarray(int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>this[i].hr>>this[i].min>>this[i].sec;
    }
}
void Time::displayarray(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"time: "<<this[i].hr<<":"<<this[i].min<<":"<<this[i].sec<<endl;
    }
    cout<<endl;
}
Time* createarray(int n)
{
    Time* ptr;
    ptr=new Time[n];
    return ptr;
}
void Time::settime(int hr,int min,int sec)
{
    this->hr=hr;
    this->min=min;
    this->sec=sec;
}
void Time::showtime()
{
    cout<<"time: "<<hr<<":"<<min<<":"<<sec<<endl;
}
int main()
{
    Time* t;
    t=new Time;
    t->settime(3,45,56);
    t->showtime();
    delete t;
    int n;
    cout<<"enter size of array:";
    cin>>n;
    Time* ptr;
    ptr=createarray(n);
    ptr->setarray(n);
    ptr->displayarray(n);
    ptr->sortarray(n);
    delete ptr;
    return 0;
}


class complex
{
    private:
        int a,b;
    public:
        void setdata(int,int);
        void showdata();  
        friend void displaydata(); 
};
void displaydata()
{
    complex* c;
    c=new complex;
    c->a=2;
    c->b=4;
    cout<<"a="<<c->a<<" b="<<c->b<<endl;
    delete c;
}
void complex::setdata(int a,int b)
{
this->a=a;
this->b=b;
}
void complex::showdata()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
int main()
{
    complex* c;
    c=new complex();
    c->setdata(3,3);
    c->showdata();
    displaydata();
    delete c;
    return 0;
}


class person
{
    private:
       char name[20];
       int age;
    public:
       person(char* name,int age)
       {
        strcpy(this->name,name);
        this->age=age;
       }
       void showdata()
       {
        cout<<name<<" "<<age<<endl;
       }
};
int main()
{
    person* p;
    p=new person("shashank",20);
    p->showdata();
    delete p;
    return 0;
}

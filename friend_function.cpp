#include<iostream>
using namespace std;

class student
{
    private:
       int roll_no;
       char name[20];
       int age;
    public:
       void setstudent();
       void showstudent();   
};
void student::setstudent()
{
    cin>>roll_no;
    cin.ignore();
    cin.getline(name,20);
    cin>>age;
}
void student::showstudent()
{
    cout<<"roll_no:"<<roll_no<<" name:"<<name<<" age:"<<age<<endl;
}


int main()
{
    student s1,s2;
    s1.setstudent();
    s2.setstudent(); 
    s1.showstudent();
    s2.showstudent();
    return 0;
}

class cordinate
{
    private:
       int x,y;
    public:
       friend cordinate operator,(cordinate,cordinate);  
       friend istream& operator>>(istream&,cordinate&);
       friend ostream& operator<<(ostream&,cordinate); 
};
istream& operator>>(istream& cin,cordinate& temp)
{
    cin>>temp.x>>temp.y;
    return cin;
}
ostream& operator<<(ostream& cout,cordinate temp)
{
    cout<<temp.x<<" "<<temp.y<<endl;
    return cout;
}
cordinate operator,(cordinate c1,cordinate c2)
{
    cordinate temp;
    temp.x=c2.x;
    temp.y=c2.y;
    return temp;
}
int main()
{
    cordinate c1,c2;
    cin>>c1>>c2;
    cordinate c3=(c1,c2);
    cout<<c3;
    return 0;
}


class time
{
    private:
        int hr,min,sec;
    public:
        friend istream& operator>>(istream&,time&);
        friend ostream& operator<<(ostream&,time);    
        // time operator=();
};
// time time::operator=()
// {
//     time temp;
//     temp.hr=hr;
//     temp.min=min;
//     temp.sec=sec;
//     return temp;
// }
istream& operator>>(istream& cin,class time& temp)
{
    cin>>temp.hr>>temp.min>>temp.sec;
    return cin;
}
ostream& operator<<(ostream&,class time temp)
{
    cout<<"time:"<<temp.hr<<":"<<temp.min<<":"<<temp.sec<<endl;
    return cout;
}
int main()
{
    class time t;
    cout<<"enter time:";
    cin>>t;
    cout<<t;
    class time t1= t;
    cout<<t1;
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
       complex operator-();
       friend complex operator+(complex,complex);
       friend complex operator-(complex,complex);
       friend complex operator*(complex,complex);
       friend istream& operator>>(istream&,complex&); 
       friend ostream& operator<<(ostream&,complex); 
 };
 complex complex::operator-()
 {
    complex c;
    c.a= -a;
    c.b= -b;
    return c;
 }
 istream& operator>>(istream& cin,complex& temp)
 {
    cin>>temp.a>>temp.b;
    return cin;
 }
 ostream& operator<<(ostream& cout,complex temp)
 {
    cout<<temp.a<<" "<<temp.b<<endl;
    return cout;
 }
 complex operator+(complex temp1,complex temp2)
 {
     complex temp;
     temp.a=temp1.a+temp2.a;
     temp.b=temp1.b+temp2.b;
     return temp;
 }
 complex operator-(complex temp1,complex temp2)
 {
    complex temp;
    temp.a=temp1.a-temp2.a;
    temp.b=temp1.b-temp2.b;
    return temp;
 }
 complex operator*(complex temp1,complex temp2)
 {
    complex temp;
    temp.a=temp1.a*temp2.a-temp1.b*temp2.b;
    temp.b=temp1.a*temp2.b+temp2.a*temp1.b;
    return temp;
 }
int main()
{
    complex c1,c2;
    cin>>c1>>c2;
    complex c3=c1+c2;
    cout<<c3;
    complex c4=c1-c2;
    cout<<c4;
    complex c5=c1*c2;
    cout<<c5;
    complex c6= -c1;
    cout<<c6;
    return 0;
}

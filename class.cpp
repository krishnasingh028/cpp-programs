
#include<iostream>
#include<string.h>
using namespace std;


class test_result
{
        int roll_no,right,wrong,net_score;
    public:
        void set_value(float,int,int);
        void get_value();
};
void test_result::set_value(float rn,int r,int w)
{
    roll_no=rn;
    right=r;
    wrong=w;
    net_score=r-w;
}
void test_result::get_value()
{
    cout<<"roll_no="<<roll_no<<endl;
    cout<<"right="<<right<<endl;
    cout<<"wrong="<<wrong<<endl;
    cout<<"net score="<<net_score<<endl;
}   

int main()
{
    test_result x[5];
    float roll_no;
    int right,wrong;
    cout<<"enter roll_no,right and wrong:";
    
    for(int i=0;i<5;i++)
    {
        cin>>roll_no>>right>>wrong;
       x[i].set_value(roll_no,right,wrong);
    }
    for(int i=0;i<5;i++)
    {
        cout<<endl;
        x[i].get_value();
    }
    return 0;
}
class time
{
       int h,m,s;
    public:
       void set_time(int,int,int);
       void show_time();
       void normalize();
       time add(time);
       bool is_greater(time);
};

void time::set_time(int x,int y,int z)
{
    h=x;
    m=y;
    s=z;
}
void time::show_time()
{
    cout<<"time will be "<<h<<":"<<m<<":"<<s<<endl;
}
void time::normalize()
{
    if(s>60)
    {
        m+=s/60;
        s-=s/60*60;
    }
    if(m>60)
    {
        h+=m/60;
        m-=m/60*60;
    }
    if(h>24)
    h-=h/24*24;
}
class time time::add(time t0)
{
    t0.h+=h;
    t0.m+=m;
    t0.s+=s;
    return t0;
}
bool time::is_greater(time t0)
{
    if(h==t0.h)
    {
        if(m>t0.m)
        return true;
        else if(m<t0.m)
        return false;
        else if(m==t0.m)
        {
            if(s>t0.s)
            return true;
            else if(s<t0.s)
            return false; 
            else return -1;
        }

    }
    else if(h>t0.h)
    return true;
    else 
    return false;
    
}


int main()
{
    class time t,t1,t2;
    int l,m,n;
    cout<<"enter hour,minute and second:";
    cin>>l>>m>>n;
    t1.set_time(l,m,n);
    cout<<"again"<<endl;
    cout<<"enter hour,minute and second:";
    cin>>l>>m>>n;
    t2.set_time(l,m,n);
    t1.normalize();
    t2.normalize();
    t1.show_time();
    t2.show_time();
    t=t1.add(t2);
    t.normalize();
    t.show_time();
    if(t1.is_greater(t2)==true)
    cout<<"t1 is greater than t2"<<endl;
    else if(t1.is_greater(t2)==false)
    cout<<"t2 is greater than t1"<<endl;
    else
    cout<<"t1 and t2 are same"<<endl;
    return 0;
}


class complex
{
      int a,b;
    public:
      void set_data(int,int);
      void show_data();
      complex add(complex);
      complex subtract(complex);
      complex multiply(complex);
};
void complex::set_data(int m,int n)
{
    a=m;
    b=n;
}
void complex::show_data()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
complex complex::add(complex c)
{
    c.a=a+c.a;
    c.b=b+c.b;
    return c;
}
complex complex::subtract(complex c)
{
    c.a=a-c.a;
    c.b=b-c.b;
    return c;
}
complex complex::multiply(complex c)
{
    complex temp;
    temp.a=a*c.a-b*c.b;
    temp.b=a*c.b+b*c.a;
    return temp;
}
int main()
{
    complex c1,c2;
    int x,y;
    cout<<"enter two numbers:";
    cin>>x>>y;
    c1.set_data(x,y);
    cout<<"again"<<endl;
    cout<<"enter two numbers:";
    cin>>x>>y;
    c2.set_data(x,y);
    c1.show_data();
    c2.show_data();
    complex cp1=c1.add(c2);
    cp1.show_data();
    complex cp2=c1.subtract(c2);
    cp2.show_data();
    complex cp3=c1.multiply(c2);
    cp3.show_data();
    return 0;
}

class circle
{
      int rad;
    public:
      void set_radius(int);
      void get_radius();
      float circumference();
      float area();
};
void circle::set_radius(int r)
{
    rad=r;
}
void circle::get_radius()
{
    cout<<"radius of circle is "<<rad<<endl;
}
float circle::circumference()
{
    return 2*3.14*rad;
}
float circle::area()
{
    return 3.14*rad*rad;
}
int main()
{
    circle c;
    int radius;
    cout<<"enter a radius of circle:";
    cin>>radius;
    c.set_radius(radius);
    c.get_radius();
    cout<<"cicumference of circle is "<<c.circumference()<<endl;
    cout<<"area of circle is "<<c.area()<<endl;
    return 0;
}


class date
{
       int d,y;
       char m[10];
    public:
       void set_date(int,char*,int);
       void get_date();
};
void date::set_date(int a,char* b,int c)
{
    d=a;
    strcpy(m,b);
    y=c;
}
// void date::get_date()
// {
//     cout<<"date will be "<<"d="<<d<<" m="<<m<<" y="<<y<<endl;
// }
// void date::get_date()
// {
//     cout<<"date will be "<<d<<"-"<<m<<"-"<<y<<endl;
// }
void date::get_date()
{
    cout<<"date will be "<<d<<"-"<<m<<"-"<<y<<endl;
}

int main()
{
    date t;
   int x,z;
   char y[10];
   cout<<"enter date and year:";
   cin>>x>>z;
   cin.ignore();
   cout<<"enter month:";
   cin.getline(y,10);
   t.set_date(x,y,z);
   t.get_date();
   return 0;
}


class time
{
    int hr;
    int min;
    int sec;
    public:
    void set_time(int,int,int);
    void show_time();
};
void time::set_time(int a,int b,int c)
{
    hr=a;
    min=b;
    sec=c;
}
void time::show_time()
{
    cout<<"time is "<<hr<<" hr "<<min<<" min "<<sec<<" sec"<<endl;
}
int main()
{
    class time t;
    int x,y,z;
    cout<<"enter hr,min and sec:";
    cin>>x>>y>>z;
    t.set_time(x,y,z);
    t.show_time();
    return 0;
}

class complex
{
    int a;
    int b;
    public:
    void setvalue(int m,int n);
    void displayvalue();
};
void complex::setvalue(int m,int n)
{
   a=m;
   b=n;
}
void complex::displayvalue()
{
    cout<<"real part="<<a<<" "<<"imaginary part="<<b<<endl;
}

int main()
{
    complex c;
    int x,y;
    cout<<"enter two numbers:";
    cin>>x>>y;
    c.setvalue(x,y);
    c.displayvalue();
    return 0;
}



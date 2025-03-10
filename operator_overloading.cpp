#include<iostream>
#include<string.h>
using namespace std;


class Array
{
    private:
       int* p;
       int size;
    public:
       Array() {}
       ~Array() { 
     cout<<"deallocate memory of array"<<endl;
    }
       Array(int* pointer,int n):p(pointer),size(n)
       {}
       void show_result();   

};
void Array::show_result()
{
    for(int i=0;i<size;i++)
    cout<<p[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    Array a1(arr,5);
    a1.show_result();
    return 0;
}


// class distance
// {
//     private:
//        int km,m,cm;
//     public:
//        distance() {}
//        distance(int a,int b,int c):km(a),m(b),cm(c)
//        {}
//        distance operator+(distance);
//        void normalize();
//        void show_result();
//        distance operator--();
// };
// class distance distance::operator--()
// {
//     distance temp;
//     temp.cm=--cm;
//     temp.m=m;
//     temp.km=km;
//     return temp;
// }
// void distance::show_result()
// {
//     cout<<"result:"<<km<<" km "<<m<<" m "<<cm<<" cm"<<endl;
// }
// void distance::normalize()
// {
//     if(cm>=1000)
//     {
//         m+=cm/1000;
//         cm%=1000;
//     }
//     if(m>=1000)
//     {
//         km+=m/1000;
//         m%=1000;
//     }
// }
// class distance distance::operator+(distance d)
// {
//     distance temp;
//     temp.cm=cm+d.cm;
//     temp.m=m+d.m;
//     temp.km=km+d.km;
//    return temp;
// }
// int main()
// {
//     class distance d1(2,533,848),d2(5,864,345);
//     class distance d3=d1+d2;
//     class distance d4= --d1;
//     d4.show_result();
//     d3.normalize();
//     d3.show_result();
//     return 0;
// } 


// long hcf(long n,long d)
// {
//     long i;
//    for(i=n>d?d:n;i>=1;i--)
//    {
//       if(n%i==0 && d%i==0)
//       break;
//    }
//    return i;
// }

// class fraction
// {
//     private:
//         long numerator;
//         long denominator;
//     public:
//         fraction(long n=0,long d=1):numerator(n),denominator(d)
//         {}
//         fraction operator+(fraction);
//         int operator<(fraction);
//         void show_result();
// };
// int fraction::operator<(fraction f)
// {
//     if(numerator*f.denominator>f.numerator*denominator)
//     return 1;
//     else
//     return 0;
     
// }
// fraction fraction::operator+(fraction f)
// {
//     fraction temp;
//     temp.numerator=numerator*f.denominator+f.numerator*denominator;
//     temp.denominator=denominator*f.denominator;
//     long h=hcf(temp.numerator,temp.denominator);
//     temp.numerator/=h;
//     temp.denominator/=h;
//     return temp;
// }
// void fraction::show_result()
// {
//     cout<<"fraction:"<<"numerator="<<numerator<<" "<<"denominator="<<denominator<<endl;
// }
// int main()
// {
//     fraction f1(3,6),f2(3,12);
//     if(f1<f2==1)
//     cout<<"f1 is greater"<<endl;
//     else
//     cout<<"f2 is greater"<<endl;
//     fraction f3=f1+f2;
//     cout<<"sum of both fractions:"<<endl;
//     f3.show_result();
//     return 0;
// }

// class matrix
// {
//     private:
//        int a[3][3];
//     public:
//        matrix(int arr[][3],int n)
//        { 
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<3;j++)
//             a[i][j]=arr[i][j];
//         }
//        }
//        void show_matrix();
// };
// void matrix::show_matrix()
// {
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         cout<<a[i][j]<<" ";
//         cout<<endl;
//     }
// }
// int main()
// {
//     int array1[3][3]={{1,2,3},{2,3,4},{3,4,5}};
//     int array2[3][3]={{4,5,6},{5,6,7},{6,7,8}};
//     matrix m1(array1,3),m2(array2,3);
//     m1.show_matrix();
//     m2.show_matrix();
//     return 0;
// }


// class time
// {
//     private:
//         int hour,min,sec;
//     public:
//         time() {}
//         time(int x,int y,int z):hour(x),min(y),sec(z)
//         {}
//         int operator>(time);
//         void operator++();
//         time operator+(time);
//         void show_time();
//         void normalize();
// };
// class time time::operator+(time t)
// {
//     time temp;
//     temp.hour=hour+t.hour;
//     temp.min=min+t.min;
//     temp.sec=sec+t.sec;
//     return temp;
// }
// void time::operator++()
// {
//     sec++;
// }
// void time::show_time()
// {
//     cout<<hour<<":"<<min<<":"<<sec<<endl;
// }
// int time::operator>(time c)
// {
//     if(hour>c.hour)
//     return 1;
//     else if(hour==c.hour)
//     {
//         if(min>c.min)
//         return 1;
//         else if(min==c.min)
//         {
//             if(sec>c.sec)
//             return 1;
//             else if(sec==c.sec)
//             return -1;
//             else 
//             return 0;
//         }
//         else return 0;
//     }
//     else return 0;
// }
// void time::normalize()
// {
//     if(sec>60)
//     {
//         min+=sec/60;
//         sec%=60;
//     }
//     if(min>60)
//     {
//         hour+=min/60;
//         min%=60;
//     }
//     if(hour>24)
//     hour-=24;
// }


// int main()
// {
//     class time t1(3,55,56),t2(3,55,56),t3(4,3,5);
//     if(t1>t2==1)
//     cout<<"t1 is greater"<<endl;
//     else if(t1>t2==0)
//     cout<<"t2 is greater"<<endl;
//     else
//     cout<<"t1 and t2 are same"<<endl;
//     ++t3;
//     t3.show_time();
//     class time t4=t1+t2;
//     t4.normalize();
//     t4.show_time();
//     return 0;
// }

// class complex 
// {
//     private:
//        int a,b;
//     public:
//        complex() {}
//        complex(int x,int y): a(x),b(y)
//        {}
//        complex operator +(complex);
//        complex operator -(complex);
//        complex operator *(complex);
//        bool operator ==(complex);   
//        void show_result();
// };

// complex complex::operator+(complex c)
// {
//    complex temp;
//    temp.a=a+c.a;
//    temp.b=b+c.b;
//    return temp;
// }
// complex complex::operator-(complex c)
// {
//     complex temp;
//     temp.a=a-c.a;
//     temp.b=b-c.b;
//     return temp;
// }
// complex complex::operator*(complex c)
// {
//     complex temp;
//     temp.a=a*c.a-b*c.b;
//     temp.b=a*c.b+b*c.a;
//     return temp;
// }
// bool complex::operator==(complex c)
// {
//     if(a==c.a && b==c.b)
//     return true;
//     else 
//     return false;
// }
// void complex::show_result()
// {
//     cout<<"a="<<a<<" b="<<b<<endl;
// }
// int main()
// {
//     complex c1(2,3),c2(5,2);
//     complex c3=c1+c2;
//     complex c4=c1-c2;
//     complex c5=c1*c2;
//     bool c = c1==c2;
    
//     c3.show_result();
//     c4.show_result();
//     c5.show_result();
//     if(c==true)
//     cout<<"c1 and c2 are equal"<<endl;
//     else 
//     cout<<"c1 and c2 are not equal"<<endl;
//     return 0;
// }
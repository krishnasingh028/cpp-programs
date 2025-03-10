#include<iostream>
#include<string.h>
using namespace std;

class cordinate
{
    private:
      int x,y;
    public:
      cordinate(int a,int b):x(a),y(b)
      {}
      double getdistance()
      {
        return sqrt(x*x+y*y);
      }  
      double getdistance(cordinate temp)
      {
        return sqrt((x-temp.x)*(x-temp.x)+(y-temp.y)*(y-temp.y));
      }
      void showcordinate()
      {
        cout<<"x="<<x<<" y="<<y<<endl;
      }
};
class shape:public cordinate
{
   private:
       char shapename[20];
   public:
       void setter(char* name)
       {
        strcpy(shapename,name);
       }    
       void setline(int m,int n)
       {
        cordinate(m,n);
       }
       void showline()
       {
           showcordinate();
       }
       void getter()
       {
        cout<<shapename<<endl;
       }
};


int main()
{
    cordinate c1(2,3),c2(3,4);

    s.setter("straight line");
    s.getter();
    s1.setline(2,3);
    s2.setline(3,4);
    s1.showline();
    s1.showline();
    s1.getdistance(s2);

    double dis=c2.getdistance();
    double dist=c1.getdistance(c2);
    cout<<dis<<" "<<dist<<endl;
    return 0;
}

// class Circle
// {
//     private:
//        int radius;
//     public:
//        void setRadius(int rad) 
//        {
//          radius=rad;
//        } 
//        void getRadius()
//        {
//         cout<<"Radius="<<radius<<endl;
//        } 
//        int radii()
//        {
//         return radius;
//        }
//        virtual void getArea()
//        {
//         cout<<"Area="<<3.14*radius*radius<<endl;
//        }
// };
// class Thickcircle:public Circle
// {
//     private:
//        int thickness;
//     public:
//        void setThickness(int t)
//        {
//         thickness=t;
//        }   
//        void setdata(int rad)
//        {
//         setRadius(rad);
//        }
//        void getdata()
//        {
//          getRadius();
//        }
//        void getThickness()
//        {
//         cout<<"thickness="<<thickness<<endl;
//        }
//        void getArea()
//        {
//          cout<<"area:"<<3.14*(radii()+thickness)*(radii()+thickness)<<endl;
//        }
// };
// int main()
// {
//     Circle* c;
//     Thickcircle t;
//     c=&t;
//     t.setRadius(2);
//     // t.setdata(2);
//     t.getRadius();
//     t.getdata();
//     t.setThickness(1);
//     t.getThickness();
//     c->getArea();

// }


// class person
// {
//     private:
//        int age;
//        char name[20];
//     protected:
//        void setter(int ag,char* nam)
//        {
//         age=ag;
//         strcpy(name,nam);
//        }
//        void getter()
//        {
//         cout<<"age="<<age<<" name="<<name<<endl;
//        }
// };
// class employee:public person
// {
//     private:
//        float salary;
//     public:
//     void setEmployee(int age,char* name,float salry)
//     {
//         setter(age,name);
//         salary=salry;
//     }
//     void showEmployee()
//     {
//         getter();
//         cout<<"salary="<<salary<<endl;
//     }
// };

// int main()
// {
//     employee e;
//     e.setEmployee(19,"shashank",345.23);
//     e.showEmployee();
//     return 0;
// }         




// class person{
//     private:
//          char name[20];
//          int age;
//     protected:
//         void setter(char* nam,int ag)
//         {
//             strcpy(name,nam);
//             age=ag;
//         }
//         void getter()
//         {
//             cout<<"age="<<age<<",name="<<name<<endl;
//         }
              
// };
// class employee:public person
// {
//     private:
//          float salary;
//     public:
//          void set_employee(int,char* str,float);
//          void showemployee()
//          {
//             getter();
//             cout<<"salary="<<salary<<endl;
//          }

// };
// void employee::set_employee(int age,char* name,float salry)
// {
//      setter(name,age);
//      salary=salry;
// }
// int main()
// {
//     employee e;
//     e.set_employee(18,"shashank",3250.00);
//     e.showemployee();
//     return 0;
// }
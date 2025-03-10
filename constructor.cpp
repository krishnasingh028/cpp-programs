#include<iostream>
#include<string.h>
using namespace std;

class Numbers
{
    private:
      int size;
      int* arr;
    public:
      Numbers(int size)
      {
        this->size=size;
        arr=new int[size];
      }  
      ~Numbers()
      {
        delete []arr;
      }
      Numbers(Numbers &N)
      {
        size=N.size;
        arr=new int[size];
        for(int i=0;i<size;i++)
        arr[i]=N.arr[i];
      }
      void setArray();
      void showArray();
};
void Numbers::setArray()
{
    for(int i=0;i<size;i++)
    cin>>arr[i];
}
void Numbers::showArray()
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    Numbers n1(5);
    n1.setArray();
    Numbers n2=n1;
    n2.showArray();
    return 0;
}

// class Room
// {
//     private:
//        int room_no;
//        char room_type[20];
//        bool is_AC;
//        float price;
//     public:
//        Room(int n,char* r,bool d,float p)
//        {
//           room_no=n;
//           strcpy(room_type,r);
//           is_AC=d;
//           price=p;
//        }  
//        void room_details(); 
// };
// void Room::room_details()
// {
//     cout<<endl;
//     cout<<"Room details will be "<<endl;
//     cout<<"room_no:"<<room_no<<endl;
//     cout<<"room_type:"<<room_type<<endl;
//     if(is_AC==true)
//     cout<<"room with AC"<<endl;
//     else 
//     cout<<"room without AC"<<endl;
//     cout<<"price:"<<price<<endl;
// }
// int main()
// {
//     Room r(101,"single room",false,5952.54);
//     r.room_details();
//     return 0;
// }

// class date
// {
//     private:
//         int d,m,y;
//     public:
//         date(int date,int month,int year):d(date),m(month),y(year)     
//          {}
//          void show_date();
// };
// void date::show_date()
// { 
//       cout<<"date will be "<<d<<"-"<<m<<"-"<<y<<endl;
// }

// int main()
// {
//     date d(12,12,2012);
//     d.show_date();
//     return 0;
// }


// class student
// {
//     private:
//         int roll_no;
//         char name[20];
//         long long int mob_no;
//         char email_id[50];
//     public:
//         student(int roll,char* n,long long int mob,char* email)
//         {
//             roll_no=roll;
//             strcpy(name,n);
//             mob_no=mob;
//             strcpy(email_id,email);
//         }
//         void show_details();    
// };
// void student::show_details()
// {
//     cout<<"roll_no:"<<roll_no<<endl;
//     cout<<"name:"<<name<<endl;
//     cout<<"mob_no:"<<mob_no<<endl;
//     cout<<"email_id:"<<email_id<<endl;
// }
// int main()
// {
//     student s(108,"shashank singh",9191919191,"shashanksingh@gmail.com");
//     s.show_details();
//     return 0;
// }


// class complex
// {
//        int a,b;
//     public:
//        complex(int x,int y)  { a=x ; b=y; }
//        void display_data(); 
// };
// void complex::display_data()
// {
//     cout<<"a="<<a<<" b="<<b<<endl;
// }

// int main()
// {
//     complex c[5]={complex(1,2),complex(2,3),complex(3,4),complex(4,5),complex(5,6)};
//     for(int i=0;i<5;i++)
//     c[i].display_data();
//     return 0;
// }

// class book
// {  
//        int id;
//        char name[50];
//        float price;
//     public:
//        book() {}
//        book(int b_id,char* nm,float pr)
//        {
//           id=b_id;
//           strcpy(name,nm);
//           price=pr;
//        }
//        void set_bookdetails(int,char*,float);
//        void show_bookdetails();
// };
// void book::set_bookdetails(int x,char* y,float z)
// {
//     id=x;
//     strcpy(name,y);
//     price=z;
// }
// void book::show_bookdetails()
// {
//     cout<<"book_id:"<<id<<endl;
//     cout<<"book_name:"<<name<<endl;
//     cout<<"book_price:"<<price<<endl;
// }
// int main()
// {
//     book b1(101,"my name is shashank",450.50),b2;
//     b1.show_bookdetails();
//     cout<<endl;
//     cout<<"enter book_id,name and price:";
//     int b;
//     char na[50];
//     float pr;
//     cin>>b;
//     cin.ignore();
//     cin.getline(na,50);
//     cin>>pr;
//     b2.set_bookdetails(b,na,pr);
//     b2.show_bookdetails();
//     return 0;
// }

// class time
// {
//        int hr,min,sec;
//     public:
//     time(int h,int m,int s)
//     {
//         hr=h;
//         min=m;
//         sec=s;
//     }
//        void normalize();
//        void show_time();
// };
// void time::show_time()
// {
//     cout<<"time will be "<<hr<<":"<<min<<":"<<sec<<endl;
// }
// void time::normalize()
// {
//    if(sec>60)
//    {
//      min+=sec/60;
//      sec%=60;
//    }
//    if(min>60)
//    {
//     hr+=min/60;
//     min%=60;
//    }
//    if(hr>24)
//    hr-=24;
// }

// int main()
// {
//     class time t(2,134,143);
//     t.normalize();
//     t.show_time();
//     return 0;
// }
// class customer
// {
//         int cust_id;
//         long long int mob_no;
//         char name[20],email[50];
//     public:
//         customer()  {}
//         customer(int c,char* n,char* e,long long int m)
//         {
//             cust_id=c;
//             strcpy(name,n);
//             strcpy(email,e);
//             mob_no=m;         
//         }
//        void show_customer();
// };
// void customer::show_customer()
// {
//     cout<<"customer_id:"<<cust_id<<" name:"<<name<<" email:"<<email<<" mobile no:"<<mob_no<<endl;
// }
// int main()
// {
//     customer c(101,"shashank","shashanksingh@gmail.com",9191919191);
//     c.show_customer();
//     return 0;
// }

// class cuboid 
// {
//         int length,breadth,height;
//     public:
//          cuboid(int x,int y,int z)  
//          { 
//             length=x;
//             breadth=y ;
//             height=z; 
//          }
//          void show_data();
// };
// void cuboid::show_data()
// {
//     cout<<"length="<<length<<" breadth="<<breadth<<" height="<<height<<endl;
// }
// int main()
// {
//     cuboid c(2,3,5);
//     c.show_data();
// return 0;
// }

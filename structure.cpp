#include<iostream>
using namespace std;

struct student
{
    int roll_no;
    char name[20];
    float id;
};

void input_data(student*);
void display_data(student*,int);

int main()
{
    student s[5];
    cout<<"enter information of 5 students:";
    for(int i=0;i<5;i++)
    input_data(&s[i]);
    display_data(s,5);
    return 0;
    
}
void input_data(student* std)
{
    cin>>std->roll_no;
    cin.ignore();
    cin.getline(std->name,20);
    cin>>std->id;
    cout<<endl;
}

void display_data(student* std,int size)
{
    for(int i=0;i<size;i++)
    cout<<" "<<std[i].roll_no<<" "<<std[i].name<<" "<<std[i].id<<endl;
}


struct employee
{
    int id;
    char name[20];
    float salary;
};

void inputdata(employee*);
void sorting_data(employee*);

int main()
{
    employee e[5];
    cout<<"enter data of 5 employee:";
    for(int i=0;i<5;i++)
    inputdata(&e[i]);
    sorting_data(e);
    return 0;
}
void inputdata(employee* emp)
{
    cin>>emp->id;
    cin.ignore();
    cin.getline(emp->name,20);
    cin>>emp->salary;
    cout<<endl;
}
void sorting_data(employee* emp)
{
   for(int i=0;emp[i].salary;i++)
   {
    for(int j=i+1;emp[j].salary;j++)
    {
        if(strcmp(emp[i].name,emp[j].name)>0)
        {
            employee temp=emp[i];
            emp[i]=emp[j];
            emp[j]=temp;
        }
    }
   }
   for(int i=0;emp[i].salary;i++)
   cout<<emp[i].id<<" "<<emp[i].name<<" "<<emp[i].salary<<endl;
}


void inputdata(employee*);
void sorting_data(employee*);

int main()
{
    employee e[5];
    cout<<"enter data of 5 employee:";
    for(int i=0;i<5;i++)
    inputdata(&e[i]);
    sorting_data(e);
    return 0;
}
void inputdata(employee* emp)
{
    cin>>emp->id;
    cin.ignore();
    cin.getline(emp->name,20);
    cin>>emp->salary;
    cout<<endl;
}
void sorting_data(employee* emp)
{
   for(int i=0;emp[i].salary;i++)
   {
    for(int j=i+1;emp[j].salary;j++)
    {
        if(emp[i].salary>emp[j].salary)
        {
            employee temp=emp[i];
            emp[i]=emp[j];
            emp[j]=temp;
        }
    }
   }
   for(int i=0;emp[i].salary;i++)
   cout<<emp[i].id<<" "<<emp[i].name<<" "<<emp[i].salary<<endl;
}

void inputdata(employee* emp);
float highestsalary(employee emp[],int);

int main()
{
    employee e[3];
    cout<<"enter data of 3 employee:";
    for(int i=0;i<3;i++)
     inputdata(&e[i]);
    cout<<"highest salary:"<<highestsalary(e,3)<<endl;
    return 0;
}
void inputdata(employee* emp)
{
    cin>>emp->id;
    cin.ignore();
    cin.getline(emp->name,20);
    cin>>emp->salary;
}
float highestsalary(employee emp[],int size)
{
    float max=emp[0].salary;
    for(int i=1;i<size;i++)
    {
        if(max<emp[i].salary)
        max=emp[i].salary;
    }
    return max;
}


void inputdata(employee* e);
void displaydata(employee e);

int main()
{
    employee e1;
    inputdata(&e1);
    // displaydata(e1);
    cout<<"enter employee id,name and salary are"<<endl;
    cout<<e1.id<<endl;
    cout<<e1.name<<endl;
    cout<<e1.salary<<endl;
    return 0;
}
void inputdata(employee* e)
{
    cin>>e->id;
    cin.ignore();
    cin.getline(e->name,20);
    cin>>e->salary;
}
void displaydata(employee e)
{
    cout<<"employee id,name and salary are "<<endl;
    cout<<e.id<<endl;
    cout<<e.name<<endl;
    cout<<e.salary<<endl;
}

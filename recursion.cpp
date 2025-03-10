#include<iostream>
using namespace std;
void natural_number(int);
void reverse_natural(int);
void natural_odd_number(int);
void reverse_odd(int);
void natural_even_number(int);
void reverse_even_number(int);
void first_natural_square(int);
void print_binary(int);
void print_octal(int);
void reverse_number(int);
int sum_natural(int);
int sum_odd(int);
int sum_even(int);
int sum_square(int);
int sum_digit(int);
int factorial(int);
int hcf(int,int);
void fibonacci(int);
int findfibo(int);
int count_digits(int);
int Power(int,int);
int main()
{
    int num1,num2,number;
    int num,power;
    // cout<<"enter a number:";
    // cin>>num;
    // natural_number(num);
    // reverse_natural(num);
    // natural_odd_number(num);
    // reverse_odd(num);
    // natural_even_number(num);
    // reverse_even_number(num);
    // first_natural_square(num);
    // cout<<"enter a decimal number:";
    // cin>>number;
    // print_binary(number);
    // print_octal(number);
    // reverse_number(number);
    // cout<<sum_natural(number)<<endl;
    // cout<<sum_odd(number)<<endl;
    // cout<<sum_even(number)<<endl;
    // cout<<sum_square(number)<<endl;
    cout<<"enter number and power value to find result:"<<endl;
    // cin>>number;
    cin>>num>>power;
    cout<<"result value:"<<Power(num,power)<<endl;
    // cout<<"total digits:"<<count_digits(number)<<endl;,
    // fibonacci(number-1);
    // cout<<"factorial:"<<factorial(number)<<endl;
    // cout<<"enter two numbers:"<<endl;
    // cin>>num1>>num2;
    // cout<<"hcf:"<<hcf(num1,num2)<<endl;
    // cout<<"sum:"<<sum_digit(number)<<endl;
    return 0;
}
void natural_number(int n)
{
    if(n!=1)
      natural_number(n-1);
    cout<<n<<endl;
}
void reverse_natural(int n)
{
    if(n)
    {
        cout<<n<<endl;
        reverse_natural(n-1);
    }
}
void natural_odd_number(int n)
{
    if(n!=1)
       natural_odd_number(n-1);
    cout<<2*n-1<<endl;   
}
void reverse_odd(int n)
{
    if(n)
    {
        cout<<2*n-1<<endl;
        reverse_odd(n-1);
    }
}
void natural_even_number(int n)
{
    if(n!=1)
      natural_even_number(n-1);
    cout<<2*n<<endl;  
}
void reverse_even_number(int n)
{
    if(n)
    {
        cout<<2*n<<endl;
        reverse_even_number(n-1);
    }
}
void first_natural_square(int n)
{
    if(n!=1)
       first_natural_square(n-1);
    cout<<n*n<<endl;   
}
void print_binary(int n)
{
    if(n)
    {
       print_binary(n/2);
       cout<<n%2;
    }
}
void print_octal(int n)
{
    if(n)
    {
        print_octal(n/8);
        cout<<n%8;
    }
}
void reverse_number(int n)
{
    if(n)
    {
       cout<<n%10;
       reverse_number(n/10);
    }
}
int sum_natural(int num)
{
    if(num==1)
      return 1;
    else
      return num+sum_natural(num-1);  
}
int sum_odd(int num)
{
    if(num==1)
      return 1;
    else
      return 2*num-1+sum_odd(num-1);  
}
int sum_even(int num)
{
    if(num==1)
       return 2;
    else  
       return 2*num+sum_even(num-1);
}
int sum_square(int num)
{
    if(num==1)
       return 1;
    else
       return num*num+sum_square(num-1);    
}
int sum_digit(int num)
{
    int sum=0;
    if(num)
      sum=num%10+sum_digit(num/10);
    return sum;  
}
int factorial(int num)
{
    if(num==1)
       return 1;
    else
       return num*factorial(num-1);   
}
// int hcf(int n1,int n2)
// {
//     int h=n1<n2?n1:n2;
//     if(n1%h==0 && n2%h==0)
//        return h;
//     else
//        return        
// }
int findfibo(int num)
{
    if(num==0 || num==1)
      return num; 
    else
      return findfibo(num-1)+findfibo(num-2);
}
void fibonacci(int N)
{
    if(N>=0)
    {
        fibonacci(N-1);
        cout<<findfibo(N)<<endl;
    }
}
int count_digits(int num)
{
    int count=0;
    if(num)
    {
       count=count_digits(num/10)+1;
    }  
    return count;
}
int Power(int num,int power)
{
    if(power==1)
       return num;
    else
       return num*Power(num,power-1);   
}
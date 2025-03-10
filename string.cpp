#include<iostream>
#include<string>
using namespace std;
int length(char s[],int);
void comparestring(char str1[],char str2[],int);
int countvowels(char str[],int);
int findcharacter(char str[],int,int,int,char);
int alphanumeric(char str[],int);
int palindrome(char str[],int);
void trim_string(char str[],int);
int countwords(char str[],int);
void reversestring(char str[],int);
void countfrequency(char str[],int);
int findword(char str[],char word[],int,int);
void capital(char str[],int);
int countspace(char str[],int);
void acronym_name(char str[],int,int);
void concatinate(char str1[],char str2[],int);
int countvowels(char str[][20],int);
void sorting(char city[][20],int);
void storewords(char str[],int);
void removeduplicate(char name[][20],int);
void storewords(char str[],int);
char repeatingcharacter(char str[],int);
void store_word(char str[],int);
void checkmail(char str[][50],int);
int anagram(char str1[],char str2[],int,int);

int main()
{
    char s1[20],s2[20];
    cout<<"enter 1st string:";
    cin.getline(s1,20);
    cout<<"enter 2nd string:";
    cin.getline(s2,20);
   if(anagram(s1,s2,strlen(s1),strlen(s2))==1)
   cout<<s1<<" and "<<s2<<" are anagram"<<endl;
   else 
   cout<<s1<<" and "<<s2<<" are  not anagram"<<endl;
   return 0;
}
int anagram(char str1[],char str2[],int size1,int size2)
{
    if(size1!=size2)
    return 0;
    else
    {
        int i,j;
        for(i=0;i<size1;i++)
        {
            for(j=0;j<size2;j++)
            {
               if(str1[i]==str2[j])
               break;
            }
            if(j==size2)
            return 0;
        }
        if(i==size1)
        return 1;
    }
}

int main()
{
    char s[5][50];
    cout<<"enter 5 email id:";
    for(int i=0;i<5;i++)
    cin.getline(s[i],50);
    checkmail(s,5);
    return 0;
}
void checkmail(char str[][50],int n)
{
    char mail[20]="gmail.com";
    cout<<endl;
    cout<<"so mail belongs to gmail.com are:"<<endl;
    for(int i=0;i<n;i++)
    {
        int l=0;
        for(int j=0;j<strlen(str[i]);j++)
        {
            if(str[i][j]==mail[l])
            l++;
        }
        if(l==strlen(mail))
        cout<<str[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    char s[100];
    cout<<"enter a string:";
    cin.getline(s,100);
    store_word(s,strlen(s));
    return 0;
}
void store_word(char str[],int size)
{
    int i=0;
   char b[10][20];
   for(int l=0,j=0;l<=size;l++,j++)
   {
      b[i][j]=str[l];
      if(str[l]==' '||str[l]=='\0')
      {
        b[i][j]='\0';
        j= -1;
        if(b[i][0]=='a')
        i++;
      }
   } 
   for(int l=0;l<i;l++)
   cout<<b[l]<<endl;
}


int main()
{
    char s[100];
    cout<<"ente a string:";
    cin.getline(s,100);
    cout<<"most repeating character is "<<repeatingcharacter(s,strlen(s))<<endl;
    return 0;
}
char repeatingcharacter(char str[],int size)
{
    int count[size];
    for(int i=0;i<size;i++)
    {
        int l=1;
        for(int j=i+1;j<size;j++)
        {
            if(str[i]==str[j])
             ++l;
        }
        count[i]=l;
    }
    int max=count[0],z=0;
    for(int i=1;i<size;i++)
    {
        if(max<count[i])
        {
            max=count[i];
           z=i;
        }
    }
    return str[z];
}

int main()
{
    char s[100];
    cout<<"enter a string:";
    cin.getline(s,100);
    storewords(s,strlen(s));
    return 0;
}
void storewords(char str[],int size)
{
   char b[10][20];
   int i=0;
   for(int l=0,j=0;l<=size;l++,j++)
   {
      b[i][j]=str[l];
      if(str[l]==' ' || str[l]=='\0')
      {
        if(str[l-1]=='s')
        {
            b[i][j]='\0';
            i++;
        }
        j=-1;
      }
   }
   for(int l=0;l<i;l++)
   cout<<b[l]<<endl;
}

int main()
{
    int n;
    cout<<"how many names you have enter:";
    cin>>n;
    cin.ignore();
    char s[n][20];
    cout<<"enter "<<n<<" names:";
    for(int i=0;i<n;i++)
    cin.getline(s[i],20);
    cout<<endl;
    removeduplicate(s,n);
    return 0;
}
void removeduplicate(char name[][20],int k)
{
    char temp[]="xyz";
   for(int i=0;i<k;i++)
   {
       if(strcmp(name[i],temp)!=0)
       {
           for(int j=i+1 ; j<k ; j++)
           {
              if(strcmp(name[i],name[j])==0)
               strcpy(name[j],temp);
           }
          cout<<name[i]<<endl;
       }
   }
}

int main()
{
    char s[50];
    cout<<"enter a string:";
    cin.getline(s,50);
    storewords(s,strlen(s));
    return 0;
}
void storewords(char str[],int size)
{
    int i,j,l=0;
    char word[20][20];
    for(i=0;str[l];i++,l++)
    {
        for(j=0; str[l]!=' ' && str[l]!='\0' ;j++,l++)
            word[i][j]=str[l];
          word[i][j]='\0';  
          if(str[l]=='\0')
          break;
    }
   for(int l=0;l<=i;l++)
   cout<<word[l]<<endl;
}

int main()
{
    char c[10][20];
    cout<<"enter 10 city names:";
    for(int i=0;i<10;i++)
    cin.getline(c[i],20);
    sorting(c,10);
    return 0;
}
void sorting(char city[][20],int n)
{
    char temp[20];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(city[i],city[j])>0)
            {
               strcpy(temp,city[i]);
               strcpy(city[i],city[j]);
               strcpy(city[j],temp);
             }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<city[i]<<endl;
}

int main()
{
    char s[5][20];
    cout<<"enter 5 strings:";
    for(int i=0;i<5;i++)
    cin.getline(s[i],20);
    cout<<"total no. of vowels in given strings are "<<countvowels(s,5)<<endl;
    return 0;
}
int countvowels(char str[][20],int n)
{
    int count=0;
    for(int i=0;i<5;i++)
    {
       for(int j=0;j<strlen(str[i]);j++)
       {
          if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'||
          str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U')
          count++;
       } 
    }
    return count;
}

  
int main()
{
    char s1[10]="rama ";
    char s2[5]="raju";
    concatinate(s1,s2,4);
    return 0;
}
void concatinate(char str1[],char str2[],int size)
{
    strcat(str1,str2);
    cout<<str1<<endl;
} 

int main()
{
    char s[100];
    cout<<"enter a string:";
    cin.getline(s,100);
     int l=countspace(s,strlen(s));
    acronym_name(s,strlen(s),l);
    return 0;
}
void acronym_name(char str[],int size,int space)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(i==0)
        cout<<str[i]<<" ";
        else if(str[i-1]==' ')
        { 
            count++;
            if(count==space)
            cout<<str[i];
            else
            cout<<str[i]<<" ";
        }
        else if(count==space)
        cout<<str[i];
    }
    cout<<endl;
}
int countspace(char str1[],int size1)
{
    int count=0;
    for(int i=0;i<size1;i++)
    {
        if(str1[i]==' ')
        count++;
    }
    return count;
}

int main()
{
    char s[100];
    cout<<"enter a string:";
    cin.getline(s,100);
    capital(s,strlen(s));
    return 0;
}
void capital(char str[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(i==0 || str[i-1]==' ')
        {
           if(str[i]>='a' && str[i]<='z')
           str[i]-=32;
        }
    }
    cout<<str<<endl;
}

int main()
{
    char s[100];
    cout<<"enter a string:";
    cin.getline(s,100);
    countfrequency(s,strlen(s));
    return 0;
}
void countfrequency(char str[],int size)
{
    for(int i=0;i<size;i++)
    {
        int count=1;
        for(int j=i+1;j<size;j++)
        {
            if(str[i]==str[j] && str[i]!=0)
            {
               count++;
               str[j]= 0;
            }
        }
        if(str[i]!=0)
        cout<<str[i]<<":"<<count<<" times"<<endl;
    }
}

int main()
{
    char s[100];
    cout<<"enter a string:";
    cin.getline(s,100);
    reversestring(s,strlen(s));
    return 0;
}
void reversestring(char str[],int size)
{
    int i,j,k;
    char b[10][20];
    for(i=0, k=0 ; str[k] ;i++,k++)
    {
        for(j=0 ; str[k]!=' ' && str[k]!='\0';j++,k++)
            b[i][j]=str[k];
        b[i][j]='\0'; 
         if(str[k] == '\0')
           break;
    }
    for(int l=i;l>=0;l--)
    cout<<b[l]<<" ";
    cout<<endl;
}

int main()
{
    char s[100];
    cout<<"enter a string:";
    cin.getline(s,100);
    cout<<"total no. of words in "<<"\""<<s<<"\""<<" are "<<countwords(s,strlen(s))<<endl;
    return 0;
}
int countwords(char str[],int size)
{
    int i,count=0;
    for(i=1;i<size;i++)
    {
        if(str[i]==' ' && str[i-1]!=' ')
        count++;
    }
    if(str[i]=='\0' && str[i-1]!=' ' && i-1>0)
    count++;
    return count;
}

int main()
{
    char s[100];
    cout<<"enter a string:";
    cin.getline(s,100);
    trim_string(s,strlen(s));
    return 0;
}
void trim_string(char str[],int size)
{
    int i,j,k;
    char b[size];
    for(i=0;i<size;i++)
    {
        if(str[i]!=' ')
         break;
    }
    for(j=size-1;j>=0;j--)
    {
        if(str[j]!=' ')
        break;
    }
    for(int l=0,k=i;k<=j;k++,l++)
     b[l]=str[k]; 
     cout<<b<<endl;
}

int main()
{
    char s[20];
    cout<<"enter a string:";
    cin.getline(s,20);
    if(palindrome(s,strlen(s))==1)
    cout<<s<<" is  a palindrome"<<endl;
    else
    cout<<s<<" is not a palindrome"<<endl;
    return 0;
}
int palindrome(char str[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(str[i]!=str[size-i-1])
        break;
    }
    if(i<size)
    return 0;
    else
    return 1;
}

int main()
{
    char s[100];
    cout<<"enter a string:";
    cin.getline(s,100);
    if(alphanumeric(s,strlen(s))==1)
    cout<<s<<" is an alphanumric"<<endl;
    else
    cout<<s<<" is not an alphanumric"<<endl;
    return 0;
}
int alphanumeric(char str[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||
        str[i]=='7'||str[i]=='8'||str[i]=='9')
        break;
    }
    if(i<size)
    return 1;
    else
    return 0;
}

int main()
{
     char s[100];
     cout<<"enter a string:";
     cin.getline(s,100);
     int a,b;
     cout<<"enter two specified indices";
     cin>>a>>b;
     char c;
     cout<<"enter a character:";
     cin>>c;
     if(findcharacter(s,strlen(s),a,b,c)==1)
     cout<<s<<" contains "<<c<<" between "<<a<<" and "<<b<<endl;
     else
     cout<<s<<" doesn't contain "<<c<<" between "<<a<<" and "<<b<<endl;
    return 0;
}
int findcharacter(char str[],int size,int m,int n,char ch)
{
    int i;
    for(i=m;i<n;i++)
    {
        if(str[i]==ch)
        break;
    }
    if(i<n)
    return 1;
    else
    return 0;
}

int main()
{
    char s[100];
    cout<<"enter a string:";
    cin.getline(s,100);
    cout<<"total no. of vowels in "<<s<<" is "<<countvowels(s,100)<<endl;
    return 0;
}
int countvowels(char str[],int size)
{
    int count=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        count++;
    }
    return count;
}

int main()
{
    char s1[100],s2[100];
    cout<<"enter first string:";
    cin.getline(s1,100);
    cout<<"enter second string:";
    cin.getline(s2,100);
    comparestring(s1,s2,100);
    return 0;
}
void comparestring(char str1[],char str2[],int size)
{
    if(strcmp(str1,str2)>0)
    cout<<str1<<" comes after "<<str2<<endl;
    else 
    cout<<str1<<" come before "<<str2<<endl;
}

int main()
{
    char s[100];
    cout<<"enter a string:";
    cin.getline(s,100);
    cout<<"length of string is "<<length(s,100)<<endl;
    return 0;
} 
int length(char str[],int size)
{ 
    int i;
    for(i=0;str[i];i++)
    {}
    return i;
}

int main()
{
    int i;
    char str[100]="string";
    for(i=0;str[i];i++)
    {}
    cout<<"length of string is "<<i<<endl;
    return 0;
}

int main()
{
    int i;
    char str[100];
    cout<<"enter a string:";
    cin.getline(str,100);
    for(i=0;str[i];i++)
    {}
    cout<<"length of string is "<<i<<endl;
    return 0;
}

int main()
{
    int count=0;
    char str[20];
    cout<<"enter a string:";
    cin.getline(str,20);
    for(int i=0;str[i];i++)
    {
        if(str[i]==' ')
        count++;
    }
    cout<<"no. of spaces are "<<count<<endl;
    return 0;
}

int main()
{
    char str[100];
    cout<<"enter a string:";
    cin.getline(str,100);
    int l=strlen(str);
    for(int i=0;i<l/2;i++)
    {
         char temp=str[i];
         str[i]=str[l-1-i];
         str[l-i-1]=temp;
    }
    cout<<str<<endl;
    return 0;
}

int main()
{
    int i;
    char str[100]="amul dudh pita hai india";
    char ch='i';
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
        break;
    }
    cout<<"first occurance of "<<ch<<" in "<<str<<" is "<<i<<endl;
    return 0;
}

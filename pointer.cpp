#include<iostream>
using namespace std;
void swap(int*,int*);
void search_all_occurances(char*,char,int*);
void extract_string(char*,int,int,char*);
void swap_strings(char* str1,char* str2);
void sorting(int*,int);
void merge(int*,int,int*,int,int*);
int highest_mark(int**,int);

int main()
{
    int l,a[5][5];
    cout<<"enter marks of students:";
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        cin>>a[i][j];
    }
    int* p[5];
    for(int l=0,i=0;l<5;l++,i++)
     p[l]=a[i];

    cout<<"highest mark from all classes is "<<highest_mark(p,5)<<endl;
    return 0;
}
int highest_mark(int** ptr,int n)
{
    int max=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(max<ptr[i][j])
            max=ptr[i][j];
        }
    }
    return max;
}

int main()
{
    int size1,size2;
    cout<<"enter size of array1:";
    cin>>size1;
    int a1[size1];
    cout<<"enter elements of array1:";
    for(int i=0;i<size1;i++)
    cin>>a1[i];
    cout<<"enter size of array2:";
    cin>>size2;
    int a2[size2];
    cout<<"enter elements of array2:";
    for(int i=0;i<size2;i++)
    cin>>a2[i];
    int a3[size1+size2];
    merge(a1,size1,a2,size2,a3);
    return 0;
}
void merge(int* arr1,int s1,int* arr2,int s2,int* arr3)
{
    for(int i=0;i<s1+s2;i++)
    {
        if(i<s1)
        arr3[i]=arr1[i];
        else
        arr3[i]=arr2[i-s1];
    }
    for(int i=0;i<s1+s2;i++)
    {
        for(int j=i+1;j<s1+s2;j++)
        {
            if(arr3[i]>arr3[j])
            {
                int temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    for(int i=0;i<s1+s2;i++)
    cout<<arr3[i]<<" ";
    cout<<endl;
}

int main()
{
    int n;
    cout<<"enter value of n:";
    cin>>n;
    int a[n];
    cout<<"enter "<<n<<" elements:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    sorting(a,n);
    return 0;
}
void sorting(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    char s1[50],s2[50];
    cout<<"enter first string:";
    cin.getline(s1,50);
    cout<<"enter second string:";
    cin.getline(s2,50);
    swap_strings(s1,s2);
    return 0;
}
void swap_strings(char* str1,char* str2)
{
    char temp[50];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    cout<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;
}

int main()
{
    char s[50];
    cout<<"enter a string:";
    cin.getline(s,50);
    int start_index,end_index;
    cout<<"enter index values:";
    cin>>start_index>>end_index;
    char r[50];
    extract_string(s,start_index,end_index,r);
    return 0;
}
void extract_string(char* str,int i,int j,char* result)
{
    int l=0;
    for(int x=i;x<j;x++)
    {
      result[l]=str[x];
      l++;
    }
    result[l]='\0';
    cout<<"extract substring is "<<result<<endl;
}

int main()
{
    char s[50];
    cout<<"enter a string:";
    cin.getline(s,50);
    char c;
    cout<<"enter a character:";
    cin>>c;
    int a[10];
    search_all_occurances(s,c,a);
    return 0;
}
void search_all_occurances(char* str,char ch,int* arr)
{
    int l=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            arr[l]=i;
            l++;
        }
    }
    for(int i=0;i<l;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    swap(&a,&b);
    return 0;
}
void swap(int *m,int *n)
{
    int temp= *m;
    *m= *n;
    *n=temp;
    // cout<<*m<<" "<<*n<<endl;
}
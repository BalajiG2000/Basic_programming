//THIS PROGRAM IS WRITTEN BY BALAJI G
#include<iostream>
using namespace std;
int linsearch(int *p,int n,int k)
{   int flag=0;
    for(int i=0;i<n;i++)
    {
        if(*p==k)
        { flag++;
        return i;
        }
        *p++;
    }
    if(flag==0)
        return -1;
}
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY:: \n";
    cin>>n;
    int a[n];
    cout<<"ENTER THE ELEMENTS::\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH:: \n";
    cin>>k;
    int p=linsearch(&a[0],n,k);
    if(p!=-1)
    cout<<"ELEMENT FOUND AT INDEX: "<<p<<endl;
    else cout<<"ELEMENT NOT FOUND!!";
    return 0;
}

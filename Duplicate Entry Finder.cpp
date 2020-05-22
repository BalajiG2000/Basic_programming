//THIS PROGRAM IS WRITTEN BY BALAJI G
#include<iostream>
using namespace std;
int duplicate(int arr[], int n)
{
   int i,coun=0;
   for (i=0; i<n; i++)
    for(int j=i+1;j<n;j++)
      if (arr[i]==arr[j] )
        {  coun++;
        break;
        }
   return coun;
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
    int p = duplicate(a, n);
    cout << "NUMBER OF DUPLICATE ENTRIES FOUND::\n";
       cout << p <<endl;
    return 0;
}

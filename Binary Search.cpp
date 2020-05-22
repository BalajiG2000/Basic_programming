// THIS PROGRAM IS WRITTEN BY BALAJI G
#include <iostream>
using namespace std;
int binsearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binsearch(arr, l, mid - 1, x);
        return binsearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main(void)
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
    int least=0;
    int p=binsearch(a,least,n-1,k);
    if(p!=-1)
    cout<<"ELEMENT FOUND AT INDEX: "<<p<<endl;
    else cout<<"ELEMENT NOT FOUND!!";
    return 0;
}

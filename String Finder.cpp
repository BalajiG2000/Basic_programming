//This program is written by BALAJI G
#include <bits/stdc++.h>
using namespace std;
int n;
void fun(string a[],string b[])
{   for(int j=0;j<n;j++)
    {int count=0;
    size_t pos = a.find(b[j], 0);
    while(pos != string::npos)
    { count++;
      pos = a.find(b[j], pos+1);
    }if(count==0)
        cout<<a;
    }
}
int main()
{
    string a;
    cout<<"ENTER A SENTENCE::"<<endl;
    getline(cin,a);
    cout<<"ENTER THE NUMBER OF WORDS YOU KNOW::"<<endl;
    cin>>n;
    cout<<"ENTER THE WORDS YOU KNOW::"<<endl;
    string b[n];
    for(int i=0;i<n;i++)
        cin>>b[i];
    fun(a,b);

}

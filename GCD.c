//This program is written by BALAJI G
#include<stdio.h>
void GCD(int a,int b)
{   int i,s,hcf;
    if(a>b)
        s=b;
    else s=a;
    for(i=1;i<=s;i++)
    {
        if((a%i==0)&&(b%i==0))
        {
           hcf=i;
        }
    }
printf("The GCD of given numbers is %d\n",hcf);
}
int main()
{
    printf("Enter two numbers:\n");
    int x,y;
    scanf("%d %d",&x,&y);
    GCD(x,y);
}

//This program is written by BALAJI G
#include<stdio.h>
void fibo(int n)
{   printf("The fibonacci series is:\n");
    int fir=0,sec=1,nex,i;
    for(i=0;i<n-1;i++)
    {
        if(i<1)
            printf("%d\n%d\n",fir,sec);

        else
        {
            nex=fir+sec;
            fir=sec;
            sec=nex;
            printf("%d\n",nex);
        }
    }
}
int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    fibo(n);
}

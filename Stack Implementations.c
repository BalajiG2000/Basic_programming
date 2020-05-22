#include<stdio.h>
int size=5;
struct stack{
int a[5];
int top;
};
void push(struct stack *ptr)
{   int info;
    printf("ENTER THE VALUE TO PUSH INTO STACK: \n");
    scanf("%d",&info);
    if(ptr->top==size-1)
      {printf("STACK OVERFLOW!!");
       return;
      }
      ptr->top=ptr->top+1;
      ptr->a[ptr->top]=info;
      printf("%d is INSERTED INTO STACK\n",info);
}
int pop(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        printf("STACK IS EMPTY!\n");
        return;
    }
    int    item=ptr->a[ptr->top];
    ptr->top=ptr->top-1;
    return item;
}
void display(struct stack *ptr)
{   int i;
    if(ptr->top==-1)
    {
        printf("STACK IS EMPTY!\n");
        return;
    }
    for(i=ptr->top;i>0;i--)
        printf("  %d  \n",ptr->a[i]);
}
void main()
{
    struct stack *ptr;int choice;
    ptr=(struct stack*)malloc(sizeof(struct stack));
    int i,ar[size];
    ptr->top=-1;

    do
    {   printf("STACK OPERATIONS USING ARRAY::");
        printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push(ptr);
                break;
            }
            case 2:
            {
                pop(ptr);
                break;
            }
            case 3:
            {
                display(ptr);
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)\n");
            }

        }
    }
    while(choice!=4);
}

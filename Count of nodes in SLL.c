#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
struct Node
{
    int INFO;
    struct Node *NEXT;
};

struct Node * createNodeList(int n);
void displayList(struct Node *START);
void count(struct Node *START);

int main()
{
    int n;
	printf(" Input the number of Nodes : ");
    scanf("%d", &n);
    struct Node *START=createNodeList(n);
    displayList(START);
    count(START);
    getch();
    return 0;
}
struct Node *createNodeList(int n)
{
    struct Node * START=NULL;
	struct Node *New_Node, *temp;
    int num, i;
    if (n<=0)
    	return NULL;
    START = (struct Node *)malloc(sizeof(struct Node));
    if(START == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {

        printf(" Input data for Node 1 : ");
        scanf("%d", &num);
        START->INFO = num;
        START->NEXT = START;
        temp = START;

        for(i=2; i<=n; i++)
        {
            New_Node = (struct Node *)malloc(sizeof(struct Node));
            if(New_Node == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for Node %d : ", i);
                scanf(" %d", &num);

                New_Node->INFO = num;
                New_Node->NEXT = START;

                temp->NEXT = New_Node;
                temp = temp->NEXT;
            }
        }
    }
    return START;
}
void displayList(struct Node *START)
{
    struct Node *temp;
    if(START == NULL)
    {
        printf(" List is empty.");
    }
    else
    {   printf("Linked list is: " );
        temp = START;
        while(temp-> NEXT != START)
        {
            printf("%d->", temp->INFO);
            temp = temp->NEXT;
        }
        printf("%d->", temp->INFO);
        printf("START");
    }
}

void count(struct Node *START)
{
    struct Node *temp;
    int c=0;
    if(START == NULL)
    {
        printf("\n count = 0 as List is empty.");
    }
    else
    {   temp = START;
        while(temp-> NEXT != START)
        {
            c++;
            temp = temp->NEXT;
        }
        c++;
        printf("\n count = %d",c);
    }

}

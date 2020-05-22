#include<stdio.h>
#include<stdlib.h>
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                exit(0);
        }
        printf("\nEnter the data value for the node:\t");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}
void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is empty:\n");
                return;
        }
        else
        {
                ptr=start;
                printf("\nThe List elements are:\n");
                while(ptr!=NULL)
                {
                        printf("#### value is %d #### ",ptr->info );
                        printf("location is %d #### pointing next to %d ####\n",ptr,ptr->next);
                        ptr=ptr->next ;
                }
        }
}
int main()
{
    int n,i;
    printf("ENTER THE NUMBER OF NODES YOU WANT TO APPEND:: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        create();
    }
    display();

}

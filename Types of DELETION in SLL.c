#include<stdio.h>
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
void delete_begin()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is Empty:\n");
                return;
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\nThe deleted element is :%d\t",ptr->info);
                free(ptr);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nList is Empty:");
                exit(0);
        }
        else if(start->next ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is:%d\t",ptr->info);
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("\nThe deleted element is:%d\t",ptr->info);
                free(ptr);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nThe List is Empty:\n");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the node to be deleted:\t");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=start;
                        start=start->next ;
                        printf("\nThe deleted element is:%d\t",ptr->info  );
                        free(ptr);
                }
                else
                {
                        ptr=start;
                        for(i=0;i<pos;i++)
                        {
                                temp=ptr;
                                ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("\nPosition not Found:\n");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("\nThe deleted element is:%d\t",ptr->info );
                        free(ptr);
                }
        }
}
int main()
{
    int n,i;
    printf("ENTER THE NUMBER OF NODES YOU WANT IN THE LIST :: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        create();
    }
    int choice;
        while(1){
                printf("\n 1.Display    \n");
                printf("\n 2.Delete from beginning    \n");
                printf("\n 3.Delete from the end  \n");
                printf("\n 4.Delete from specified position       \n");
                printf("\n 5.Exit\n\n\n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        display();
                                        break;
                        case 2:
                                        delete_begin();
                                        break;
                        case 3:
                                        delete_end();
                                        break;
                        case 4:
                                        delete_pos();
                                        break;
                        case 5:
                                        exit(0);
                                        break;
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }


    }
}

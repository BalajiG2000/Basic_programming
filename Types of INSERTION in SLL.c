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
void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&temp->info);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->next=start;
                start=temp;
        }
}//end of insert_begin()
void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&temp->info );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}//end of insert_end
void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the position for the new node to be inserted:\t");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node:\t");
        scanf("%d",&temp->info) ;

        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++)
                {
                        ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\nPosition not found\n");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }//end of else
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
                printf("\n 2.Insert at the beginning    \n");
                printf("\n 3.Insert at the end  \n");
                printf("\n 4.Insert at specified position       \n");
                printf("\n 5.Exit\n\n\n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        display();
                                        break;
                        case 2:
                                        insert_begin();
                                        break;
                        case 3:
                                        insert_end();
                                        break;
                        case 4:
                                        insert_pos();
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

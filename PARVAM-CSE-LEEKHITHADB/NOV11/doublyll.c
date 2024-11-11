#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
      
};
struct node *head=NULL,*tail=NULL;

void create()
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter value : ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}

void insertbegin()
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter value : ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}                             

void insertend()
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter value : ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    newnode->prev=tail;
    tail->next=newnode;
    tail=newnode;
}

void deletebegin()
{
    struct node *temp;
    temp=head;
    head=head->next;                                                                                                                                                                                                                                                                                                                                                                                                  
    head->prev=NULL;
    free(temp);
}

void deleteend()
{
    struct node *ptr;
    ptr=tail->prev;
    tail=ptr;
    ptr=ptr->next;
    tail->next=NULL;
    free(ptr);
}

void display()
{
    struct node *ptr3=head;
    while(ptr3!=NULL)
    {
        printf("%d ",ptr3->data);
        ptr3=ptr3->next;
    }
}

int main()
{
    int ch;
    do
    {
        printf("enter the choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            create();
            break;
            case 2:
            insertbegin();
            break;
            case 3:
            insertend();
            break;
            case 4:
            deletebegin();
            break;
            case 5:
            deleteend();
            break;
            case 6:
            display();
            break;
            default:
            printf("invalid input");
        }
    }while(ch!=0);
}    

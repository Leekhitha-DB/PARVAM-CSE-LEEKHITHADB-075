#include <stdio.h>
#define n 5
int front=-1,rear=-1;
int q[n];
void enqueue()
{
    int data;
    printf("enter data:");
    scanf("%d",&data);
    if(rear==n-1)
    {
        printf("overflow");
    }
    else if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        q[rear]=data;
    }
    else
    {
        rear++;
        q[rear]=data;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("underflow");
    }
    else
    {
        front++;
    }    
}
void display()
{
    for(int i=front;i<rear;i++)
    {
        printf("%d",q[i]);
    }
}
int main()
{
    int ch;
    do
    {
        printf("enter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            default:
            printf("invalid input");
        }
    }while(ch!=0);
}    
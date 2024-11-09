#include <stdio.h>
#define n 5
int top=-1;
int stk[n];
void push()
{
    int data;
    printf("enter data:");
    scanf("%d",&data);
    if(top==n-1)
    {
        printf("overflow");
    }
    else 
    {
        top++;
        stk[top]=data;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        top--;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("%d",stk[top]);
    }
}
void disp()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d",stk[i]);
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
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            disp();
            break;
            default:
            printf("invalid input");
        }
    }while(ch!=0);
}    
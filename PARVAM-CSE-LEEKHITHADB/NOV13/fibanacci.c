#include<stdio.h>
int main()
{
    int n;
    printf("enter no. of elements : \n");
    scanf("%d",&n);
    int a=0;
    int b=1;
    printf("fibanacci sequence are \n");
    printf("%d ",a);
    printf("%d ",b);
    int sum;
    for(int i=3;i<=n;i++) 
    {
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
}


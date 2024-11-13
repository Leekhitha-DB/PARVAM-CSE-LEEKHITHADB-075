#include<stdio.h>
int isAutomorphic(int n,int temp)
{
    while(n!=0)
    {
        if(n%10!=temp%10)
        {
            return 0;
        }
        n=n/10;
        temp=temp/10;
    }
    return 1;
}
int main()
{
    int n;
    printf("enter n :\n");
    scanf("%d",&n);
    int temp;
    temp=n*n;
    printf("%d\n",isAutomorphic(n,temp));
}
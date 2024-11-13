#include<stdio.h>
int isCon(int n,int a[])
{
    for(int i=0;i<n-2;i++)
    {
        if((a[i]%2!=0) && (a[i+1]%2!=0) && (a[i+2]%2!=0))
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    printf("enter the size :\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d\n",isCon(n,a));
}
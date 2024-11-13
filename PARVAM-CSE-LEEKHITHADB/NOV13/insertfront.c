#include <stdio.h>
int main()
{
    int n;
    printf("enter n :\n");
    scanf("%d",&n);
    int a[n+1];
    printf("enter elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int r;
    printf("enter r :\n");
    scanf("%d",&r);
    for(int i=n;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=r;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}    

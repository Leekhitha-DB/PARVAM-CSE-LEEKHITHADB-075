#include <stdio.h>
int isSufficient(int n,int a[],int enough)
{
    int total=0;
    if(n==0)
    {
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        total=total+a[i];
        if(total>=enough)
        {
            return i+1;
        }
    }
    return 0;
}
int main()
{
    int r;
    scanf("%d",&r);
    int unit;
    scanf("%d",&unit);
    int n;
    printf("enter n :\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int enough=r*unit;
    printf("%d\n",isSufficient(n,a,enough));
}    
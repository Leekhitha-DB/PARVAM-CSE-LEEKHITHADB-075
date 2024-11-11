#include <stdio.h>
int main()
{
    int s;
    printf("Enter size : ");
    scanf("%d",&s);
    int a[s];
    printf("Enter elements :\n");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp=a[s-1];
    for(int i=s-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    for(int i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
}    
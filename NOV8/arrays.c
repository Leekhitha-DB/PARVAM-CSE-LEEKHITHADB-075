#include <stdio.h>
int main()
{
    int s;
    printf("Enter size : ");
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++)
    {
        printf("Enter elements :\n");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<s;i++)
    {
        printf("Elements are :%d\n",a[i]);
    }
    return 0;
}        
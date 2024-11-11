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
    int min1=__INT_MAX__;
    int min2=__INT_MAX__;
    for(int i=0;i<s;i++)
    {
        if(a[i]<min1)
        {
            min2=min1;
            min1=a[i];
        }
        else if(a[i]<min2)
        {
            min2=a[i];
        }
    }
    printf("%d ",min2);
}    

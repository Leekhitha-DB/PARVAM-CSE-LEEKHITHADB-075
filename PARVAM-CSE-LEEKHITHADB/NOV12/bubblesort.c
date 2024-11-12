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
    for(int i=0;i<s-1;i++)
    {
        for(int j=0;j<s-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<s;i++)
    {
        printf("%d",a[i]);
    }
}    
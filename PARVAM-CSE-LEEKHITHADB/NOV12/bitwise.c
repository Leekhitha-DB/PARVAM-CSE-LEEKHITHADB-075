#include<stdio.h>
int main()
{
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp=temp^a[i];
    }
    printf("%d\n",temp);
}
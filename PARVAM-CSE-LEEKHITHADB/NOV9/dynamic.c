#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int *dynamic=(int*)malloc(n*sizeof(int));
    printf("enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d ",dynamic[i]);
    }
    int extra;
    printf("Enter extra:");
    scanf("%d",&extra);
    dynamic=realloc(dynamic,(n+extra)*sizeof(int));
    printf("Enter extra value:");
    for(int i=n;i<(n+extra);i++)
    {
        scanf("%d ",dynamic[i]);
    }
        printf("Elements are :\n");
    for(int i=0;i<(n+extra);i++)
    {
        printf("%d ",dynamic[i]);
    }
}
#include <stdio.h>
int isPresent(int n,int a[],int target)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            return 1;
        }
    }
    return 0;
}    
int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int target;
    printf("enter target : ");
    scanf("%d",&target);
    printf("%d",isPresent(n,a,target));
}
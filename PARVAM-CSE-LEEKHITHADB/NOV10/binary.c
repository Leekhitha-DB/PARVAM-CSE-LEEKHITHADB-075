#include <stdio.h>
int isPresent(int n,int a[],int target)
{
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        int mid=left+((right-left)/2);
        if(a[mid]==target)
        {
            return mid;
        }
        else if(target<a[mid])
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return -1;
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
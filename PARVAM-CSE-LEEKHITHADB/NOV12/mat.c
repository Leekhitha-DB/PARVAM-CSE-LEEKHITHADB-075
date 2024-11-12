#include<stdio.h>
int main()
{
    int r;
    printf("enter no. of rows :");
    scanf("%d",&r);
    int a[r][r];
    printf("enter elements : ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=i+1;j<r;j++)
        {
            while(a[i][j]==0)
            {
                int temp=a[i][j];
            }
        }
    } 
}
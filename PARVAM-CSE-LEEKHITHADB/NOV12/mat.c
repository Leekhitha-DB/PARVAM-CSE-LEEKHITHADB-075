#include<stdio.h>
int isLower(int r,int a[][r])
{
    for(int i=0;i<r;i++)
    {
        for(int j=i+1;j<r;j++)
        {
            while(a[i][j]!=0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int r;
    printf("enter no. of rows and columns :");
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
    printf("%d\n",isLower(r,a));
}
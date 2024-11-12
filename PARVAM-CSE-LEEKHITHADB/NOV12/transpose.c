#include<stdio.h>
int main()
{
    int r;
    printf("enter no. of rows :");
    scanf("%d",&r);
    int c;
    printf("enter no. of columns :");
    scanf("%d",&c);
    int a[r][c];
    printf("enter elements : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("transposed matrix : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}     
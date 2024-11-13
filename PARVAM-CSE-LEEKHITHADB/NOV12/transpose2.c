#include<stdio.h>
int transpose(int n,int a[][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    printf("transpose matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n"); 
    }
}

int main()
{
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int a[n][n];
    printf("enter elements :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    } 
    transpose(n,a);
}           

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
    printf("enter elements : ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int index=-1;
    int max=0;
    for(int i=0;i<r;i++)
    {
        int count=0;
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }  
        }
        if(count>max)
        {
            max=count;
            index=i;
        }
    }
    printf("%d\n",index+1); 
}
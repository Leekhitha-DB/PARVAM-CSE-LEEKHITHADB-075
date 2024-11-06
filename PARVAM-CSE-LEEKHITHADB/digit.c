#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r=0;
    if(n==0)
    {
        r==1;
        printf("%d",r);
    }
    else 
    {
        while(n!=0)
        {
            n/=10;
            r++;
        }
    }
    printf("%d\n",r);
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if((n%1==0 && n%n==0) && (n%i==0))
        {
            printf("Prime");      
        }
        else
        {
            printf("Composite");
        }
    }
    return 0;
}
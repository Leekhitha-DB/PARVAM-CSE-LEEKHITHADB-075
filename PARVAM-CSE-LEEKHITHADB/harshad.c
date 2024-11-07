#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=n;
    int r=0;
    while(n!=0)
    {
        int rem=n%10;
        r=r+rem;
        n=n/10;
    }
    if(k%r==0)
    {
        printf("Harshad no.");
    }
    else
    {
        printf("Not a Harshad no.");
    }
    return 0;
}    
#include <stdio.h>
int main ()
{
    for(int i=2;i<=100;i++)
    {
        if(i%3==0)
        {
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}
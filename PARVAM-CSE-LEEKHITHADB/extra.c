#include <stdio.h>
int main ()
{
    for(int i=4;i>0;i--)
    {
        for(int j=4;j<i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main ()
{
    int i=0;
    int j=0;
    while(i<3)
    {
        while(j<3)
        {
            printf("%d  %d\n",i,j);
            j++;
        }
        i++;
    }        
    return 0;
}
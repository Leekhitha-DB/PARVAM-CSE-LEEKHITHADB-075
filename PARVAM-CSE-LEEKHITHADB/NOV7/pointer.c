#include <stdio.h>
int main()
{
    int a=5;
    int *ptr=&a; //single pointer
    int **ptr2=&ptr;  //double pointer
    printf("%d\n",*ptr);
    printf("%d\n",**ptr2);
    return 0;
}    
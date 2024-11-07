#include <stdio.h>
int main()
{
    int arr[]={12,24,36,48,60};
    printf("%d\n",arr);
    printf("%d\n",&arr[0]);
    printf("%d\n",&arr[1]);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}    

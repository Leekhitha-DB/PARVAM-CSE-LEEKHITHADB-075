#include<stdio.h>
#include<string.h>
int main()
{
    char str[5]="hello";
    char str2[5];
    strcpy(str2,str);
    printf("%s",str2);
    return 0;
}

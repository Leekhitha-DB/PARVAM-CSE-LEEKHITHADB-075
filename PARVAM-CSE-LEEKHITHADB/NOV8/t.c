#include <stdio.h>
struct Book{
    char title[32];
    char author[32];
    float price;
}b1={"LetUsC","ypk",320.2};    
int main()
{
    static Book b2;
    b1=b2;
    printf("%s %f",b1.title,b1.price);
}
#include <stdio.h>
struct student
{
    int rollno;
    float mark;
};
int main()
{
    struct student s;
    s.rollno=45;
    s.mark=8.9;
    printf("%d\n",s.rollno);
    printf("%f\n",s.mark);
    return 0;
}
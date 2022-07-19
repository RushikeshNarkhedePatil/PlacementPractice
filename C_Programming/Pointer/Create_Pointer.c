#include<stdio.h>
int main()
{
    int age=24;
    int *ptr=&age;
    // print pointer address using format specifier %p
    printf("%p\n",&age);
    printf("%p\n",ptr);
    printf("%p\n",&ptr);
    // print value
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));

}
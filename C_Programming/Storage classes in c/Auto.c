// in this program we are use auto storage class. when we are not specify any storage class
// then it it automatically consider as a auto storage class.
#include<stdio.h>
void fun(int);
int main()
{
    int no=10;
    auto int x=20;

    printf("Inside Fun\n");
    fun(no);
}
void fun(int value)
{
    int i=11;
    printf("%d\n",value);
}
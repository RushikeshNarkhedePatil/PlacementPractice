#include<stdio.h>

int main()
{
    register int no;
    // printf("%d",&no);    //can not fetch address of register storage class
    printf("%d\n",no);
    return 0;
}
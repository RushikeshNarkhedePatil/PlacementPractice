// Call By Value and call By Reference.

#include<stdio.h>
void _swap(int *No1,int *No2);
int main()
{
    int a=10,b=20;
    _swap(&a,&b); //call by Reference
    printf("a = %d b = %d \n",a,b);
    return 0;
}
// call By Reference
void _swap(int *No1,int *No2)
{
    int t=*No2;
    *No2=*No1;
    *No1=t;
    // printf("No1 = %d No2 = %d",*No1,*No2);
}
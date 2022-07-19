#include<stdio.h>
void Square(int No);
void _Square(int *No);
int main()
{
    int a=5;
    int b=5;
    Square(a);  // call by value 
    printf("Square = %d\n",a);  //5
    _Square(&b); //call By Reference
    printf("_Square = %d\n",b); //25
    return 0;
}
// call By value
void Square(int No)
{
    No=No*No;
    printf("Square = %d\n",No); //25
}
void _Square(int *No)
{
    *No=(*No)*(*No);
    printf("_Square = %d\n",*No);   //25
}


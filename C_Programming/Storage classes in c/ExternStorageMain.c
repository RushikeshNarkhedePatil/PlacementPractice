// code Compilation command : gcc ExternStrorage.c ExternStorageMain.c -o myexe
// code Run Command : .\myexe
// this is the example of extern storage class in this program we are access data from another file.
#include <stdio.h>
extern int i;           //declaration
extern void fun();      //declaration
int main()              //entry point function
{
    printf("Inside Main\n");
    printf("%d\n",i);
    fun();                  //function call
    return 0;
}
//static storage class
#include<stdio.h>
int StaticStorage()
{
    static int No=10;
    No++;
    return No;
}
// auto storage class
int Auto()
{
    int No=10;
    No++;
    return No;
}
// entry point function
int main()
{
    int no=10;
    int iRet=0;
    int aRet=0;
    for(int i = 0; i < no; i++)
    {
        iRet=StaticStorage(no);
        aRet=Auto(no);
    }
    
    printf("%d\n",iRet);    //20 //incase of static
    printf("%d\n",aRet);    //11 //incase of auto because auto storage class preserve value
}
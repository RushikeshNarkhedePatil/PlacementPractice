// Simple Array Demo
#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50,60};
    for(int i=0;i<sizeof(arr)/4;i++)
    {
        printf("%d\t",arr[i]);
    }
}
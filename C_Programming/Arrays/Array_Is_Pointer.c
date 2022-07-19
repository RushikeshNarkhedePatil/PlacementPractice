// Array is a pointer and pointer is a array
#include<stdio.h>
void PrintArray(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);  //print array element one by one
    }
}
int main()
{
    int a=0;
    int arr[a];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]); // accept array values
    }
    PrintArray(arr,a);  // first parameter is array and second is sizeof element in array

}
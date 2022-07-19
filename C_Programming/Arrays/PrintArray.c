// print array element using recursion.
#include<stdio.h>
int PrintArray(int arr[],int start,int size)
{
    if(start>=size)
        return -1;
    printf("%d\t",arr[start]);
    PrintArray(arr,start+1,size);   //call recursive function
}
int main()
{
    int a=0;
    printf("Enter sizeof array :\n");
    scanf("%d",&a);         // sizeof array
    int arr[a];
    printf("Enter array elements :\n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);        //accept array element
    }
    printf("Print array elements :\n");
    PrintArray(arr,0,a);    //call function 
    return 0;
}
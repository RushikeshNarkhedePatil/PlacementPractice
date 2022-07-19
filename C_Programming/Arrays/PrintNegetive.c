//print nagative number using recursion
#include<stdio.h>
int PrintNegative(int arr[],int pos,int size)
{
    if(pos>=size)
    {
        return -1;
    }
    if(arr[pos]<0)
    {
        printf(" index of  %d : %d\n",pos,arr[pos]);
    }
    PrintNegative(arr,pos+1,size);
}
int main()
{
    int a;
    printf("Enter size of array :\n");
    scanf("%d",&a);
    int arr[a];
    printf("Enter array elements : \n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Negative array elements : \n");
    PrintNegative(arr,0,a);
    return 0;
}
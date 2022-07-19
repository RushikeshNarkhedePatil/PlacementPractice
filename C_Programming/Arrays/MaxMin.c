#include<stdio.h>
void MaxMin(int arr[],int size)
{
    int Max,Min;
    Max=arr[0];
    Min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>Max)
        {
            Max=arr[i];
        }
        if(arr[i]<Min)
        {
            Min=arr[i];
        }
    }
    printf("Max is : %d\nMin is :%d\n",Max,Min);
}
int main()
{
    int a;
    printf("Enter size of array\n");
    scanf("%d",&a);
    int arr[a];
    printf("Enter array elements :\n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Maximum and Minimum Number\n");
    MaxMin(arr,a);
}
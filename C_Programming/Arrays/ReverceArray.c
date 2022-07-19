#include<stdio.h>
void PrintArray(int *arr,int size);
void ReverceArray(int *arr,int size);

void ReverceArray(int *arr,int size)
{
    int first,second;
    for(int i=0;i<size/2;i++)
    {
        first=arr[i];
        second=arr[size-i-1];
        arr[i]=second;
        arr[size-i-1]=first;
    }
    PrintArray(arr,size);
}
void PrintArray(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int N=0;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    ReverceArray(a,N);
}
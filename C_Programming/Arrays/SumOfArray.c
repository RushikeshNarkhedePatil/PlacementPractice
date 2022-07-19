#include<stdio.h>
int SumOfArray(int arr[],int pos,int size,int sum)
{
    
    if(pos>=size)
    {
       return sum;
    }
    sum=sum+arr[pos];
    SumOfArray(arr,pos+1,size,sum);
   
}
int main()
{
    int a;
    printf("Enter size of array :\n");
    scanf("%d",&a);
    int arr[a];
    printf("Enter array elements :\n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    sum=SumOfArray(arr,0,a,sum);
    printf("Sumession of array is : %d\n",sum);

}
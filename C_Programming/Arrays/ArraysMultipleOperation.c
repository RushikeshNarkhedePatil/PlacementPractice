#include<stdio.h>
void PrintNumber(int arr[],int size);
void FindNumber(int arr[],int size,int No);
int main()
{
    int choice;
    int No=0;
    int arr[]={10,20,30,3,4,5,6,7,32,3,4,5,5,6,7,7,4};
    while (1)
    {
        printf("Enter Your choice\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            PrintNumber(arr,sizeof(arr)/4);
        }
        else if(choice==2)
        {
            printf("Enter Number which are find in array\n");
            scanf("%d",&No);
            FindNumber(arr,sizeof(arr)/4,No);
        }
    }
    
}
//print Array Number

void PrintNumber(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

//find array perticular number is present in array or not if number is present then print index.

void FindNumber(int arr[],int size,int No)
{
    // int icnt=0;
    printf("Number of %d Present in Index No : ",No);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==No)
        {
            printf("%d\t",i);
            icnt++;
        }
    }
    printf("\n");
}
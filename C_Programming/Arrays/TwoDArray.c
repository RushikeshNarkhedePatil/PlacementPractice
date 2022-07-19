#include<stdio.h>
int main()
{
    int a=0,b=0;
    printf("Enter how many rows and colom\n");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    printf("Enter array elements :\n");
    for(int i=0;i<a;i++)  //row
    {
        for(int j=0;j<b;j++)    //col
        {
            scanf("%d",&arr[i][j]);
        }
    }
    // print data
    printf("Array Element is :\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
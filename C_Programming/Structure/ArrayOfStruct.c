#include<stdio.h>
#include<string.h>
typedef struct demo
{
    int RollNo;
    char *name;
    char *address;
    float cgpa;
}d;
int main()
{
    d d1[100];
    d1[0].RollNo=1;
    d1[0].name="Pava Patil";
    d1[0].address="Nimkhed";
    d1[0].cgpa=9.5;
    d1[1].RollNo=1;
    d1[1].name="Pava Patil";
    d1[1].address="Nimkhed";
    d1[1].cgpa=9.5;
    printf("%d %s %s %.2f\n",d1[0].RollNo,d1[0].name,d1[0].address,d1[0].cgpa);
    printf("%d %s %s %.2f\n",d1[1].RollNo,d1[1].name,d1[1].address,d1[1].cgpa);
   
    return 0;
}
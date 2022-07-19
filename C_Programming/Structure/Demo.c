//structure are strore in memory in continiouse memory location.
#include<stdio.h>
#include<string.h>
// create structure
struct Demo
{
    int RollNo;
    char name[100];
};
int main()
{
    struct Demo d1;
    d1.RollNo=66;
    strcpy(d1.name,"Rushikesh");        //strcpy fun ne string copy keli d1.name madhe
    printf("%d %s",d1.RollNo,d1.name);
}
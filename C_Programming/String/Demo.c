#include<stdio.h>
//count string length
int strlenX(char *str)
{
    int icnt=0;
    for(int i=0;str[i]!=0;i++)
    {
        icnt++;
    }
    return icnt;
}
// extract character by character string
void PrintString(char *str)
{
    int i=0;
    while(str[i]!=0)
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
// count charcter in string
int CountCharacter(char *str,char ch)
{
    int i=0,icnt=0;
    while(str[i]!=0)
    {
        if(str[i]==ch)
        {
            icnt++;
        }
        i++;
    }
    return icnt;
}
int main()
{
    char name[]={'R','u','s','h','i','k','e','s','h','\0'};
    printf("%s\n",name); //all string extract 
    printf("Length of string is %d\n",strlenX(name));
    PrintString(name);
    printf("%d",CountCharacter(name,'s'));
    return 0;
}
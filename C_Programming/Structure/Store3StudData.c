#include<stdio.h>
struct students     //data type name
{
    int RollNo;
    char *name;
    char *address;
    int pincode;
};
int main()
{
     //struct students is a data type and s1 is a variable name.
    struct students s1={1,"Rushikesh Narkhede","pune",443103};
    struct students s2={2,"Pvan Patil","pune",443103};
    struct students s3={3,"Kunal Narkhede","pune",443103};
    printf("%d %s %s %d\n",s1.RollNo,s1.name,s1.address,s1.pincode);
    printf("%d %s %s %d\n",s2.RollNo,s2.name,s2.address,s2.pincode);
    printf("%d %s %s %d\n",s3.RollNo,s3.name,s3.address,s3.pincode);


}
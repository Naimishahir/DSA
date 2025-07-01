#include<stdio.h>
#include<string.h>

struct student
{
    int roll_no;
    char name[25];
    char branch[25];
    int batch_no;
};

void main()
{
    struct student s1 = {311,"Naimish","Computer",1};
    
    struct student *ptr;

    ptr = &s1;

    printf("Roll no is :%d\n",ptr->roll_no);
    printf("Nameis :%s\n",ptr->name);
    printf("Branch is :%s\n",ptr->branch);
    printf("Batch is :%d\n",ptr->batch_no);

}
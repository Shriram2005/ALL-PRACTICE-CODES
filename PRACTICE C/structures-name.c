#include<stdio.h>
#include<string.h>

struct student
{   int rollno;
    char name[100];
    float cgpa;
    /* data */
};


int main(){
    struct student s1;
    s1.rollno=10;
    strcpy(s1.name,"shriram");
    s1.cgpa=7.5;

    printf("%d\n",s1.rollno);
    printf("%s\n",s1.name);
    printf("%f\n\n",s1.cgpa);

    struct student s2;
    s2.rollno=11;
    strcpy(s2.name,"raj");
    s2.cgpa=8.5;

    printf("%d\n",s2.rollno);
    printf("%s\n",s2.name);
    printf("%f\n\n",s2.cgpa);

    struct student s3;
    s3.rollno=12;
    strcpy(s3.name,"yash");         //s3.name="yash";  strcpy(s3.name,"yash");
    s3.cgpa=8.4;

    printf("%d\n",s3.rollno);
    printf("%s\n",s3.name);
    printf("%f\n",s3.cgpa);


    return 0;

 

}
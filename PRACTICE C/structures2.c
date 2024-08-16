#include<stdio.h>
#include<string.h>

struct student
{   int rollno;
    float cgpa;
    char name[100];

};



int main(){
struct student s1;
s1.rollno=21;
s1.cgpa=6.4;
strcpy(s1.name,"shriram");

printf("%d\n",s1.rollno);
printf("%f\n",s1.cgpa);
printf("%s\n\n",s1.name);


struct student s2={22,5.4,"harsh"};
printf("%d\n%f\n%s\n\n ",s2.rollno,s2.cgpa,s2.name);

struct student s3={23,8.6,"sohan"};
printf("%d\n%f\n%s\n\n",s3.rollno,s3.cgpa,s3.name);


struct student *ptr=&s3;
printf("%d\n",*ptr);                    //pointer 
// struct student *ptr=&s3;
printf("%d\n",(*ptr).rollno); 
printf("%f\n",(*ptr).cgpa);
printf("%s\n\n",(*ptr).name);

printf("%d\n",ptr->rollno);             //using array operator //pointer
printf("%f\n",ptr->cgpa);               //using array operator  -> 
printf("%s\n",ptr->name);               //using array operator
return 0;
}
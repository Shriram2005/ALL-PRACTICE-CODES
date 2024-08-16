#include<stdio.h>
#include<string.h>


struct student{
int rollno;                         //first declare struct then functions
float cgpa;
char name[100];
};                          


void printInfo(struct student s1);                  /////

int main(){
struct student s1={22,7.5,"sujal"};
printInfo(s1);                                  //function used


return 0;

}

void printInfo(struct student s1){
            printf("student information is:\n");
            printf("student.rollno=%d\n",s1.rollno);
            printf("student.cgpa=%f\n",s1.cgpa);                       ////call by value function in struct
            printf("student.name=%s\n",s1.name); 

}
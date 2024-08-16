#include <stdio.h>
int main()              //take input of a student's information and save it in a file     //name,age,cgpa
{
    FILE *ptr;
    ptr = fopen("TEST5.txt", "a");          //w for single student a for mutiple students

    char name[100];
    int age;
    float cgpa;
    printf("Enter name=");
    scanf("%s", &name);
    printf("Enter age=");
    scanf("%d", &age);
    printf("Enter cgpa=");
    scanf("%f", &cgpa);

    // fprintf(ptr,"%s\n%d\n%f\n",name,age,cgpa);           //also

    fprintf(ptr, "Student Name:%s\n", name);
    fprintf(ptr, "Student age:%d\n", age);
    fprintf(ptr, "CGPA:%f\n\n", cgpa);

    fclose(ptr);
    return 0;
}
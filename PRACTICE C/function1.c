#include<stdio.h>
void namaste();
void hello();

void namaste(){printf("namaste ji");}
void hello(){printf("hello sir");}

int main()
{ char a;
    printf("enter letter  n-for hindi or h for english:");
    scanf("%c",&a);
if (a=='n'){namaste();}
else if(a=='h'){hello();}
else{printf("wrong input");}
return 0;


}

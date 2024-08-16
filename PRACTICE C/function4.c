#include<stdio.h>

float squarearea(float side);
float rectanglearea();
float circlearea(float rad);



int main(){
float a,b;
// printf("enter length:");
// scanf("%f",&a);
// printf("enter breadth:");
// scanf("%f",&b);
rectanglearea();            //float not written for multiple 
rectanglearea();


return 0;

}
float squarearea(float side){return side*side;}

float rectanglearea(){float a,b;
                      printf("enter length:");
                      scanf("%f",&a);
                      printf("enter breadth:");
                      scanf("%f",&b);
                      printf("area is: %f\n",a*b);}

float circlearea(float rad){return 3.14*rad*rad;}
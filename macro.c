#include<stdio.h>
#define PI 3.141539
int main(){
 float r,h;
 printf("enter the radius :");
 scanf("%f",&r);
 printf("Enter the height:");
 scanf("%f",&h);
 float areaCircle,areaCylinder;
 areaCircle=PI*r*r;
 areaCylinder=2*PI*r*(r+h);
 printf("Area of Circle:%f \n Area of Cylinder:%f",areaCircle,areaCylinder);
 return 0;
}

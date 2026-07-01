#include<stdio.h>
int main(){
    float circumference , radius ; 
    const float PI = 3.14;
     printf("enter the radius of a circle : ");
     scanf("%f",&radius);

     circumference = 2*PI*radius ;
     printf("circumference = %.2f",circumference);
     return 0;
}
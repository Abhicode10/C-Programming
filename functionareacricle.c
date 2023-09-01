// Function with argument and with return value
// Write a program to calculate  area of cricle using function 
#include<stdio.h>
float cricleOfarea(float rid);

void main(){
    float rid;
    printf("Enter the radius of cricle:");
    scanf("%f", &rid);
    //float = area_cricle;
   // area_cricle = cricleOfarea(rid);
    //printf("Area of cricle:%f\n", area_cricle);

    printf("Area of cricle:%f\n",  cricleOfarea(rid));


}

float cricleOfarea(float rid){
    float area = 3.14*rid*rid;
    return area;
   // return 3.14*rid*rid;

}

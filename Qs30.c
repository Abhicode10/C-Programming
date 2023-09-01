#include<stdio.h>

float squareArea(float side);   // Declaration function
float circleArea(float radi);
float rectangleArea(float a, float b);


int main(){
    float a=5.0, b=10.0;
    float  side, radi;
    printf("Enter a side length:");
    scanf("%f", &side);
    printf("Enter radius:");
    scanf("%f", &radi);

    printf("Square area: %f \n",  squareArea(side));  // call function

    printf("Circle area: %f \n",  circleArea(radi));

    printf("rectangular area: %f \n",  rectangleArea(a,b));

    return 0;



}


// Defination function

float squareArea(float side){
    return side * side;

}

float circleArea(float radi){
    return 3.14 * radi * radi;

}

float rectangleArea(float a, float b){
    return a * b;

}

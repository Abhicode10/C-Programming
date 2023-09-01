#include<stdio.h>

float convertTemp(float celsius);  // Delaraction function 

int main(){
    float far = convertTemp(37);   // call funcation 
    printf("far : %f", far);
    return 0;


}
// Defination function 

float convertTemp(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;

}
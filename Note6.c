#include<stdio.h>
void calculateprice(float value);  // Declaraction function

int main(){
    float value=100.0;

    calculateprice(value);  // call function
    printf("Value is : %f\n", value);  // Don't change value 
    return 0;


}

// function defination
void calculateprice(float value){
    value = value + (0.18 * value);
    printf("final price is: %f\n", value);

}
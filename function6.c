#include<stdio.h>
// Function declaraction
void calculatePrice(float value);

int main(){
    float value = 100.0;
    calculatePrice(value);
    printf("Value is :%f\n", value);


    
    return 0;

}

// Function defintion
void calculatePrice(float value){
    value = value +(0.18 * value);
    printf("Final price is :%f\n", value);


}



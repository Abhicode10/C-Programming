// Write a program to enter price of 3 items & print their final cost with gst.
// using Initialization of Arrays (not using user input data)

#include<stdio.h>
int main(){

    float price[3]= {100.0,200.0,300.0};
    // or ye bhi sahi hai ( not include size)
    //float price[]= {100.0,200.0,300.0};


    printf("Total price 1:%f\n",  price[0]+(0.18*price[0]));
    printf("Total price 2:%f\n",  price[1]+(0.18*price[1]));
    printf("Total price 3:%f\n",  price[2]+(0.18*price[2]));

    return 0;
}
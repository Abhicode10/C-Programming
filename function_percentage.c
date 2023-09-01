// Write a function to calculate percentege (science, math ,sanskrit)
#include<stdio.h>
// function Declaration 
int calcupercentage(int science, int math, int sanskrit);

int main(){
    int science =98, math =95, sanskrit =98;
    printf("percentage is : %d", calcupercentage(science, math, sanskrit));
    return 0;


}

// function Defination 
int calcupercentage(int science, int math, int sanskrit){
    return ((science + math + sanskrit) / 3);

}
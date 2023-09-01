// function with arguments and with return value
#include<stdio.h>
float avg(int a, int b, int c, int d, int e);

int main(){
    float   a,b,c,d,e;
    printf("Enter five number:\n");
    scanf("%f %f %f %f %f",  &a,&b,&c,&d,&e);
   
    printf("Avgerage of five number: %f\n", avg(a,b,c,d,e));
    return 0;

}

float avg(int a, int b, int c, int d, int e){
    float Average  = (a+b+c+d+e)/5;
    return Average;
}



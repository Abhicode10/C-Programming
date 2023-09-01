#include<stdio.h>

void printHW(int count);   //Declaraction prototype function

int main(){
    printHW(5);


    return 0;

}
// recursive function 
void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello World\n");
    printHW(count-1);    // call itself 

}
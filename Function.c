#include<stdio.h>

// compiler ko batana hai sabse pahle hum function banaye hai
void printHello(); // Declaration /prototype

int main() {
    printHello(); // function call 
    printHello();
    printHello();
    printHello();
    printHello();
    return 0;

}

// function definition 
void printHello(){
    printf("Hello abhishek\n");
    printf("My name is a Abhishek Yadav\n ");

}

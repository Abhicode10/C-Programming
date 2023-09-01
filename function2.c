#include<stdio.h>
// Function declaration(prototype)
void printName();
void Goodbye();

// Function calling 
int main(){
    printName();
    Goodbye();
    printName();
    Goodbye();
    printName();
    Goodbye();
    printName();
    Goodbye();
    return 0;

}

// Function Definition 
void printName(){
    printf("Abhishek Yadav\n");
    printf("From india\n");

}
void Goodbye(){
    printf("Goodbye sir\n");
}
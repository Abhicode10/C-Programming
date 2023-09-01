//  Create a string firstName & lastName details of user of print all the characters using loop in c language  
#include<stdio.h>
void printString(char arr[]);



int main(){
    //char name[] = {'A','B','H','I','S','H','E','K','\0'};
    char firstName[] = "Abhishek";
    char lastName[] = "Yadav";

    printString(firstName);
    printString(lastName);

    return 0;
}

void printString(char arr[]){
    for(int i=0; arr[i] != '\0';i++){
        printf("%c", arr[i]);


    }
    printf("\n");
}


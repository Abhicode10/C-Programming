#include<stdio.h>
int main()
{
    int marks;
    printf("Enter number(0-100):");
    scanf("%d", &marks);

    // if (marks >30 && marks <=100){
    //     printf("PASS \n");
    // } else if (marks <=30 && marks >=0){
    //     printf("FAIL \n");
    // } else{
    //     printf("Invalid marks");
    // } 

    marks >30 ? printf("PASS \n") : printf("FAIL \n");
    return 0;

}
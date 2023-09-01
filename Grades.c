#include<stdio.h>
int main()
{
    int marks ;
    printf("Enter number(1-100):");
    scanf("%d", &marks);

    if(marks >=90 && marks <=100 ){
        printf("Grade:A++\n");
        if (marks >=35){
            printf("Pass \n");
        }
    } else if (marks >=70 && marks <90){
        printf("Grade:A\n");
        if (marks >=35){
            printf("Pass \n");
        }    
    } else if (marks >=50 && marks <70){
        printf("Grade:B\n");
        if (marks >=35){
            printf("Pass \n");
        }
    } else if (marks >=35 && marks <50){
        printf("Grade:C\n");
        if (marks >=35){
            printf("Pass \n");
        }
    } else{
        printf("FAIL");
    }
    return 0;


}
#include<stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d", &age);

    if(age>=18){
        printf("adult \n");
        printf("they can vote \n");
        printf("they can drive \n");
    }
    else{
        printf("not adult \n");
        printf("they not can vote \n");
        printf("they  not can drive \n");

    }
        printf("thank you"); 
        return 0;
}       
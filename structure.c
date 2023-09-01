#include<stdio.h>
#include<string.h>

// user defined data type

struct student
{
    int roll;
    float CGPA;
    char name[100];

};

// main function 
int main(){
    struct student s1;
    s1.roll = 117;
    s1.CGPA = 9.5;
    strcpy(s1.name, "abhishek");

    printf("Student name = %s\n", s1.name);
    printf("Student roll no  = %d\n", s1.roll);
    printf("Student CGPA = %f\n", s1.CGPA);

    return 0;
}


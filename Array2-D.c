// write a program 2 student ka 3 subject ka marks
# include<stdio.h>
int main()
{
    int marks[2][3]; // memory me kase banega 1st _ _ _ | 2st _ _ _ marks
    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 80;


    marks[1][0] = 90;
    marks[1][1] = 80;
    marks[1][2] = 75;

    printf("First student marks : %d\n", marks[0][0]);
    printf("First student marks : %d\n", marks[0][1]);
    printf("First student marks : %d\n", marks[0][2]);

    return 0;
    


}
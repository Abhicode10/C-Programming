#include<stdio.h>
// print the number from 0 to 100
int main()
{
    // i kya hai i ko hum bol sakte hai (Iterator or counter)
    for(int i=0; i<=100; i++){
    printf("%d\n", i);
    }
    // print the number from 10 to 1
    for (int n=10; n>=1; n--)
    {
       printf("%d\n", n);
    }
    // Loop counter can be float (print the number from 1.0 to 10.0)
    for (float f=1.0; f<=10.0; f++){
        printf("%f \n", f);
    }
    // Loop counter can be even character(print the alphabet letter a to z)
    for (char ch='a'; ch<='z'; ch++){
        printf("%c\n", ch);
    }
    
    return 0;

}
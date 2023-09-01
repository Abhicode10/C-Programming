#include<stdio.h>
int main(){

    float price= 100.0;
    float *ptr= &price;
    float **pptr= &ptr;

    // Adrees find of variable
    printf("%u\n", &price);
    printf("%u\n", ptr);
    printf("%u\n", pptr);
    printf("%u\n", &pptr);

    int i=5;
    int *poin= &i;   // koi bhi varible naame de sakte hai bhai
    int **ppoin= &poin;   // koi bhi varible naame de sakte hai bhai

    printf("%d\n", i);
    printf("%d\n", *poin);
    printf("%d\n", **ppoin);
    printf("%d\n", *(&i));
    
    return 0;
    

}
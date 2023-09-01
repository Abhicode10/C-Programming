#include<stdio.h>
int main(){

    int age=22;
    int *ptr= &age;
    float price=25;
    float *poin=&price;
    char start='*';
    char *pter=&start;

    printf("pter=%u\n", pter);
    pter++;
    printf("pter++=%u\n", pter);
    pter--;
    printf("pter--=%u\n", pter);

    printf("poin=%u\n", poin);
    poin++;
    printf("poin++=%u\n", poin);
    poin--;
    printf("poin--=%u\n", poin);

    printf("Ptr=%u\n", ptr);
    ptr++;
    printf("ptr++=%u\n", ptr);
    ptr--;
    printf("ptr--=%u\n", ptr);
    return 0;
    


}
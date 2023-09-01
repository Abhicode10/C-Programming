# include<stdio.h>

int main(){
    int x, *ptr;
    
    ptr = &x;
    *ptr=0;

    printf("x= %d\n", x);
    printf("*ptr=%d\n", *ptr);


    *ptr +=5;  // *ptr=*ptr+5  or *ptr=x than x=0+5;
    printf("x=%d\n", x);
    printf("*ptr=%d\n", *ptr);

    (*ptr)++;  // *ptr=*ptr+1
    printf("x=%d\n", x);
    printf("*ptr=%d\n", *ptr);

    



    return 0;

}
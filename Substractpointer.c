#include<stdio.h>
int main()
{
    int age=22;
    int weight=50;
    int *ptr=&age;
    int *_ptr=&weight;

    printf("Comparison=%u\n", ptr >  _ptr);

    printf("Substract=%u\n", ptr-_ptr);
    _ptr=&age;
    printf("Comparison=%u\n", ptr ==  _ptr);
    printf("Comparison=%u\n", ptr >  _ptr);
    printf("Comparison=%u\n", ptr <  _ptr);



    return 0;


}
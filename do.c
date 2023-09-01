#include<stdio.h>
int main()
{
    int i=1;
    do{
        if (i == 4)
        {
            break;
        }
        
        printf("Hello world\n");
        printf("%d\n", i);
        i++;
    }while (i<=6);

    return 0;

    
}
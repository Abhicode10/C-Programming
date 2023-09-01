#include<stdio.h>
int main()
{
    for (int i = 1; i <=12; i++)
    {
        if (i==11)
        {
            break;
        }
        printf("%d\n", i);
    }

    printf("End");
    return 0;

    
}
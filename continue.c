#include<stdio.h>
// print all numbers from 1 to 10 except for 6.
int main()
{
    for (int i = 1; i <=10; i++)
    {
        if (i==6)
        {
            continue;
        }
        printf("%d\n", i);
    }
// print all the  odd numbers froms 5 to 50

    for (int i = 5; i <=50; i++)
    {
        if (i%2 != 0)
        {
            printf("%d\n", i);

        }
    }
        
 return 0;
}

#include<stdio.h>
int displayNumber(int num[2][2]);
int main()
{   
    int num;
    printf("Enter a number:");
        for (int i = 0; i < 2; ++i)
        {
           for (int j = 0; j < 2; ++j)
           {
             scanf("%d",  &num[i][j]);
           }
           displayNumber(num);
           return 0;
   
        }        
}
int displayNumber(int num[2][2]){
    printf("Display:");
        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
               printf("%d\n", num[i][j]);
            }
            
        }
        
}





#include<stdio.h>
int main()
{
    int row,column,noofrow=8;
    for (row=0; row<noofrow; row++)
    {
      for (column=0; column<=row; column++)
      {
        printf("*");
      }
        printf("\n");
    }
    return 0;

}

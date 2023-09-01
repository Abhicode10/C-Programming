#include<stdio.h>
float CalculateSum(float num[]);  // Function declaration
int main()
{
    float result, num[]={3,2,4,5,6,1,8,9};

    result= CalculateSum(num);   // Function calling 
    printf("Result =%2f", result);
    return 0;



}
float CalculateSum(float num[]){
        float sum=0.0;
        for(int i=0; i<=9; ++i)
        {
            sum = num[i];
            return sum;
        }

}


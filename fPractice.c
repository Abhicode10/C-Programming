// writie a program to calculate a sum of two number
#include<stdio.h>
int sum(int a, int b);

int main(){

    int a, b;
    printf("Enter two a number\n");
    scanf("%d%d", &a,&b);
    
    printf("The sum of two number:%d\n", sum(a,b));
      
    return 0;      

}

// functon defination
 int sum(int a, int b){
   
    return a+b;
  
}

// Write a function to reverse an array.
// [1][2][3][4] = [4][3][2][1] yahi reverse karna hai jab bhi koi array given ho to usko first ko last ke sath revers kar do and 
// second last ko second last ke sath reverse kar do  and third last ko third last ke saath reverse ka do last me koi single number hai
// tu usko ushi sathan par rahane do (jab odd number given ) Example lo 
// [1][2][3][4][5] = [5][4][3][2][1]

#include<stdio.h>
void reverse(int arr[], int n);
void printArr(int arr[], int n);


int main(){
    int arr[]= {1,2,3,4,5};
    reverse(arr, 5);    // call function                                                                                                        
    printArr(arr,5);
    
    return 0;
}



// Defination of function
void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);

    }

    printf("\n");

}

void reverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firstval = arr[i];
        int secondval = arr[n-i-1];
        arr[i] = secondval;
        arr[n-i-1] = firstval;

    }
}


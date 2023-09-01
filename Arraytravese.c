#include<stdio.h>
int main(){

    int addhar[5];

    // input 
    int *ptr = &addhar[0];
    for(int i=0; i<5; i++){
        printf("%d index :", i);
        scanf("%d", &addhar[1]);
                    // (ptr+i)); kar sakte hai
    }

    // output
    for(int i=0; i<5; i++){
        printf("%d index= %d\n", i, addhar[i]);
                                // *(ptr+i)); kar sakte hai
    
    }
}


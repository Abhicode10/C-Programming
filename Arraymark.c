#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int numbers[n];
    
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    
    float average = sum / n;
    printf("The average is: %.2f\n", average);
    
    return 0;
}

#include <stdio.h>

// Function to generate and print Fibonacci series up to n terms
void fibonacci(int n) {
    int first = 0, second = 1, Sum,next, i;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i < n; i++) {
         if (i == 1)
             printf("%d ",1);
         else {
            Sum = first + second;
            first = second;
            second = Sum;
        }
        printf("%d ", Sum);
    }
}

int main() {
    int n;
    
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);
    
    fibonacci(n);

    return 0;
}

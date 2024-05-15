#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    // Corner case: 1 is not a prime number
    if (num <= 1) {
        return 0;
    }
    
    // Check for factors from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            // If num is divisible by any number in this range, it's not prime
            return 0;
        }
    }
    
    // If no factors found, num is prime
    return 1;
}

int main() {
    printf("Prime numbers:\n");
    
    // Iterate over numbers from 2 to 1000 and check if they are prime
    for (int i = 2; i <= 100; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}

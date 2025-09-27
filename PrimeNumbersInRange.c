#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int lowerLimit, upperLimit;

    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);

    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);

    if (lowerLimit < 2)
        lowerLimit = 2;  

    printf("Prime numbers between %d and %d are:\n", lowerLimit, upperLimit);

    for (int number = lowerLimit; number <= upperLimit; number++) {
        bool isPrime = true;

        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            printf("%d ", number);
    }

    printf("\n");
    return 0;
}

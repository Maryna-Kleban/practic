#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int sum(int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    return result;
}

int is_prime(int n) {
    if (n <= 1) {
        return 0; // Не є простим
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Не є простим
        }
    }
    return 1; // Є простим
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    printf("Sum of numbers from 1 to %d is %d\n", num, sum(num));

    if (is_prime(num)) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}
#include <stdio.h>

int Prime_number(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

void prime_factors(int num) {
    printf("[");
    
    for (int i = 2; i <= num; i++) 
    {
        while (num % i == 0) 
        {
            printf("%d", i);
            num = num/i;
        }
    }

    printf("] ");
}

void print_numbers_with_factors(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        if (Prime_number(i))
        {
            printf("%d ", i);
        } else {
            prime_factors(i);
        }
    }

    printf("\n");
}

int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    print_numbers_with_factors(n);

    return 0;
}

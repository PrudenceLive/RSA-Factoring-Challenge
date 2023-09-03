#include <stdio.h>

/**
 * find_smallest_divisor - Finds the smallest divisor of a given number.
 * @num: A number to find the smallest divisor for.
 * Return: The smallest divisor if found, or 0 if the number is prime.
 */
int find_smallest_divisor(long int num)
{
    long int divisor;

    /* Check if the number is divisible by 2*/
    if (num % 2 == 0)
    {
        divisor = num / 2;
        printf("%ld = %ld * 2\n", num, divisor);
        return 0;
    }

    divisor = 3;
    while (divisor * divisor <= num)
    {
        if (num % divisor == 0)
        {
            long int quotient = num / divisor;
            printf("%ld = %ld * %ld\n", num, quotient, divisor);
            return 0;
        }
        else
        {
            divisor += 2;
        }
    }

    printf("%ld is prime\n", num);

    return 0;
}

int main()
{
    long int number;

    printf("Enter a natural number: ");
    scanf("%ld", &number);

    if (number <= 1)
    {
        printf("Please enter a natural number greater than 1.\n");
        return 1;
    }

    find_smallest_divisor(number);

    return 0;
}


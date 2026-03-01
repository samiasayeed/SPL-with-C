/*The program identifies numbers in a given range that are simultaneously palindromes (read the same forwards and backwards, like 101, 131, 151) and prime numbers (only divisible by 1 and themselves). */
#include <stdio.h>

int G = 10;

int peakNumber(int a);
int prime(int a);
int palindrome(int a);

int main()
{
    int range1, range2;
    scanf("%d %d", &range1, &range2);
    for (int k = range1; k <= range2; k++)
    {
        if (peakNumber(k) == 1)
        {
            printf("%d ", k);
        }
    }

    return 0;
}

int peakNumber(int a)
{
    int flag1 = palindrome(a);
    int flag2 = prime(a);
    if (flag1 == 1 && flag2 == 1)
    {
        return 1;
    }
    else
        return 0;
}

int palindrome(int a)
{
    int rev = 0;
    int temp = a;

    while (temp != 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    if (a == rev)
        return 1;
    else
        return 0;
}

int prime(int a)
{
    // Handle edge cases
    if (a <= 1)  // 0, 1, and negative numbers are not prime
    {
        return 0;
    }

    if (a == 2)  // 2 is the only even prime number
    {
        return 1;
    }

    if (a % 2 == 0)  // All other even numbers are not prime
    {
        return 0;
    }

    // Check odd divisors only, up to square root of a
    for (int i = 3; i * i <= a; i += 2)
    {
        if (a % i == 0)
        {
            return 0;  // Found a divisor, not prime
        }
    }

    return 1;  // No divisors found, is prime
}

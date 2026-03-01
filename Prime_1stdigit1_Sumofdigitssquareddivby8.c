/*What your code actually does

Your program is NOT just a prime number checker.

It checks two conditions together:

checkfunc2(n) → Prime number check

✔ Yes, this function is a prime number test

checkfunc1(n) → Extra conditions

First digit of n must be 1

Sum of digits squared must be divisible by 8

finalcheck(n)

Returns true only if BOTH conditions are satisfied*/

#include <stdio.h>

#include <stdlib.h>

int checkfunc1(int n);
int checkfunc2(int n);
int finalcheck(int n);

int checkfunc1(int n)
{
    int digit, sum = 0;
    int temp = n;

    while (temp != 0) {
        digit = temp % 10;
        sum += digit;
        temp = temp / 10;
    }

    /* find first digit */
    while (n >= 10) {
        n = n / 10;
    }

    if (n == 1 && (sum * sum) % 8 == 0) {
        return 1;
    }
    return 0;
}

int checkfunc2(int n)//Prime number check
{
    if (n <= 1)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int finalcheck(int n)
{
    if (checkfunc1(n) && checkfunc2(n)) {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (finalcheck(n)) {
        printf("Result: %d\n", n);
    } else {
        printf("Condition not satisfied\n");
    }

    return 0;
}

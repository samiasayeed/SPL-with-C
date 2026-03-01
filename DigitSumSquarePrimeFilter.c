/*This program prints all numbers within a given range that are prime and whose last digit is 1, and for which the square of the sum of digits is divisible by 8.
Takes a lower and upper limit as input and prints all numbers within that range that satisfy a specific set of conditions.

A number is printed only if all of the following are true:

The last digit is 1

The square of the sum of its digits is divisible by 8

The number passes a basic prime number test */

#include <stdio.h>
#include <stdlib.h>

int checkfunc1(int n);
int checkfunc2(int n);
int finalcheck(int n);

int checkfunc1(int n)
{
    int digit,sum=0;
    while(n!=0)
    {
        digit=n%10;
        sum+=digit;
        n=n/10;
    }
    if(digit==1 && (sum*sum)%8==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int checkfunc2(int n)
{
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;

}
int finalcheck(int n)
{
    if(checkfunc1(n)==1 && checkfunc2(n)==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int low,high;
    scanf("%d %d",&low,&high);
    for(int i=low; i<=high; i++)
    {
        if(finalcheck(i)==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}

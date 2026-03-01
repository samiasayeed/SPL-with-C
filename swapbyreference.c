/*This C program demonstrates swap by reference using pointers, where two integer values are successfully swapped by passing their memory addresses to a function. Unlike pass-by-value (which is commented out), pass-by-reference allows the function to modify the original variables in the calling function.*/
#include <stdio.h>
#include <stdlib.h>

void swap(int a,int b){
   int temp=a;
    a=b;
   b=temp;
  printf("swap function1: a=%d, b=%d\n",a,b);
}

void swapRef(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
    printf("swap function: a=%d, b=%d\n",*p,*q);
}

int main()
{
    int a=10,b=12;
    swap(a,b);
    swapRef(&a,&b);
    printf("main function: a=%d, b=%d\n",a,b);

    return 0;
}

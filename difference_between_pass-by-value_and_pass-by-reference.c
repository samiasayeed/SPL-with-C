#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b){
    int c=a;
    a=b;
    b=c;
}
void pointer_swap(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int a=5, b=7;
    swap(a,b);
    printf("After swap: a=%d, b=%d\n",a,b);
    pointer_swap(&a,&b);
    printf("After pointer swap: a=%d, b=%d\n",a,b);
    return 0;
}
/*This C program demonstrates the difference between pass-by-value and pass-by-reference in function calls, showing that the regular swap() function fails to swap the original variables because it only swaps local copies, while pointer_swap() successfully swaps them by operating directly on their memory addresses using pointers.*/

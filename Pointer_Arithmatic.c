#include <stdio.h>

/*
Pointer Arithmatic
*/

void printArray(int *t, int size){
    int i = 0;
    while(i<size){
        printf("%d ", *t);
        t++;
        i++;
    }
}

void reversePrintArray(int *t, int size){
    int i = size-1;
    while(i>=0){
        printf("%d ", *(t+i));  // FIXED: Added parentheses for proper pointer arithmetic
        i--;
    }
}

void reverseArray(int *t, int size){
    int mid = size/2;
    int i = 0;
    while(i<mid){
        int temp = *(t+i);
        *(t + i) = *(t+(size-1-i));
        *(t + (size-1-i)) = temp;
        i++;
    }
}

int main()
{
    int myArr[] ={10,12,13,32,45};
    printArray(myArr, 5);
    printf("\n\n");
    reversePrintArray(myArr,5);
    printf("\n\n");
    reverseArray(myArr,5);

    printArray(myArr, 5);
    return 0;
}

/*This C program demonstrates pointer arithmetic for array manipulation, including printing arrays by incrementing pointers, and reversing arrays in-place using pointer notation. */

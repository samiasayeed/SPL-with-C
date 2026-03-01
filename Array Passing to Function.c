#include <stdio.h>

/*
Array Passing to Function
This C program demonstrates two equivalent ways of passing arrays to functions: using pointer notation (int *t) in printArray() and using array notation (int arr[]) in printArray2(). Both methods are functionally identical because arrays in C are always passed as pointers to their first element, a concept known as "array decay".


*/

void printArray(int *t, int size){
    int i = 0;
    while(i<size){
        printf("%d ", *(t+i));
        //t++;
        i++;
    }
}

void printArray2(int arr[], int size){
    for(int i =0; i<size; i++){
        printf("%d ", arr[i]);
    }
}

int main()
{
    int myArr[] ={1,2,3,4,5};
    printArray(myArr,5);
    printf("\n\n");
    printArray2(myArr,5);
    return 0;
}

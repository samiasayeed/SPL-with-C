#include <stdio.h>

/*
Return Array from C
This C program demonstrates returning array pointers from functions and the importance of the static keyword when returning local arrays. The helloArray() function uses a static array to safely return a pointer that remains valid after the function exits, unlike regular local variables which are destroyed when the function scope ends
*/
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void mulArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
    }
}
void mulArray3(int *t, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(t+i) *= 2;
    }
}

int *mulArray2(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
    }
    return arr;
}

int *helloArray()
{
    static int arr[] = {3, 5, 7, 9, 11};
    return arr;
}

int main()
{
    int myArr[] = {1, 2, 3, 4, 5};
    // printArray(myArr, 5);
    // printf("\n\n");
    // mulArray(myArr,5);
    // int *t = mulArray2(myArr, 5);
    int *t = helloArray();
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(t+i));
        // t++;
    }
    // printArray(myArr,5);
    //mulArray3(myArr,5);
    // printArray(myArr, 5);
    return 0;
}

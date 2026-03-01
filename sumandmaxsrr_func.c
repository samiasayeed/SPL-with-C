#include <stdio.h>
#include <stdlib.h>

int sumVar(int a, int b);
int sumArray(int arr[], int size);
void maxArray(int arr[], int size);

int sumVar(int a, int b) {
    return a + b;
}

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
     //printf("sum of array = %d\n", sum);
    return sum;
}

void maxArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        //printf("max of array = %d\n", max[i]);
    }
    printf("max of array = %d\n", max);
}

int main() {
    int s = sumVar(10, 20);
    printf("sum of int = %d\n", s);

    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    s = sumArray(arr, size);
    printf("sum of array = %d\n", s);

    maxArray(arr, size);

    return 0;
}

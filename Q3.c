#include <stdio.h>

int primeChecker(int a) {
    if(a < 2) return -1;
    if(a == 2) return 1;
    if(a % 2 == 0) return -1;

    for(int i = 3; i * i <= a; i += 2) {
        if(a % i == 0) return -1;
    }
    return 1;
}

int checkerFunc1(int a) {
    int oddSum = 0, evenSum = 0;

    while(a > 0) {
        int digit = a % 10;
        if(digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }
        a /= 10;
    }

    if(oddSum < evenSum) return 1;
    return -1;
}

int DemogorgonNumber(int a) {
    if(checkerFunc1(a) == 1 && primeChecker(a) == 1) {
        return 1;
    }
    return -1;
}

int main() {
    int start, end;

    scanf("%d %d", &start, &end);

    for(int i = start; i <= end; i++) {
        if(DemogorgonNumber(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

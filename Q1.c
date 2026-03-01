#include <stdio.h>
#include <string.h>

void findLastName(char name[]) {
    int i, lastSpace = -1;

    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("The Last name is : ");
    if(lastSpace != -1) {
        for(i = lastSpace + 1; name[i] != '\0'; i++) {
            printf("%c", name[i]);
        }
    } else {
        printf("%s", name);
    }
    printf("\n");
}

float findAverage(float marks[]) {
    float sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += marks[i];
    }
    return sum / 5.0;
}

int main() {
    char name[100];
    float marks[5];

    printf("Enter student name :");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter five exam marks : ");
    for(int i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
    }

    findLastName(name);
    float avg = findAverage(marks);
    printf("Average marks is : %.1f\n", avg);

    return 0;
}

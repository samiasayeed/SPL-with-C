#include <stdio.h>
#include <string.h>

struct Customer {
    int id;
    char name[100];
    int day, month, year;
    char house[20];
    float purchase[3];
};

int substringChecker(char *mainString, char *searchString) {
    int mainLen = strlen(mainString);
    int searchLen = strlen(searchString);

    for(int i = 0; i <= mainLen - searchLen; i++) {
        int j;
        for(j = 0; j < searchLen; j++) {
            if(mainString[i + j] != searchString[j]) {
                break;
            }
        }
        if(j == searchLen) {
            return 1;
        }
    }
    return 0;
}

float calculateAverage(float purchase[]) {
    return (purchase[0] + purchase[1] + purchase[2]) / 3.0;
}

int main() {
    int n;
    printf("Num of Customer: ");
    scanf("%d", &n);

    struct Customer customers[n];

    for(int i = 0; i < n; i++) {
        printf("Customer %d:\n", i + 1);
        printf("Name: ");
        getchar();
        fgets(customers[i].name, sizeof(customers[i].name), stdin);
        customers[i].name[strcspn(customers[i].name, "\n")] = '\0';

        printf("Birthday: ");
        scanf("%d/%d/%d", &customers[i].day, &customers[i].month, &customers[i].year);

        printf("House: ");
        scanf("%s", customers[i].house);

        printf("Purchase: ");
        scanf("%f %f %f", &customers[i].purchase[0], &customers[i].purchase[1], &customers[i].purchase[2]);
    }

    int gryffindorIndex = -1;
    float gryffindorMax = -1;

    int slytherinIndex = -1;
    float slytherinMax = -1;

    for(int i = 0; i < n; i++) {
        float avg = calculateAverage(customers[i].purchase);

        if(strcmp(customers[i].house, "Gryffindor") == 0) {
            if(substringChecker(customers[i].name, "est") == 1) {
                if(avg > gryffindorMax) {
                    gryffindorMax = avg;
                    gryffindorIndex = i;
                }
            }
        } else if(strcmp(customers[i].house, "Slytherin") == 0) {
            if(substringChecker(customers[i].name, "rus") == 1) {
                if(avg > slytherinMax) {
                    slytherinMax = avg;
                    slytherinIndex = i;
                }
            }
        }
    }

    printf("\nList of Loyal Customers:\n");
    printf("Gryffindor:\n");
    if(gryffindorIndex == -1) {
        printf("Nil\n");
    } else {
        printf("%s | %02d/%02d/%d | %.2f\n",
               customers[gryffindorIndex].name,
               customers[gryffindorIndex].day,
               customers[gryffindorIndex].month,
               customers[gryffindorIndex].year,
               gryffindorMax);
    }

    printf("\nSlytherin:\n");
    if(slytherinIndex == -1) {
        printf("Nil\n");
    } else {
        printf("%s | %02d/%02d/%d | %.2f\n",
               customers[slytherinIndex].name,
               customers[slytherinIndex].day,
               customers[slytherinIndex].month,
               customers[slytherinIndex].year,
               slytherinMax);
    }

    return 0;
}

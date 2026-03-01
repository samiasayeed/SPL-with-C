#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

int isLeapYear(int year) {
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int main() {
    struct date dates[5];

    printf("Enter 5 dates (day month year):\n");
    for(int i = 0; i < 5; i++) {
        printf("Date %d: ", i + 1);
        scanf("%d %d %d", &dates[i].day, &dates[i].month, &dates[i].year);
    }

    printf("\nStored dates:\n");
    for(int i = 0; i < 5; i++) {
        printf("Date %d: %d/%d/%d\n", i + 1, dates[i].day, dates[i].month, dates[i].year);
    }

    printf("\nDates that fall on a leap year:\n");
    for(int i = 0; i < 5; i++) {
        if(isLeapYear(dates[i].year)) {
            printf("%02d/%02d/%d\n", dates[i].day, dates[i].month, dates[i].year);
        }
    }

    return 0;
}

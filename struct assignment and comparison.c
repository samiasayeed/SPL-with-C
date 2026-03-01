#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct student
{
    int id;
    char name[20];
    float cgpa;
};

int main()
{
    struct student s1, s2;

    printf("Enter ID: ");
    scanf("%d", &s1.id);
    getchar();  // consume newline

    printf("Enter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';  // remove newline

    printf("Enter CGPA: ");
    scanf("%f", &s1.cgpa);

    printf("id=%d\nname=%s\ncgpa=%.2f\n", s1.id, s1.name, s1.cgpa);

    // Struct assignment - copies all members
    s2 = s1;

    // Member-wise comparison
    if(s1.id == s2.id &&
       strcmp(s1.name, s2.name) == 0 &&
       fabs(s1.cgpa - s2.cgpa) < 0.0001)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }

    return 0;
}

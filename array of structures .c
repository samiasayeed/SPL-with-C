#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    char name[20];
    float cgpa;
};

int main()
{
    int size;
    scanf("%d",&size);
    struct student s[size];
    for(int i=0;i<size;i++){
        scanf("%d",&s[i].id);
        getchar();
        fgets(s[i].name, sizeof(s[i].name), stdin);
        scanf("%f",&s[i].cgpa);
    }
    for(int i=0;i<size;i++){
        printf("info of student %d\n",i+1);
        printf("%d\n",s[i].id);
        puts(s[i].name);
        printf("%f\n",s[i].cgpa);
    }
    return 0;
}

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
    float max=s[0].cgpa;int index=0;
    for(int i=0;i<size;i++){
        if(max<s[i].cgpa){
            max=s[i].cgpa;
            index=i;
        }
    } printf("id=%d got highest cgpa=%.2f",s[index].id, s[index].cgpa);
    return 0;
}

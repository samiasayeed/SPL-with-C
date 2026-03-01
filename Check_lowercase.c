#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[20];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';
    puts(str);

    int i=0,count=0;
    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z'){
        count++;
        }
        i++;
    }
    printf("total lowecase=%d\n",count);

    return 0;
}

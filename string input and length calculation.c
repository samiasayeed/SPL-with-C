#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char str[20];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';
    /*strcspn(str, "\n") finds the position of the first newline character in str

    Replaces the newline with null terminator '\0'

    This removes the trailing newline that fgets() includes*/
    puts(str);

    int i=0,count=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    printf("length=%d\n",count);
    printf("length=%d\n",strlen(str));
    return 0;
}

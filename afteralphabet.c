#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0;
    while(str[i]!='\0'){
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
            str[i]++;
        }
        if(str[i]=='Z'+1 || str[i]=='z'+1){  // Check after increment
            str[i]=str[i]-26;  // Subtract 26 to wrap around
        }
        i++;
    }
    puts(str);
    return 0;
}

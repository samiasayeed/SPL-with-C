#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[100], sub[100];
    int i, j, count, flag = 0;

    printf("Enter main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter substring: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';

    int subLen = strlen(sub);

    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0;
        count = 0;

        // Match substring from current position
        while(str[i + j] == sub[j] && sub[j] != '\0')
        {
            count++;
            j++;
        }

        // Check if full substring matched
        if (count == subLen)
        {
            printf("%s occurs in %s at position %d\n", sub, str, i);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("%s does not occur in %s\n", sub, str);
    }

    return 0;
}

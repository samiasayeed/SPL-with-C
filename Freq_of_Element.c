#include <stdio.h>
#include <stdlib.h>

int main()
{  //int freq2[11]={[0 ... 10]=3,};
   // int arr[100], freq[100];
    int size, i, j, count=0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size], freq[size];
    /* Input elements in array */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        /* Initially initialize frequencies to -1 */
        freq[i] = -1;
    }
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            /* If duplicate element is found */
            if(arr[i]==arr[j])
            {
                count++;
                /* Make sure not to count frequency of same element again */
                freq[j] = 0;
            }
        }
        /* If frequency of current element is not counted */
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    /*
    * Print frequency of each element
    */
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    return 0;
}

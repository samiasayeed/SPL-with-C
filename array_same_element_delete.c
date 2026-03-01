#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int k=i+1; k<n; k++)
        {
            if(arr[i]==arr[k])
            {
                for(int j=k; j<n-1; j++)
                {
                    arr[j]=arr[j+1];
                }
                n--;
                i--;
            }
        }
    }
    //printing array
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

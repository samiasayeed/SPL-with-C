#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //how to determine array's size
    int size= sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

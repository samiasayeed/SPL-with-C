#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);

    int arr[n];
    //input
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //index i, value arr[i]
    for(int i=0; i<n; i++){
        if(i%2==0){
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}

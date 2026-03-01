#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    //input
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //max
    int sum=0,max=arr[0],min=arr[0],maxi=0,mini=0;
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
            maxi=i;
        }
    }
    printf("max value=%d, max index=%d\n",max,maxi);
    //min
    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min=arr[i];
            mini=i;
        }
    }
    printf("min value=%d, min index=%d\n",min,mini);
    //sum,avg
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    float avg= sum/n;
    printf("sum=%d, avg=%f\n",sum,avg);
    //printing array
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

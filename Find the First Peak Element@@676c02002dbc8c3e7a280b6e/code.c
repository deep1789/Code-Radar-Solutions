#include <stdio.h>

int main() {

    int arr[20],i,n,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    if(arr[0]>arr[1])
    {
        flag=1;
        printf("%d",arr[0]);
    }
    else{
        for(i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                flag=1;
                printf("%d",arr[i]);
            }
        }

        if(flag==0)
        {
            printf("%d",arr[n-1])
        }

        return 0;
    }



#include <stdio.h>
int main() {

    int arr[20],i,n,arr2[20]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    for(i=0;i<n;i++)
    {

        arr2[arr[i]]++;
    }

    for(i=0;i<n;i++)
    {
        if(arr2[i]!=0)
        {
            printf("%d %d",i,arr2[i]);
        }

    }


    return 0;

}


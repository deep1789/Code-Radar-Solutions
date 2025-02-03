#include <stdio.h>

int main() {

    int arr[20],i,n,k,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
   while(k--)
    {
    temp = arr[n-1];

    for(i=n-2;i>=0;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
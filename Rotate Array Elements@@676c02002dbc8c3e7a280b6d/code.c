#include <stdio.h>

int main() {

    int arr[20],i,n,k,temp;
    scanf("%d",&n);
    for(i=0;i<50;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    while(k--)
    {
    temp = a[n-1];

    for(i=n-2;i>=0;i--)
    {
        a[i+1] = a[i];
    }
    a[0] = temp;
    }
    return 0;

}
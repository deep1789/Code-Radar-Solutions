#include <stdio.h>

int main() {

    int arr[20],i,n,flag=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
return 0;
}

#include <stdio.h>

int main() {

    int arr[20],i,n,flag=0,max_,prev;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    if(n==1)
    {
        printf("-1");
    }
    else
    {

    max_ = arr[0];
    prev = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max_)
        {
            prev = max_;
            max_ = arr[i];
        }

    }

    printf("%d",prev);
    }


return 0;
}

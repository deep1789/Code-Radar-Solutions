#include <stdio.h>

int main() {

    int arr[20],i,n,flag=0,max_=-1000,prev;
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

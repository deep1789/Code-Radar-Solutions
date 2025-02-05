#include <stdio.h>

int main() {

    int arr[20],i,n,flag=0,max_=-1000,prev;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>max_)
        {
            prev = max_;
            max_ = arr[i];
        }

    }

    if(max_!=prev)
    {
    printf("%d",prev);
    }
    else
    {
        printf("-1");
    }



return 0;
}

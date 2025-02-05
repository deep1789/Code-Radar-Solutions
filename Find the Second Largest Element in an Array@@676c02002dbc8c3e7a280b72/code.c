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

    max_ = arr[n-1];
    prev = arr[n-1];
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]>max_)
        {
            flag=1;
            prev = max_;
            max_ = arr[i];
        }

    }

    if(flag==1)
    {

    printf("%d",prev);
    }
    else{
        printf("-1");
    }
    }


return 0;
}

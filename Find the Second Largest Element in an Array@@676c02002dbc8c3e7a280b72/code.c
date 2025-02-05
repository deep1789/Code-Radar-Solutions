#include <stdio.h>

int main() {

    int arr[20],i,n,flag=0,max_=INT_MIN, prev;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i] > max_)
        {
            
        }
    }
    printf("%d", max_);
/*
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
        if(arr[i]>max_ || )
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

*/
return 0;
}

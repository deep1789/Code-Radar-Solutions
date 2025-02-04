#include <stdio.h>

int main() {

    int arr[20],i,n,flag=0,max_=-1000,min_=10000000;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>max_)
        {
            max_ = arr[i];
        }
        if(arr[i]<min_)
        {
            min_ = arr[i];
        }

    }

    printf("%d %d",min_,max_);




return 0;
}

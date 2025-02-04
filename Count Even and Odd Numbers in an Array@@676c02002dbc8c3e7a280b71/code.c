#include <stdio.h>

int main() {

    int arr[20],i,n,flag=0,evencount=0,oddcount=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            evencount++;
        }
        if(arr[i]!==0)
        {
            oddcount++;
        }
    }


return 0;
}
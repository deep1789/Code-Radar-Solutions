#include <stdio.h>

int main() {

    int arr[20],i,n,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    if(n==1)
    {
    	printf("-1");
	}

    else if(arr[0]>arr[1])
    {
        flag=1;
        printf("%d",arr[0]);
    }
    else{
        for(i=1;i<n-1;i++)
        {
            if((arr[i]>arr[i-1]) && (arr[i]>arr[i+1]))
            {
                flag=1;
                printf("%d",arr[i]);
                break;
            }
        }

    if(flag==0)
    {
            if(arr[n-1]!=arr[n-2])
            {
            printf("%d",arr[n-1]);
            }
            else{
                printf("-1");
            }
        }

        return 0;
    }


}
#include <stdio.h>

    int find_freq(int a[],int i, int n)
    {

        int j,count_=0,ele;
        ele = a[i];
        for(j=i;j<n;j++)
        {
            if(a[j]==ele)
            {
                count_++;
            }

        }

        return count_;

    }

int main() {

    int arr[1000],i,n,arr2[1000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
/*
    for(i=0;i<n;i++)
    {

        arr2[arr[i]]++;
    }

    for(i=0;i<1000;i++)
    {
        if(arr2[i]!=0)
        {
            printf("%d %d\n",i,arr2[i]);
        }

    }*/
    
    for(i=0;i<n;i++)
    {
        if(arr2[arr[i]]!=1)
        {
        	
            arr2[arr[i]] = 1;
            int frq = find_freq(arr,i,n);
            printf("%d %d\n",arr[i],frq);
        }

    }

    

    return 0;

}


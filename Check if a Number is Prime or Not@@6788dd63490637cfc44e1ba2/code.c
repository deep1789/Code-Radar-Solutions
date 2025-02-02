#include <stdio.h>


int main() {
    int x,i;
    scanf("%d",&x);

    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    
    return 0;
}
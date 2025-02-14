#include <stdio.h>

int main() {

    int a[20],i,n,flag=0,flag2=0,large,slarge,pos;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large = a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]>=large)
        {
            large = a[i];
            pos = i;
        }

    }

    a[pos] = 0;
    slarge = a[0];

    for(i=0;i<n;i++)
    {
        if((a[i]>=slarge) && (slarge!=large))
        {
            flag =1;
            slarge = a[i];
        }

    }

    if(flag==0 || large==slarge)
    {
        printf("-1");
    }
    else
    {
        printf("%d",slarge);
    }

return 0;
}

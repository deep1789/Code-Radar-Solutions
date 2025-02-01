#include <stdio.h>
int main() {
    int x,r=0,c=0;
    scanf("%d",&x);
   for(r=1;r<=x;r++)
    {
        for(c=1;c<=x;c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
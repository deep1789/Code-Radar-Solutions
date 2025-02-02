#include <stdio.h>


int main() {
    int x;
    scanf("%d",&x);
    if((x%5==0)&&(x%3==0))
    {
        printf("Divisible by Both");
    }
    else if((x%5==0))
    {
        printf("Divisible by 5");
    }
    else{
        printf("Divisible by 3");
    }
    return 0;
}
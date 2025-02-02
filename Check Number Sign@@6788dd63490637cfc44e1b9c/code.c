#include <stdio.h>

int main() {

    int n1;

    scanf("%d",&n1);
    if(n1>0)
    {
        printf("Positive");
    }
    else if(n1<0)
    {
        printf("Negative");
    }
    else{
        printf("Zero");
    }
return 0;
}
#include <stdio.h>


int main() {
    int age,st;
    scanf("%d%d",&age,&st);
    if(st==0)
    {
        printf("Not Eligible");
    }
    else if(age>=18)
    {
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}
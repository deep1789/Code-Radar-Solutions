#include <stdio.h>
int main() {
    int n1,n2,n3;
    float res;
    scanf("%d%d%d",&n1,&n2,&n3);
    res = (n1+n2+n3)/3;
    printf("Average: %.2f",res);
    
    return 0;
}
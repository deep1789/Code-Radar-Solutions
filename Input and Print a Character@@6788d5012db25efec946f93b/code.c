#include <stdio.h>

int main() {
    int a=1022;
    printf("%d",*(&a));
    return 0;
}
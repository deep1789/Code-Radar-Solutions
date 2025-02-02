#include <stdio.h>

int main() {
    int x, y;
    char ch;
    
    // Reading inputs
    scanf("%d%d", &x, &y);
    scanf(" %c", &ch);  // Fixed input issue by adding a space before %c
    
    // Displaying the operator
    printf("%c\n", ch);

    // Performing operations based on the operator
    switch (ch) {
        case '+':
            printf("%d\n", x + y);
            break;
        case '-':
            printf("%d\n", x - y);
            break;
        case '*':
            printf("%d\n", x * y);
            break;
        case '/':
            // Avoid division by zero
            if (y != 0) {
                printf("%d\n", x / y);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

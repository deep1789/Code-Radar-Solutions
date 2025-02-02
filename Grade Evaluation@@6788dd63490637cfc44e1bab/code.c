#include <stdio.h>


int main() {
    int x,y;
    char ch;
    scanf("%d%d",&x,&y);
    scanf(" %c",&ch);

    switch(ch)
    {
        case 'A':
        {
            printf("Excellent");
            break;

        }
        case 'B':
        {
            printf("Good");
            break;

        }
        case 'C':
        {
            printf("Average");
            break;

        }
        case 'D':
        {
            printf("Below Average");
            break;

        }
        
        case 'F':
        {
            printf("Fail");
            break;

        }
        default:
        {
            printf("Invalid grade");
        }

    }


    
}
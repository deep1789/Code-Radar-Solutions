#include <stdio.h>


int main() {
    char x;
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        printf("Vowel");
    }
    else if((x>=65&&x<=90)||(x>=97&&x<=122))
    {
        printf("Consonant");
    }
    
    else{
        printf("Special Character");   
         }
         printf("%d",x);
        return 0;
}
    
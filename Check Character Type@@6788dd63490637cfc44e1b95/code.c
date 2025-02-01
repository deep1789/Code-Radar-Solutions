#include <stdio.h>


int main() {
    char x;
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        printf("Vowel");
    }
    else if((x>=65&&x<=90)||(x>=97&&x<=122))
    {
        printf("Consonant");
    }
    else if(x>=48&&x<=58)
    {
        printf("Digit");
    }
    
    else{
        printf("Special Character");   
         }
         
        return 0;
}
    
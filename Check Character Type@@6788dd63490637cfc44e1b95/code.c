#include <stdio.h>


int main() {
    char x;
    scanf("%d",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        printf("Vowel");
    }
    else if((a>=65&&a<=90) || (a>=97&&a<=122))
    {
        printf("Consonant");
    }
    else{
        printf("Special Character");    }
    
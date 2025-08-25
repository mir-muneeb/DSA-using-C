#include<stdio.h>

int main(){
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);

   // this comparision is going based on ASCII code
    if(ch >='A' && ch <='Z'){     
        printf("you have entered an upper case character: %c",ch);
    }
    else if (ch >='a' && ch <='z')
    {
        printf("you have entered a lower case character: %c",ch);
    }
    return 0;
}
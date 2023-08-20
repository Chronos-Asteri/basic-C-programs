//Write A Program to find the given letter is upper case or lower case

#include <stdio.h>

int main() {
    char ch;

    printf("Enter A Character : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c Is A Uppercase Letter. \n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c Is A Lowercase Letter. \n", ch);
    }
    else {
        printf("%c is not an alphabet", ch);
    }
    
}
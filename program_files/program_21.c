// Write a program to get the length of a string

#include <stdio.h>

int main() {

    char str[] = "Good Morning";
    int len = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' '){
            continue;
        }
        else {
            len += 1;
        }
    }

    printf("Given String '%s' \n", str);
    printf("The Length of the string is %d", len);

    return 0;
}
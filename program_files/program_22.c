// Write a program to concatenate two strings 

#include <stdio.h>
#include <string.h>

int main() {

    char str1[] = "My Name Is ";
    char str2[] = "Roshaan";

    int new_len = strlen(str1) + strlen(str2) + 1;

    char concat[new_len];

    for (int i = 0; i <= strlen(str1); i++) {
        concat[i] = str1[i];
    }
    
    for (int i = 0; i <= strlen(str2); i++) {
        concat[strlen(str1) + i] = str2[i];
    }

    printf("String 1 : '%s' \n", str1);
    printf("String 2 : '%s' \n", str2);
    printf("The Concatenated String : '%s'", concat);

    return 0;
}
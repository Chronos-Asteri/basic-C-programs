// Write A Program to compare two strings 

#include <stdio.h>
#include <string.h>

int compare( char[], char[]);

int main() {

    char str1[] = "World";
    char str2[] = "World";
    char str3[] = "Good";

    int cp1 = compare(str1, str2);
    int cp2 = compare(str1, str3);

    printf("Comparing '%s' and '%s' : %d \n", str1, str2, cp1);
    printf("Comparing '%s' and '%s' : %d \n", str1, str3, cp2);

    return 0;
}

int compare( char a[], char b[]){

   int check = 1;

    for (int i=0; a[i] != '\0'; i++){
        if (a[i] == b[i]){
            continue;
        }
        else{
            check = 0;
        }
    }

    return check;
}


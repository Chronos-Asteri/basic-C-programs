// Write a program to check if a string is a palindrome or not

#include <stdio.h>
#include <string.h>

int checker(char[]);

int main() {

    char st1[] = "racecar";
    char st2[] = "morning";

    printf("1 --> Yes \n0 --> No \n");
    printf("Is '%s' a panlindrome : %d\n", st1, checker(st1));
    printf("Is '%s' a panlindrome : %d\n", st2, checker(st2));
}

int checker(char st[]){

    int status = 1;

    int mid = (strlen(st))/2;

    for (int i=0; i < mid+1; i++){
        if (st[i] == st[strlen(st)-1-i]){
            continue;
        }
        else {
            status = 0;
        }
    }

    return status;
}
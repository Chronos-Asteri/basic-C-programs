// Write A Program to check whether a number is palindrome or not.

# include <stdio.h>

int main() {

    int num, org, rev=0, rem;

    printf("Enter A Number: ");
    scanf("%d", &num);
    org = num;

    while (num != 0){
        rem = num%10;
        rev = rev*10 + rem;
        num /= 10;
    }

    if (rev == org){
        printf("The number %d is A palindrome", org);
    }
    else {
        printf("The number %d is NOT a palindrome", org);
    }


    return 0;
}

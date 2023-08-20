// WAP to find out a consonant or vowel in the input string

#include <stdio.h>

int main() {

    char ch;

    printf("Enter An Alphabet : ");
    scanf("%c", &ch);

    int vow_lower = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    int vow_upper = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (vow_lower || vow_upper == 1){
        printf("%c is a Vowel. \n", ch);
    }
    else{
        printf("%c is a Consonant. \n", ch);
    }

    return 0;

}


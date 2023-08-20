//Write a program to count vowels in a string

#include <stdio.h>
int main()
{
  int c = 0, count = 0;
  char s[] = "I am current programming in C language";

    while (s[c] != '\0') {
        if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
            count++;
        c++;
  }

    printf("Given string '%s' \n", s);
    printf("Number of vowels in the string: %d \n", count);

    return 0;
}
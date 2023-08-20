// Write a program to check if a number is even or odd

# include <stdio.h>

int main(){
    
    int num1;

    printf("Enter A Number: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0){
        printf("%d ", num1);
        printf("Is A Even Number \n");
    }

    else {
        printf("%d ", num1);
        printf("Is A Odd Number \n");
    }

    return 0;

}
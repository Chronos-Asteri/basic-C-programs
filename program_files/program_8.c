// WAP to make a calculator using switch.

#include <stdio.h>

int main() {

    double a, b, res;
    char op;

    printf("Enter Operation (+, *, -, /) : ");
    scanf("%c", &op );

    printf("Enter First Number : ");
    scanf("%lf", &a );

    printf("Enter Second Number : ");
    scanf("%lf", &b );

    
    switch (op) {
        case '+':
            res = a + b;
            printf("Addition : %lf \n", res);
            break;

        case '-':
            res = a - b;
            printf("Subtraction : %lf \n", res);
            break;

        case '*':
            res = a*b;
            printf("Multiplication : %lf \n", res);
            break;

        case '/':
            res = a/b;
            printf("Division : %lf \n", res);
            break;

        default:
            printf("Error Occured");

    }

    return 0;

}
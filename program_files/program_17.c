/* Write a program to swap the numbers with and without using temporary variable */

#include <stdio.h>

int main() {

    // using temporary variable

    int num_1, num_2, temp_1;

    printf("Using temporary variable \n");
    printf("Enter a Number 1 & 2: \n");
    scanf("%d", &num_1);
    scanf("%d", &num_2);

    printf("The Numbers Before Swapping %d, %d \n", num_1, num_2);
    temp_1 = num_1;
    num_1 = num_2;
    num_2 = temp_1;

    printf("The Numbers After Swapping %d, %d \n", num_1, num_2);
    printf("\n");

    // not using temporary variable

    int num_3, num_4;

    printf("Not using temporary variable \n");
    printf("Enter a Number 3 & 4: \n");
    scanf("%d", &num_3);
    scanf("%d", &num_4);

    printf("The Numbers Before Swapping %d, %d \n", num_3, num_4);
    
    num_3 = num_3 - num_4;
    num_4 = num_3 + num_4;
    num_3 = num_4 - num_3;

    printf("The Numbers After Swapping %d, %d \n", num_3, num_4);
    printf("\n");

    return 0;
}


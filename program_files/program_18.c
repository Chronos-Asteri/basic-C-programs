/* Write a program to create array with reverse elements */

#include <stdio.h>

int main() {

    int ar[7] = {0,1,2,3,4,5,6};
    int rev_ar[7];

    int n = sizeof(ar)/sizeof(ar[0]);

    for(int i = 0; i < n ; i++){ 
        rev_ar[n-i-1] = ar[i];
    }

    printf("Given Array: \n");

    for(int i = 0; i < n ; i++){
        printf("%d, ", ar[i]);
    }

    printf("\n");

    printf("Reversed Array: \n");

    for(int i = 0; i < n ; i++){
        printf("%d, ", rev_ar[i]);
    }
    return 0;
}
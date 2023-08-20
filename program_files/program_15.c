// Write a program to print the pattern
// ******
// *    *
// *    *
// ******

# include <stdio.h>

int main() {

    int i, n, j;

    printf("Enter A Number: ");
    scanf("%d", &n);
    printf("\n");
    printf("------------------The Pattern------------------\n\n");

    for (i=1; i<=n; i++){

        if (i == 1 || i == n){
            for (j = 1; j<=6; j++){
                printf("*");
            }
            printf("\n");
        }

        else{
            for (j = 1; j <=6; j++){
                if (j == 1 || j == 6){
                    printf("*");
                }
                else {
                    printf(" ");
                }    
            }
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}


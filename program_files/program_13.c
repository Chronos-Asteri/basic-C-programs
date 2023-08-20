// Write a program to print the reverse of the table for a number 'n'.

# include <stdio.h>

int main() {

    int n, i;
    
    printf("Enter A Number: ");
    scanf("%d", &n);

    printf("-----------The Table-----------\n");

    for (i = 10; i>0; i--){

        printf("%d x %d = %d \n", n, i, n*i);
        
    }
    return 0;
}
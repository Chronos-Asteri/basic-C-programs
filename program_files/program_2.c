# include <stdio.h>

int main() {
    
    int n1, n2, sum;

    printf("Please Enter 1st Number\n");
    scanf("%d", &n1);
    printf("\n");

    printf("Please Enter 2nd Number\n");
    scanf("%d", &n2);
    printf("\n");

    sum = n1 + n2;

    printf("Sum Of Two Numbers ");
    printf("%d", n1);
    printf(" and ");
    printf("%d", n2); 
    printf(" is %d \n", sum);

    return 0;
}
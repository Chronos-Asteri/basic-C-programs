// Write a program to print the fibonacci series upto n terms.

# include <stdio.h>

int main() {

    int n, a=0, b=1, i, s;

    printf("Enter A Number Of Terms In The Series (>2): ");
    scanf("%d", &n);

    printf("Fibonacci series upto %d terms :", n);

    
    printf(" %d, %d,", a, b);
    for (i=1; i<=n-2; i++){    
        s = a+b;
        printf(" %d,", s);
        a = b;
        b = s;
    }
    
    return 0;
}
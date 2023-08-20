// Write a programm for linear search

#include <stdio.h>

#define MAX_SIZE 1000

int main() {
    
    int n;
    int a[MAX_SIZE];

    printf("Enter The number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter The values of array: \n");
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int num;

    printf("Enter the number to be searched: ");
    scanf("%d", &num);

    int status = 0;
    int k = MAX_SIZE;

    /* Linear Search */
    for (int i=0; i<n; i++){
        if (a[i] == num){
            status = 1;
            k = i;
            break;  
        }
        else{
            continue;
        }
    }

    if (status == 1){
        printf("Number found in the array at %d-position", k+1);
    }
    else{
        printf("Number NOT found in the array");

    }
   
    return 0;

}

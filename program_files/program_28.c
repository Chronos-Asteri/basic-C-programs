// Write a programm for binary search

#include <stdio.h>

#define MAX_SIZE 1000

int binarySearch(int ar[], int, int, int);

int main() {
    
    int n;
    int a[MAX_SIZE];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter The values of array (ascending order): \n");
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int num;

    printf("Enter the number to be searched: ");
    scanf("%d", &num);

    int value = binarySearch(a, num, n-1, 0);

    if (value == -1){
        printf("Number Not Found !!");
    }
    else{
        printf("Number found in the array at %d-position", value+1);
    }

    return 0;

}

int binarySearch(int a[], int x, int high, int low){

    if (high >= low){

        int mid = low + (high - low) / 2;

        if (a[mid] == x){
            return mid;
        }

        else if (a[mid] > x){
            return binarySearch(a, x, mid-1, low);
        }

        else if (a[mid] < x){
            return binarySearch(a, x, high, mid+1);
        }
    }

    return -1;
}

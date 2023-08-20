// Write a fucntion to count the number of odd numbers in an array and display those numbers

#include<stdio.h>

int main()
{
    int arr[]={0,1,3,4,5,2,2,2,2,4,21,55,37,32,78}; 
    int size, odd_count = 0;

    size = sizeof(arr)/sizeof(arr[0]);

    printf("Given Array: ");

    for(int i = 0; i < size ; i++){
        printf("%d, ", arr[i]);
    }

    printf("\n Odd numbers are ");

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 1){
            odd_count++;
            printf(" %d,",arr[i]);
        }
    }

    printf("\n Odd number count = %d\n",odd_count);

    return 0;
}
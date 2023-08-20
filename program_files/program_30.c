// Write a program for bubble sort

#include <stdio.h>

void bubbleSort(int array[], int size) {

  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {

      if (array[i] > array[i + 1]) {     

        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = { 20, 18, 66, 52, 76, 94, 100};
  
  int size = sizeof(arr) / sizeof(arr[0]);

    printf("The Unsorted Array: ");
    printArray(arr, size);

    bubbleSort(arr, size);

    printf("The Sorted Array: ");
    printArray(arr, size);

    return 0;
  
}
// Write a program for selection sort

#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      if (array[i] < array[min_idx])
        min_idx = i;
    }

    swap(&array[min_idx], &array[step]);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {38, 45, 67, 22, 100, 59, 90};

  int size = sizeof(arr) / sizeof(arr[0]);

  printf("The Unsorted Array: ");
  printArray(arr, size);

  selectionSort(arr, size);

  printf("The Sorted Array: ");
  printArray(arr, size);

  return 0;
  
}
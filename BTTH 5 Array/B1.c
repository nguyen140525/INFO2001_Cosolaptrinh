#include <stdio.h>
#include <time.h>

// Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main() {
    int arr[10];
    int i;

    printf("Nhap gia tri cho cac phan tu trong mang:\n");
    for (i = 0; i < 10; i++) {
        printf("Nhap gia tri cho phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nMang vua nhap:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }


    int bubbleSortedArr[10];
    for (i = 0; i < 10; i++) {
        bubbleSortedArr[i] = arr[i];
    }

    printf("\n\nMang sau khi sap xep bang Bubble Sort:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", bubbleSortedArr[i]);
    }

    int selectionSortedArr[10];
    for (i = 0; i < 10; i++) {
        selectionSortedArr[i] = arr[i];
   }


    printf("\nMang sau khi sap xep bang Selection Sort:\n");
    for (i = 0; i < 10; i++) {
       printf("%d ", selectionSortedArr[i]);
   }

   return 0;
}

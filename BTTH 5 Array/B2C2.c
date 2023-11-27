#include <stdio.h>

// Hàm tìm kiem theo nhi phan
int timKiemNhiPhan(int arr[], int n, int x) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid; // Tr? v? ch? s? c?a ph?n t? n?u tìm th?y
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return 0; 
}

int main() {
    int arr[10];
    
    printf("Nhap gia tri cho cac phan tu trong mang (mang can duoc sap xep tang dan):\n");
    int i;
    
    for ( i = 0; i < 10; i++) {
        printf("Nhap gia tri cho phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int value_to_find;
    printf("Nhap gia tri can tim kiem: ");
    scanf("%d", &value_to_find);

    int result = timKiemNhiPhan(arr, 10, value_to_find);

    if (result != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d\n", value_to_find, result);
    } else {
        printf("Gia tri %d khong co trong mang\n", value_to_find);
    }

    return 0;
}

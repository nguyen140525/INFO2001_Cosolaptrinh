#include <stdio.h>

// Hàm tìm ki?m tuy?n tính
int timKiemTuyenTinh(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[10];
    
    printf("Nhap gia tri cho cac phan tu trong mang:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nhap gia tri cho phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nMang vua nhap:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }


    int value_to_find;
    printf("\nNhap gia tri can tim kiem: ");
    scanf("%d", &value_to_find);

    int result = timKiemTuyenTinh(arr, 10, value_to_find);

    if (result != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d\n", value_to_find, result);
    } else {
        printf("Gia tri %d khong co trong mang\n", value_to_find);
    }

    return 0;
}

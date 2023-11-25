#include <stdio.h>

int main() {
    int array_size;

   
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &array_size);

    
    int my_array[array_size];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < array_size; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &my_array[i]);
    }

  
    printf("Cac phan tu chan nho hon 20:\n");
    for (int i = 0; i < array_size; i++) {
        if (my_array[i] % 2 == 0 && my_array[i] < 20) {
            printf("%d ", my_array[i]);
        }
    }

    return 0;
}







    

  









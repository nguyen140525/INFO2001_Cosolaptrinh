#include <stdio.h>

#define MAX_STUDENTS 50 

int main() {
    int soLuongSinhVien;
    float diem[MAX_STUDENTS]; 
    float tongDiem = 0, diemTrungBinh;

    
    printf("Nhap so luong sinh vien trong lop: ");
    scanf("%d", &soLuongSinhVien);

    if (soLuongSinhVien > MAX_STUDENTS || soLuongSinhVien <= 0) {
        printf("So luong sinh vien khong hop le.\n");
        return 1; 
    }

  int i;
    for ( i = 0; i < soLuongSinhVien; i++) {
        printf("Nhap diem cua sinh vien %d: ", i + 1);
        scanf("%f", &diem[i]);
        
        
        if (diem[i] < 0 || diem[i] > 10) {
            printf("Diem khong hop le. Diem phai nam trong khoang tu 0 den 10.\n");
            return 1; 
        }
        
        tongDiem += diem[i];
    }
    diemTrungBinh = tongDiem / soLuongSinhVien;
    printf("Diem trung binh cua lop la: %.2f\n", diemTrungBinh);

    return 0;
}


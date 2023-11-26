#include <stdio.h>
// Quan lı danh sách sinh viên
struct Student {
    char Name[50];
    int stdId;
    int age;
    float grade;
};

int main() {
    struct Student s[41];
    int i;
    
    for (i = 0; i < 41; i++) {
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
        
        printf("Nhap ten: ");
        getchar(); 
        fgets(s[i].Name, sizeof(s[i].Name), stdin);
        
        printf("Nhap ma so: ");
        scanf("%d", &s[i].stdId);
        
        printf("Nhap tuoi: ");
        scanf("%d", &s[i].age);
        
        printf("Nhap diem: ");
        scanf("%f", &s[i].grade);
        
        printf("\nThong tin sinh vien %d:\n", i + 1);
        printf("Ten: %s", s[i].Name);
        printf("Ma so: %d\n", s[i].stdId);
        printf("Tuoi: %d\n", s[i].age);
        printf("Diem: %.2f\n", s[i].grade);
    }
	printf("\n");

    int studentToUpdate;
    printf("Nhap so thu tu sinh vien can cap nhat thong tin: ");
    scanf("%d", &studentToUpdate);

    if (studentToUpdate > 0 && studentToUpdate <= i) {
        printf("\nNhap thong tin moi cho sinh vien %d:\n", studentToUpdate);

        printf("Nhap ten: ");
        getchar();
        fgets(s[studentToUpdate - 1].Name, sizeof(s[studentToUpdate - 1].Name), stdin);

        printf("Nhap ma so: ");
        scanf("%d", &s[studentToUpdate - 1].stdId);

        printf("Nhap tuoi: ");
        scanf("%d", &s[studentToUpdate - 1].age);

        printf("Nhap diem: ");
        scanf("%f", &s[studentToUpdate - 1].grade);

        printf("\nThong tin cap nhat cho sinh vien %d:\n", studentToUpdate);
        printf("Ten: %s", s[studentToUpdate - 1].Name);
        printf("Ma so: %d\n", s[studentToUpdate - 1].stdId);
        printf("Tuoi: %d\n", s[studentToUpdate - 1].age);
        printf("Diem: %.2f\n", s[studentToUpdate - 1].grade);
    } else {
        printf("So thu tu sinh vien nhap vao khong hop le!\n");
    }


    return 0;
}

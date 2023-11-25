#include <stdio.h>

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

    return 0;
}

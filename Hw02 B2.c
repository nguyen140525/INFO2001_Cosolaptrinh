#include <stdio.h>
#include <string.h>

// Khai b�o cau tr�c Sinh vi�n
struct Student {
    char Name[50];
    int stdId;
    int age;
    float grade;
};

// H�m s?p x?p sinh vi�n theo t�n
void sortStudentsByName(struct Student s[], int num_students) {
    struct Student temp;
    int i;
    for ( i = 0; i < num_students - 1; i++) {
    	int j;
        for (j = i + 1; j < num_students; j++) {
            if (strcmp(s[i].Name, s[j].Name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

// H�m t�m sinh vi�n theo ID
struct Student* searchStudentById(struct Student s[], int num_students, int id) {
    int i;
	for ( i = 0; i < num_students; i++) {
        if (s[i].stdId == id) {
            return &s[i];
        }
    }
    return NULL;
}

int main() {
    struct Student students[41];
    int num_students;
    int i;

    printf("Nhap so luong sinh vien (toi da 41): ");
    scanf("%d", &num_students);

    for ( i = 0; i < num_students; i++) {
        printf("Nhap thong tin sinh vien %d:\n", i + 1);

        printf("Nhap ten: ");
        getchar();
        fgets(students[i].Name, sizeof(students[i].Name), stdin);

        printf("Nhap ma so: ");
        scanf("%d", &students[i].stdId);

        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);

        printf("Nhap diem: ");
        scanf("%f", &students[i].grade);

        printf("\nThong tin sinh vien %d:\n", i + 1);
        printf("Ten: %s", students[i].Name);
        printf("Ma so: %d\n", students[i].stdId);
        printf("Tuoi: %d\n", students[i].age);
        printf("Diem: %.2f\n", students[i].grade);
    }

    // Sap xep sinh vi�n theo t�n v� in ra
    sortStudentsByName(students, num_students);
    printf("\nDanh sach sinh vien theo ten:\n");
  
    for ( i = 0; i < num_students; i++) {
        printf("Ten: %s", students[i].Name);
        printf("Ma so: %d\n", students[i].stdId);
        printf("Tuoi: %d\n", students[i].age);
        printf("Diem: %.2f\n", students[i].grade);
    }

    // T�m kiem sinh vi�n theo ID
    int search_id;
    printf("\nNhap ID sinh vien can tim: ");
    scanf("%d", &search_id);
    struct Student* foundStudent = searchStudentById(students, num_students, search_id);
    if (foundStudent != NULL) {
        printf("\nThong tin sinh vien co ID %d:\n", search_id);
        printf("Ten: %s", foundStudent->Name);
        printf("Ma so: %d\n", foundStudent->stdId);
        printf("Tuoi: %d\n", foundStudent->age);
        printf("Diem: %.2f\n", foundStudent->grade);
    } else {
        printf("\nKhong tim thay sinh vien co ID %d\n", search_id);
    }

    return 0;
}

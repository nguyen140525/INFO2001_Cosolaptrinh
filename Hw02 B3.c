#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 41

struct Employee {
    char name[50];
    int employeeId;
    char position[50];
    float salary;
};

void sortEmployeesByName(struct Employee employees[], int num_employees) {
    struct Employee temp;
    int i, j;
    for (i = 0; i < num_employees - 1; i++) {
        for (j = i + 1; j < num_employees; j++) {
            if (strcmp(employees[i].name, employees[j].name) > 0) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
}

int findEmployeeById(struct Employee employees[], int num_employees, int id) {
    int i;
    for (i = 0; i < num_employees; i++) {
        if (employees[i].employeeId == id) {
            return i;
        }
    }
    return -1;
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int numEmployees = 0;
    int i;

    printf("Nhap so luong nhan vien (toi da %d): ", MAX_EMPLOYEES);
    scanf("%d", &numEmployees);

    getchar(); 

    for (i = 0; i < numEmployees; i++) {
        printf("\nNhap thong tin nhan vien %d:\n", i + 1);

        printf("Nhap ten: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0'; 

        printf("Nhap ma nhan vien: ");
        scanf("%d", &employees[i].employeeId);

        printf("Nhap chuc vu: ");
        getchar(); // 
        fgets(employees[i].position, sizeof(employees[i].position), stdin);
        employees[i].position[strcspn(employees[i].position, "\n")] = '\0'; 

        printf("Nhap luong: ");
        scanf("%f", &employees[i].salary);

        getchar(); 
    }

    sortEmployeesByName(employees, numEmployees);
    printf("\nDanh sach nhan vien theo ten:\n");
    for (i = 0; i < numEmployees; i++) {
        printf("Ten: %s\n", employees[i].name);
        printf("Ma nhan vien: %d\n", employees[i].employeeId);
        printf("Chuc vu: %s\n", employees[i].position);
        printf("Luong: %.2f\n", employees[i].salary);
    }

    int searchId;
    printf("\nNhap Ma nhan vien can tim: ");
    scanf("%d", &searchId);

    int foundIndex = findEmployeeById(employees, numEmployees, searchId);
    if (foundIndex != -1) {
        printf("\nThong tin nhan vien co Ma nhan vien %d:\n", searchId);
        printf("Ten: %s\n", employees[foundIndex].name);
        printf("Ma nhan vien: %d\n", employees[foundIndex].employeeId);
        printf("Chuc vu: %s\n", employees[foundIndex].position);
        printf("Luong: %.2f\n", employees[foundIndex].salary);
    } else {
        printf("\nKhong tim thay nhan vien co Ma nhan vien %d\n", searchId);
    }

    return 0;
}



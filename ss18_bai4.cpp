#include <stdio.h>
#include <string.h>
int main(){
struct SinhVien{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
	// Khai bao mang sinh vien
    struct SinhVien danhSachSinhVien[50];
    int soLuongSinhVien = 5;
    // Nhap thong tin cac sinh vien
    for (int i = 0; i < soLuongSinhVien; i++) {
        danhSachSinhVien[i].id = i + 1;
        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);
        // Nhap ten sinh vien
        printf("Nhap ten: ");
        fgets(danhSachSinhVien[i].name, sizeof(danhSachSinhVien[i].name), stdin);
        int len = strlen(danhSachSinhVien[i].name);
        if (danhSachSinhVien[i].name[len - 1] == '\n'){
            danhSachSinhVien[i].name[len - 1] = '\0';
        }
        // Nhap tuoi
        printf("Nhap tuoi: ");
        scanf("%d", &danhSachSinhVien[i].age);
        // Nhap sdt
        printf("Nhap so dien thoai: ");
        scanf("%s", danhSachSinhVien[i].phoneNumber);
        getchar();
    }
    // In thong tincac sinh vien trong mang
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < soLuongSinhVien; i++) {
        printf("ID: %d\n", danhSachSinhVien[i].id);
        printf("Ten: %s\n", danhSachSinhVien[i].name);
        printf("Tuoi: %d\n", danhSachSinhVien[i].age);
        printf("So dien thoai: %s\n", danhSachSinhVien[i].phoneNumber);
        printf("\n");
    }
    return 0;
}

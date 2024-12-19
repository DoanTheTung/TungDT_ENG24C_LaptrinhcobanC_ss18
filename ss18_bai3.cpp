#include<stdio.h>
#include<string.h>
int main (){
struct student {
		char fullName[100];
		int age;
		char phone[20];
		};
	//khai bao bien kieu du lieu cau truc
	struct student user01;
	struct student user02;
	struct student user03;
	struct student user04;
	struct student user05;
	//sinh vien thu nhat
		printf("Nhap ho va ten sinh vien thu nhat:");
		fgets(user01.fullName,sizeof(user01.fullName),stdin);
		printf("Nhap tuoi sinh vien : ");
		scanf("%d", &user01.age);
		fflush(stdin);
		printf("Nhap so dien thoai :");
		fgets(user01.phone,sizeof(user01.phone),stdin);
	//sinh vien thu hai
		printf("Nhap ho va ten sinh vien thu hai:");
		fgets(user02.fullName,sizeof(user02.fullName),stdin);
		printf("Nhap tuoi sinh vien : ");
		scanf("%d", &user02.age);
		fflush(stdin);
		printf("Nhap so dien thoai :");
		fgets(user02.phone,sizeof(user02.phone),stdin);
	//sinh vien thu ba
		printf("Nhap ho va ten sinh vien thu ba:");
		fgets(user03.fullName,sizeof(user03.fullName),stdin);
		printf("Nhap tuoi sinh vien : ");
		scanf("%d", &user03.age);
		fflush(stdin);
		printf("Nhap so dien thoai :");
		fgets(user03.phone,sizeof(user03.phone),stdin);
	//sinh vien thu tu
		printf("Nhap ho va ten sinh vien thu tu:");
		fgets(user04.fullName,sizeof(user04.fullName),stdin);
		printf("Nhap tuoi sinh vien : ");
		scanf("%d", &user04.age);
		fflush(stdin);
		printf("Nhap so dien thoai :");
		fgets(user04.phone,sizeof(user04.phone),stdin);
	//sinh vien thu nam
		printf("Nhap ho va ten sinh vien thu nam:");
		fgets(user05.fullName,sizeof(user05.fullName),stdin);
		printf("Nhap tuoi sinh vien : ");
		scanf("%d", &user05.age);
		fflush(stdin);
		printf("Nhap so dien thoai :");
		fgets(user05.phone,sizeof(user05.phone),stdin);
	return 0;
}

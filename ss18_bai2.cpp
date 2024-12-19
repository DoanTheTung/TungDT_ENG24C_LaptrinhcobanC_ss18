#include<stdio.h>
#include<string.h>
int main (){
	struct student {
		char fullName[100];
		int age;
		char phone[20];
	};
	//Khai bao bien luu tru ten , tuoi , sdt
	struct student user01;
	printf("Thong tin cua sinh vien:\n");
	printf("Nhap ho va ten : ");
	fgets(user01.fullName, sizeof(user01.fullName),stdin);
	printf("Nhap so tuoi : ");
	scanf("%d", &user01.age);
	fflush(stdin);
	printf("Nhap so dien thoai : ");
	fgets(user01.phone, sizeof (user01.phone),stdin);
return 0;
}

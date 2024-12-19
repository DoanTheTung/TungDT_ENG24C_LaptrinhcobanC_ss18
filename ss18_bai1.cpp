#include<stdio.h>
#include<string.h>
int main (){
	struct student {
		char fullName[100];
		int age;
		char phone[20];
	};
	struct student user01={"Doan The Tung",18,"0855507035"};
	printf("fullName: %s\n", user01.fullName);
	printf("age: %d\n", user01.age);
	printf("phone: %s\n", user01.phone);
	return 0;
}

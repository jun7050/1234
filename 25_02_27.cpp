
//#include <stdio.h>
//int fibonacci(int n) {
//	printf("%d", n);
//	if (n <= 2)return 1;
//	printf("%d\n", n);
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("\n%d\n", fibonacci(n));
//	return 0;
//}
#include<stdio.h>

//int plus(int n,int a)
//{
//	if (n == 1)return a+1;
//	return plus(n - 1, a+n);
//}

//int plus(int n)
//{
//	if (n == 1)return 1;
//	return plus(n - 1) + n;
//}
//
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	
//	printf("%d", plus(num));
//	return 0;
//}
//#include<stdio.h>
//struct BYTE
//{
//	char a;
//	char b;
//};
//void main()
//{
//	struct BYTE a;
//	a.a = 10;
//	a.b = 20;
//	printf("%d %d", a.a, a.b);
//}
//#include<stdio.h>
//struct student
//{
//	int id;
//	char* name;
//	float aver;
//};
//void main()
//{
//	struct student s = { 1, (char*)"�̻�",90.5 };
//	printf("���̵�: %d\n", s.id);
//	printf("�̸�: %d\n", s.name);
//	printf("�����: %lf\n", s.aver);
//}
//#include<stdio.h>
//struct GUN
//{
//	char name[10];
//	float bullet_type;
//	bool scope;
//	bool muzzle;
//	bool handgrip;
//	bool magazine;
//	bool tactical_stock;
//	int magazine_size;
//};
//int main() {
//	struct GUN M416={"M416", 5.56, true,true,true,true,true,30};
//	printf("ȭ���:%s\n", M416.name);
//	printf("ź ����:%.2f\n", M416.bullet_type);
//	printf("������ ����:%s\n", M416.scope ? "true" : "false");
//	return 0;
//}

#include<stdio.h>
struct __dummy__
{
	int data_0;
	char data_1;
	double data_2;
};
struct VIP_PERSON
{
	char grade;
	char personCode;
	char milleage;
};
int main()
{
	int sizedummy = sizeof(__dummy__);
	int sizevip = sizeof(VIP_PERSON);
	VIP_PERSON lee_sam;
	printf("���� ũ��: %d\n", sizedummy);
	printf("vip���� ũ��: %d\n", sizevip);
	printf("���� ����� �Է����ּ���");
	while (true) {
		scanf("%c", &lee_sam.grade);
		if()
	}

	return 0;
}

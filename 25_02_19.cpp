//#include<stdio.h>
//struct __dummy__
//{
//	int data_0;
//	char data_1;
//	double data_2;
//};
//struct VIP_PERSON
//{
//	char grade;
//	char personCode;
//	char milleage;
//};
//int main()
//{
//	int sizedummy = sizeof(__dummy__);
//	int sizevip = sizeof(VIP_PERSON);
//	VIP_PERSON lee_sam;
//	printf("���� ũ��: %d\n", sizedummy);
//	printf("vip���� ũ��: %d\n", sizevip);
//	printf("���� ����� �Է����ּ���");
//	while (true) {
//		scanf("%c", &lee_sam.grade);
//		if (lee_sam.grade == 'S' || 'A' <= lee_sam.grade && lee_sam.grade <= 'D') break;
//	}
//	int tmp;
//	printf("�� �ڵ带 �Է��ϼ���\n");
//	scanf("%d", &tmp);
//	lee_sam.personCode = (char)tmp;
//	printf("���ϸ����� �Է��ϼ���.\n");
//	scanf("%d", &tmp);
//	lee_sam.milleage = (char)tmp;
//	printf("%c %d %d\n", lee_sam.grade, lee_sam.personCode, lee_sam.milleage);
//	return 0;
//}
//
//#include<stdio.h>
//struct eight
//{
//	char data_1;
//	char data_2;
//	int data_3;
//};
//struct asdf
//{
//	int data_1;
//	int data_2;
//};
//struct __dummy__
//{
//	int data_0;
//	char data_1;
//	double data_2;
//};
//int main()
//{
//	__dummy__ person;
//	//int num;
//	//int a = sizeof(eight);
//	//int b = sizeof(asdf); 
//	//printf("%d %d\n", a, b);
//	printf("�������� �Է��ϼ���: ");
//	scanf("%d", &person.data_0);
//	printf("\n�������� �Է��ϼ���: ");
//	scanf(" %c", &person.data_1);
//	printf("\n�Ǽ����� �Է��ϼ���: ");
//	
//	scanf("%lf", &person.data_2);
//	
//	printf("\n������: %d ������: %c �Ǽ���: %.1lf", person.data_0, person.data_1, person.data_2);
//	return 0;
//}

//#include<stdio.h>
//void main()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	printf("��: %hd\n", pt1);
//}
//#include<stdio.h>
//short getDefailtData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//void main()
//
//{
//	short pt;
//	pt = getDefailtData();
//	printf("%hd", pt);
//}
//#include<stdio.h>
//struct POINT
//{
//	short x, y;
//};
//
//short getDefaultData();
//void printData(short pt2);
//short minus(short pt3);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt = minus(pt);
//	printData(pt);
//}
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//void printData(short pt2) {
//	printf("��: %hd\n", pt2);
//}
//short minus(short pt3)
//{
//	pt3 += 5;
//	return pt3;
//}

//#include<stdio.h>
//struct POINT
//{
//	short x, y;
//};
//
//POINT getDefaultData(POINT pt1);
//void printData(POINT pt1);
//POINT minus(POINT pt1);
//
//
//void main()
//{
//	POINT pt1{};
//	pt1 = getDefaultData(pt1);
//	printData(pt1);
//	pt1 = minus(pt1);
//	printData(pt1);
//	
//}
//POINT getDefaultData(POINT pt1)
//{
//	
//	scanf("%hd", &pt1.x);
//	scanf("%hd", &pt1.y);
//	return pt1;
//	
//}
//void printData(POINT pt1) {
//	
//	printf("��: %hd\n", pt1.x);
//	printf("��: %hd\n", pt1.y);
//}
//POINT minus(POINT pt1)
//
//{
//	
//	pt1.x += 5;
//	pt1.y += 5;
//	return pt1;
//	
//}

//#include<stdio.h>
//void main()
//
//{
//	char arr[4];
//	printf("%d\n", sizeof(arr));
//}
//#include<stdio.h>
//void main()
//
//{
//	char arr[4] = {'a','b','c','d'};
//	printf("%c%c%c%c\n", arr[0], arr[1], arr[2], arr[3]);
//}
//#include<stdio.h>
//int main()
//
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &arr[i]);
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[5];
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//
//	}
//	printf("����\n");
//	printf("����\n");
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

#include<stdio.h>
int main()
{
	int arr[10];
	for(int i=0; i)
}
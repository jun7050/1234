//#include<stdio.h>
//int main() {
//	char command;
//	printf("<,a ����");
//	printf(">,d������");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case'<':case'a': printf("�������� �̵��մϴ�\n"); break;
//	case'>':case'd': printf("���������� �̵��մϴ�\n"); break;
//	
//	}
//	return 0;
//}
/*#include<stdio.h>
int main()
{
	int input;
	const int Option = 3;
	printf("�޴��� �������ּ���\n");
	printf("1.������2.�̾�� 3.�ɼ�\n");
	scanf("%d", &input);

	switch (input) {
	case 1:printf("�� ���� ����\n"); break;
	case 2:printf("���̺� ������ �ε�\n "); break;
	case Option:printf("�ɼǼ���\n"); break;
	default: printf("������ ����� �����ϴ�.\n");
	}
	return 0;
	
}*/

//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("0~9������ �ϳ� ���ÿ�");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 3:case 6:case 9:printf("¦"); break;
//	default: printf("?");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'x';
//	
//	switch (command)
//	{
//	case 'x': {
//		printf("���ĺ� x�Է�\n");
//		break;
//	}
//	case 'X':printf("����ǥ �Է�\n"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1. ���ϱ� 2. ����\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1: {
//		int number1, number2;
//		printf("���� �ΰ� �Է�\n");
//		scanf("%d%d", &number1, &number2);
//		printf("%d+%d=%d", number1, number2, number1 + number2); break;
//	}
//	case 2: {
//		int number3, number4;
//		printf("���� �ΰ� �Է�\n");
//		scanf("%d%d", &number3, &number4);
//		printf("%d-%d=%d", number3, number4, number3 + number4); break;
//	}
//
//	}
//	return 0;
//}

/*#include<stdio.h>
int main()
{
	char command;
	scanf("%c", &command);
	switch (command)
	{
	case 'w':printf("�� ����Ű\n"); break;
	case 'a': printf("�� ����Ű\n"); break;
	case'd': printf("�� ����Ű\n"); break;
	case 's':printf("�Ʒ� ����Ű\n"); break;
	}
	return 0;
}*/
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//
//	printf("appetizer 1.�ɺ�� 2.������ 3.Ǫ�Ʊ׶�\nmainDish 1.������ũ 2.�����丮 3.�簥��\ndessert 1.�ɟ� 2.���̽�ũ�� 3.���ݸ���\n");
//	scanf("%d%d%d", &a, &b, &c);
//	switch (a)
//	{
//	case 1: printf("�ֹ��Ͻ� ������ �ɺ��"); break;
//	case 2: printf("�ֹ��Ͻ� ������ ������"); break;
//	case 3: printf("�ֹ��Ͻ� ������ Ǫ�Ʊ׶�"); break;
//
//	}
//	switch (b)
//	{
//	case 1: printf(",������ũ,"); break;
//	case 2: printf(",�����丮,"); break;
//	case 3: printf(",�簥��"); break;
//
//	}
//	switch (c)
//	{
//	case 1: printf("�ɟ��Դϴ�."); break;
//	case 2: printf("���̽�ũ���Դϴ�."); break;
//	case 3: printf("���ݸ������Դϴ�."); break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while(i < 100) {
//		printf("%3d", i);
//		if (i >= 70 && i < 80) { i++; continue; }
//		printf("(%02x) ", i);
//		if (i % 10 == 9) printf("\n");
//
//		if (i == 93) break;
//		i++;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("�ݺ�");
//
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//
//{
//	int count=0;
//	while (count < 3)
//	{
//		printf("%d", count);
//		printf("3unber");
//		count++;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//
//{
//	int i = 0;
//	while (i < 6) {
//		printf("c");
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//
//{
//	int i = -10;
//	while (i <= 0) {
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//
//{
//	int i = 0;
//	while (i <= 100) {
//		printf("%d\n",i);
//		i+=5;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//
//{
//	char alphabet;
//	while (1) {
//		printf("���ĺ� �Է� ��");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z') printf("small\n");
//		else if (alphabet >= 'A' && alphabet <= 'z') printf("big\n");
//		else continue;
//		printf("�Է��� ��: %c\n",alphabet);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1) {
//		printf("��� �Է� 0�Է½� ����\n");
//		scanf("%d", &number);
//		if (number == 0)break;
//		else if (number < 0)continue;
//		total += number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//
//{
//	int mult=1,i = 1;
//	while (mult <= 50000) {
//		mult *= i;
//		i++;
//	}
//	printf(" %d\n", i);
//	return 0;
//}
//#include <stdio.h>
//int main()
//
//{
//	char a = 65;
//	while (a <= 'Z') {
//		if (a == 'F') { a++;  continue; }
//		else {
//			printf("%c", a);
//			a++;
//		}
//	}
//}
#include<stdio.h>
int main()
{
	int a = 0, int c;
	char b = 64;
	while (c <= 31) {
		scanf("%d", &a);
		if (a == 31) break;
		else if (b == 64) { printf("%c: %d\n", b, c); b++; c+= a}
		else {
			printf("%c: %d\n", b, c); b--;
		}
	}
	printf("%c�� �����ϴ�",b);

}
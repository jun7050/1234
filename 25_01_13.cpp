////#include <stdio.h>
////#include <stdlib.h>
////int main()
////
////{
////	int randint = rand() % 10;
////	int nextint = rand() % 10;
////	printf("ù ����: %d\n", randint);
////	printf("���� ����: %d\n", nextint);
////
////	return 0;
////}
////#include <stdio.h>
////#include <stdlib.h>
////#include <time.h>
////
////int main()
////{
////	srand((unsigned int)time(NULL));
////	int randint = rand() % 10;
////	int nextint = rand() % 10+50;
////	printf("ù ����: %d\n", randint);//0~9
////	printf("���� ����: %d\n", nextint);//50~59
////}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{	
//	srand((unsigned int)time(NULL));
//	int myMoney = (rand() % 10 + 1) * 1000;
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//
//	
//	printf("�� �ָӴϿ� �ִ� ����");
//	printf("%d���̴�", myMoney);
//	printf("�׸��� ������ ������ ");
//	printf("%d���̴�", coin500 + coin100);
//	printf("\n���� ���ڸ� ��� ������?");
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15) {
//		printf("����� 12��");
//	}
//	return 0;
//
//}\

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple != 17) {
//		printf("����� 17�� �ƴ�");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//
//{
//	int apple = 15;
//	if (apple > 7) {
//		printf("����� 7�� ���� ����");
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20) {
//		printf("����� 20������ ����");
//
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple) {
//		printf("��� ����");
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("����� �ϳ��� ����");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple == 10) {
//		printf("����� 10�� �ִ�\n");
//
//	}
//	else if (apple == 0) printf("����� �ϳ��� ����");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple) printf("�ϳ��� ����");
//	else printf("����� �����Ѵ�");
//	return 0;
//}


//#include <stdio.h>
//
//int main() 
//{
//	int input;
//	scanf("%d", &input);
//	if (input == 0) printf("���ڴ� 0�̴�");
//	else if (input < 0)printf("�����̴�");
//	else printf("����̴�");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	if (input >= 10 && input <= 99) printf("���ڴ� ���ڸ���");
//		
//	else printf("���ڸ��� �ƴϴ�");
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	int a = 190;
//	if (a > 150); printf("150�̻�");
//	if (a > 160); printf("160�̻�");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 170;
//	if (a > 150) printf("150�̻�");
//	else if (a > 160)printf("160�̻�");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y_age;
//	scanf("%d", &y_age);
//	if (y_age >= 15)printf("15�� ������\n");
//	if (y_age >= 12)printf("12�� ������\n");
//	printf("��ü������");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char initial;
//	scanf("%c", &initial);
//	if (initial >= 0x61 && initial <= 'z')printf("�ҹ���");
//	else if (initial >= 65 && initial <= 90)printf("�빮��");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d%d", &number, &answer);
//	if (number > answer)printf("ó���� �� ũ��");
//	else {
//		if (number < answer)printf("�ι�°�� �� ũ��");
//		else printf("����");
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number = -1;
//	if (number > 0) printf("���");
//	else if (number < 0)printf("����");
//	else printf("0");
//	if (number % 2 == 0)printf("¦��");
//	else printf("Ȧ��");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	if (a == 'w') printf("������Ű");
//	else if (a == 'a')printf("�� ����Ű");
//	else if (a == 's')printf("�����Ű");
//	else printf("�Ʒ� ����Ű");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int gauge;
//	scanf("%d", &gauge);
//	if (gauge >= 45 && gauge <= 55)printf("Perfect");
//	else if (gauge >= 35 && gauge <= 65)printf("Excellent");
//	else printf("good");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = rand()*3;
//	if (input % 3 == 0) {
//		printf("3�� ���\n");
//
//
//		if (input % 9 == 0)printf("9�� ���\n");
//		if (input % 6 == 0)printf("6�� ���\n");
//	}
//	return 0;
//	
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command) 
//	case 'i': printf("����\n");
//	
//	return 0;
//	
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command) {
//	case 'i': 
//		printf("����\n");
//	case 'm': 
//		printf("����â\n");
//	}
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("���� �Է� �ΰ� �׸��� �����ȣ �Է�");
//	scanf("%d%d %c", &input1, &input2, &oper);
//
//	
//	switch (oper)
//	{
//	case'+': printf("%d", input1 + input2);	break;
//	case'-': printf("%d", input1 - input2);	break;
//	case'*':printf("%d", input1 * input2);	break;
//	case'/':printf("%d", input1 / input2);	break;	
//  case'%':printf("%d", input1 % input2);	break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int month;
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1:printf("January"); break;
//	case 2:printf("February"); break;
//	case 3:printf("March"); break;
//	case 4:printf("April"); break;
//	case 5:printf("May"); break;
//	case 6:printf("June"); break;
//	case 7:printf("July"); break;
//	case 8:printf("August"); break;
//	case 9:printf("September"); break;
//	case 10:printf("October"); break;
//	case 11:printf("November"); break;
//	case 12:printf("December"); break;
//	
//	}
//	return 0;
//}

#include<stdio.h>
int main() {
	char command;
	printf("<,a ����");
	printf(">,d������");
	scanf("%c", &command);
	switch (command)
	{
	default:
		break;
	}
}
////#include<stdio.h>
////int main()
////{
////	int First,Final,Start,End;
////
////	
////	scanf("%d%d", &First, &Final);
////	if(First >= Final){
////		Start = Final;
////		End = First;
////	}
////	if (First <= Final) {
////		Start = First;
////		End = Final;
////	}
////		
////	while (Start <= End) {
////		
////		if (Start % 2) printf("%d ", Start);
////		Start++;
////		
////	}
////
////	
////	return 0;
////}
//
//#include<stdio.h>
//int main()
//{
//	int i,s,a=0,ten=1,num =0;
//	scanf("%d", &i);
//	num = i;
//	
//	while (i > 0) {
//		i /= 10;
//		a++;
//		ten *= 10;
//		
//	}
//	ten /= 10;
//	while (a >= 0) {
//		
//		s = num /ten;
//		num %= ten;
//
//		while (s > 0) {
//			printf("\u2665\u2665");
//			s--;
//		}
//		printf("\n");
//		ten /= 10;
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int healthy = 100;
//	int person = 100;
//	int money = 100;
//	do
//	{
//		printf("\n%d��° ��!\n", ++day);
//		printf("���õ� �ڵ��ұ��?\n");
//		printf("1. �����Ѵ� 2. ��Ѵ� 3. �˹ٸ� �Ѵ� 4. ģ����� ������ 0.������.\n");
//		scanf("%d", &command);
//		if (command == 0) break;
//		switch (command)
//		{
//		case 1: {
//			int randint = rand() % 5 + 1;
//			switch (randint)
//			{
//			case 1:printf("����� ���׿�.\n");
//			case 2:printf("����� ������\n");
//			case 3:printf("����������\n"); break;
//			case 4:printf("ī�信��\n"); break;
//			case 5: printf("�п�����\n"); break;
//			}
//			printf("�ڵ����θ� �մϴ�\n");
//			study++;
//			money -= 5;
//			int randint1 = rand() % 10;
//			if (randint1 > 6) {
//
//				healthy -= 5;
//				person -= 5;
//			}
//			break;
//		}
//		case 2: {
//			int randint2 = rand() % 10;
//			if (randint2 > 8) {
//				printf("�λ��� �Ծ����ϴ�.\n");
//				healthy -= 5;
//				money -= 3;
//			}
//			else {
//				printf("��߽��ϴ�.\n");
//				healthy++;
//			}
//			break;
//		}
//		case 3: {
//			int randint3 = rand() % 10;
//			if (randint3 > 8) {
//				printf("�λ��� �Ծ����ϴ�.\n");
//				healthy -= 5;
//				money -= 3;
//				person--;
//			}
//			else {
//				printf("���� �������ϴ�.\n");
//				money++;
//			}
//			break;
//		}
//		case 4: {
//			printf("ģ����� �������ϴ�\n");
//			person += 5;
//			money--;
//			break;
//		}
//		}
//	} while (command);
//
//	if (day <= 1) printf("�״�� �Դϴ�...\n");
//
//	else {
//		int level = study / 8;
//		int Money = money / 3;
//		int Healthy = healthy / 3;
//		int Person = person / 3;
//		if (study > money && study > healthy && study > person)
//		{
//			switch (level)
//			{
//			case 0:
//				printf("�ڵ��� ������ �Ǿ����ϴ�\n");
//				break;
//			case 1:
//				printf("���α׷��Ӱ� �Ǿ����ϴ�\n");
//				break;
//			case 2:
//				printf("FrontEnd �����ڰ� �Ǿ����ϴ�\n");
//				break;
//			case 3:
//				printf("BackEnd�����ڰ� �Ǿ����ϴ�\n");
//				break;
//
//			default:
//				printf("Ǯ ���� �����ڰ� �Ǿ����ϴ�\n");
//				break;
//			}
//		}
//		else if (money > study && money > healthy && money > person)
//		{
//			switch (Money)
//			{
//			case 0: printf("���� �����ϴ�.\n"); break;
//			case 1: printf("���� ���� �ֽ��ϴ�.\n"); break;
//			case 2: printf("���� ���� �ֽ��ϴ�.\n"); break;
//			default: printf("���� �ſ� ���� �ֽ��ϴ�.\n"); break;
//
//			}
//		}
//		else if (healthy > study && healthy > money && healthy > person) {
//			switch (Healthy)
//			{
//			case 0:printf("�ǰ��� �Ҿ����ϴ�.\n"); break;
//			case 1:printf("���� �� �������ϴ�.\n"); break;
//			case 2:printf("�ǰ��մϴ�.\n"); break;
//			default: printf("�ſ� �ǰ��մϴ�\n"); break;
//			}
//		}
//		else {
//			switch (Person)
//			{
//			case 0:printf("ģ���� �����ϴ�.\n"); break;
//			case 1:printf("ģ���� ���� �ֽ��ϴ�.\n"); break;
//			case 2:printf("ģ���� �����ϴ�.\n"); break;
//			default: printf("ģ���� �ſ� �����ֽ��ϴ�.\n"); break;
//
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("%d���� \n", sheep);
//	}
//	printf(" sleeping now");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("%d���� \n", sheep);
//		if (sheep ==1) {
//			printf("���߿� ���");
//			break;
//		}
//	}
//	printf(" sleeping now");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("%d���� \n", sheep);
//		
//	}
//	printf(" sleeping now");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		
//		if (sheep %10 ==0) {
//			printf("����\n");
//			continue;
//		}
//		printf("%d���� \n", sheep);
//		if (sheep == 45) {
//			printf("���߿� ���");
//			break;
//		}
//		
//	}
//	printf(" sleeping now");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 10; i < 100; i++) {
//		printf("%d ", i);
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//
//{
//	int i,result=1;
//	for (i = 3; i <= 8; i++) {
//		result *= i;
//	}
//	printf("%d", result);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int i,num,ten, one;
	for (i = 1; i <= 50; i++) {
		num = i;
		ten = num / 10;
		one = num %= 10;
		if (ten % 3 == 0 || one % 3 == 0) {
			
			if (ten == 0) {
				if (one % 3 == 0)
					printf("%d\n", i);
				else if (i == 10 || i == 20 || i == 40) continue;
				else continue;
			}
			
		}	
		
	}
	return 0;
}


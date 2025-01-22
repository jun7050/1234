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
//		printf("\n%d번째 날!\n", ++day);
//		printf("오늘도 코딩할까요?\n");
//		printf("1. 공부한다 2. 운동한다 3. 알바를 한다 4. 친구들과 만난다 0.끝낸다.\n");
//		scanf("%d", &command);
//		if (command == 0) break;
//		switch (command)
//		{
//		case 1: {
//			int randint = rand() % 5 + 1;
//			switch (randint)
//			{
//			case 1:printf("기분이 종네요.\n");
//			case 2:printf("기분이 나빠요\n");
//			case 3:printf("도서관에서\n"); break;
//			case 4:printf("카페에서\n"); break;
//			case 5: printf("학원에서\n"); break;
//			}
//			printf("코딩공부를 합니다\n");
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
//				printf("부상을 입었습니다.\n");
//				healthy -= 5;
//				money -= 3;
//			}
//			else {
//				printf("운동했습니다.\n");
//				healthy++;
//			}
//			break;
//		}
//		case 3: {
//			int randint3 = rand() % 10;
//			if (randint3 > 8) {
//				printf("부상을 입었습니다.\n");
//				healthy -= 5;
//				money -= 3;
//				person--;
//			}
//			else {
//				printf("돈을 벌었습니다.\n");
//				money++;
//			}
//			break;
//		}
//		case 4: {
//			printf("친구들과 만났습니다\n");
//			person += 5;
//			money--;
//			break;
//		}
//		}
//	} while (command);
//
//	if (day <= 1) printf("그대로 입니다...\n");
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
//				printf("코딩의 새싹이 되었습니다\n");
//				break;
//			case 1:
//				printf("프로그래머가 되었습니다\n");
//				break;
//			case 2:
//				printf("FrontEnd 개발자가 되었습니다\n");
//				break;
//			case 3:
//				printf("BackEnd개발자가 되었습니다\n");
//				break;
//
//			default:
//				printf("풀 스택 개발자가 되었습니다\n");
//				break;
//			}
//		}
//		else if (money > study && money > healthy && money > person)
//		{
//			switch (Money)
//			{
//			case 0: printf("돈이 없습니다.\n"); break;
//			case 1: printf("돈이 조금 있습니다.\n"); break;
//			case 2: printf("돈이 많이 있습니다.\n"); break;
//			default: printf("돈이 매우 많이 있습니다.\n"); break;
//
//			}
//		}
//		else if (healthy > study && healthy > money && healthy > person) {
//			switch (Healthy)
//			{
//			case 0:printf("건강을 잃었습니다.\n"); break;
//			case 1:printf("몸이 좀 않좋습니다.\n"); break;
//			case 2:printf("건강합니다.\n"); break;
//			default: printf("매우 건강합니다\n"); break;
//			}
//		}
//		else {
//			switch (Person)
//			{
//			case 0:printf("친구가 없습니다.\n"); break;
//			case 1:printf("친구가 조금 있습니다.\n"); break;
//			case 2:printf("친구가 많습니다.\n"); break;
//			default: printf("친구가 매우 많이있습니다.\n"); break;
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
//		printf("%d마리 \n", sheep);
//	}
//	printf(" sleeping now");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("%d마리 \n", sheep);
//		if (sheep ==1) {
//			printf("도중에 잠듦");
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
//		printf("%d마리 \n", sheep);
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
//			printf("졸음\n");
//			continue;
//		}
//		printf("%d마리 \n", sheep);
//		if (sheep == 45) {
//			printf("도중에 잠듦");
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


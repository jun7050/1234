//#include<stdio.h>
//int main() {
//	char command;
//	printf("<,a 왼쪽");
//	printf(">,d오른쪽");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case'<':case'a': printf("왼쪽으로 이동합니다\n"); break;
//	case'>':case'd': printf("오른쪽으로 이동합니다\n"); break;
//	
//	}
//	return 0;
//}
/*#include<stdio.h>
int main()
{
	int input;
	const int Option = 3;
	printf("메뉴를 선탹해주세요\n");
	printf("1.새게임2.이어가기 3.옵션\n");
	scanf("%d", &input);

	switch (input) {
	case 1:printf("새 게임 시작\n"); break;
	case 2:printf("세이브 데이터 로드\n "); break;
	case Option:printf("옵션세팅\n"); break;
	default: printf("지정된 기능이 없습니다.\n");
	}
	return 0;
	
}*/

//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("0~9까지중 하나 고르시오");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 3:case 6:case 9:printf("짝"); break;
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
//		printf("알파벳 x입력\n");
//		break;
//	}
//	case 'X':printf("엑스표 입력\n"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1. 더하기 2. 빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1: {
//		int number1, number2;
//		printf("숫자 두개 입력\n");
//		scanf("%d%d", &number1, &number2);
//		printf("%d+%d=%d", number1, number2, number1 + number2); break;
//	}
//	case 2: {
//		int number3, number4;
//		printf("숫자 두개 입력\n");
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
	case 'w':printf("위 방향키\n"); break;
	case 'a': printf("좌 방향키\n"); break;
	case'd': printf("우 방향키\n"); break;
	case 's':printf("아래 방향키\n"); break;
	}
	return 0;
}*/
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//
//	printf("appetizer 1.케비어 2.샐러드 3.푸아그라\nmainDish 1.스테이크 2.생선요리 3.양갈비\ndessert 1.케잌 2.아이스크림 3.초콜릿무\n");
//	scanf("%d%d%d", &a, &b, &c);
//	switch (a)
//	{
//	case 1: printf("주문하신 음식은 케비어"); break;
//	case 2: printf("주문하신 음식은 샐러드"); break;
//	case 3: printf("주문하신 음식은 푸아그라"); break;
//
//	}
//	switch (b)
//	{
//	case 1: printf(",스테이크,"); break;
//	case 2: printf(",생선요리,"); break;
//	case 3: printf(",양갈비"); break;
//
//	}
//	switch (c)
//	{
//	case 1: printf("케잌입니다."); break;
//	case 2: printf("아이스크림입니다."); break;
//	case 3: printf("초콜릿무스입니다."); break;
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
//		printf("반복");
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
//		printf("알파벳 입력 해");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z') printf("small\n");
//		else if (alphabet >= 'A' && alphabet <= 'z') printf("big\n");
//		else continue;
//		printf("입력한 값: %c\n",alphabet);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1) {
//		printf("양수 입력 0입력시 종료\n");
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
	printf("%c가 졌습니다",b);

}
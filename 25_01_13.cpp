////#include <stdio.h>
////#include <stdlib.h>
////int main()
////
////{
////	int randint = rand() % 10;
////	int nextint = rand() % 10;
////	printf("첫 숫자: %d\n", randint);
////	printf("다음 숫자: %d\n", nextint);
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
////	printf("첫 숫자: %d\n", randint);//0~9
////	printf("다음 숫자: %d\n", nextint);//50~59
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
//	printf("내 주머니에 있는 돈은");
//	printf("%d원이다", myMoney);
//	printf("그리고 과자의 가격은 ");
//	printf("%d원이다", coin500 + coin100);
//	printf("\n나는 과자를 살수 있을까?");
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15) {
//		printf("사과는 12개");
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
//		printf("사과는 17개 아님");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//
//{
//	int apple = 15;
//	if (apple > 7) {
//		printf("사과는 7개 보다 많음");
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20) {
//		printf("사과는 20갸보다 적다");
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
//		printf("사과 존재");
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
//		printf("사과는 하나도 없다");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple == 10) {
//		printf("사과는 10개 있다\n");
//
//	}
//	else if (apple == 0) printf("사과는 하나도 없다");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple) printf("하나도 없다");
//	else printf("사과가 존재한다");
//	return 0;
//}


//#include <stdio.h>
//
//int main() 
//{
//	int input;
//	scanf("%d", &input);
//	if (input == 0) printf("숫자는 0이다");
//	else if (input < 0)printf("음수이다");
//	else printf("양수이다");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	if (input >= 10 && input <= 99) printf("숫자는 두자리다");
//		
//	else printf("두자리가 아니다");
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	int a = 190;
//	if (a > 150); printf("150이상");
//	if (a > 160); printf("160이상");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 170;
//	if (a > 150) printf("150이상");
//	else if (a > 160)printf("160이상");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y_age;
//	scanf("%d", &y_age);
//	if (y_age >= 15)printf("15세 관람가\n");
//	if (y_age >= 12)printf("12세 관람가\n");
//	printf("전체관람가");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char initial;
//	scanf("%c", &initial);
//	if (initial >= 0x61 && initial <= 'z')printf("소문자");
//	else if (initial >= 65 && initial <= 90)printf("대문자");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d%d", &number, &answer);
//	if (number > answer)printf("처음게 더 크다");
//	else {
//		if (number < answer)printf("두번째가 더 크다");
//		else printf("같다");
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number = -1;
//	if (number > 0) printf("양수");
//	else if (number < 0)printf("음수");
//	else printf("0");
//	if (number % 2 == 0)printf("짝수");
//	else printf("홀수");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	if (a == 'w') printf("윗방향키");
//	else if (a == 'a')printf("좌 방향키");
//	else if (a == 's')printf("우방향키");
//	else printf("아래 방향키");
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
//		printf("3의 배수\n");
//
//
//		if (input % 9 == 0)printf("9의 배수\n");
//		if (input % 6 == 0)printf("6의 배수\n");
//	}
//	return 0;
//	
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command) 
//	case 'i': printf("오픈\n");
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
//		printf("오픈\n");
//	case 'm': 
//		printf("지도창\n");
//	}
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("숫자 입력 두개 그리고 연산기호 입력");
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
	printf("<,a 왼쪽");
	printf(">,d오른쪽");
	scanf("%c", &command);
	switch (command)
	{
	default:
		break;
	}
}
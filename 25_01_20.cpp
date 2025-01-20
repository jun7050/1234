//#include <stdio.h>
//int main()
//
//{
//	int t = 20;
//	do {
//		printf("현재 온도: %d\n", t);
//		t--;
//
//	} while (t > 28);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	enum{GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case NEWGAME: {
//			printf("새 게임 시작\n");
//			break;
//		}
//		case LOADGAME: {
//			printf("세이브 데이터 로드 \n");
//			break;
//		}
//		case OPTION: {
//			printf("옵션 세팅\n");
//			break;
//		}
//		}
//	} while (input != GAMEOVER);
//	printf("게임을 종료합니다.\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//
//{
//	int input;
//	enum{EXIT, LOGIN, JOIN, OPTION, PEOPLE};
//	do
//	{
//		printf("선택해주세요\n");
//		printf("1.로그인 2.회원가입 3.옵션 4.만든 사람들\n");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case LOGIN: {
//			printf("로그인 창임\n");
//			break;
//		}
//		case JOIN: {
//			printf("회원가입 창임\n");
//			break;
//		}
//		case OPTION: {
//			printf("옵션 창임\n");
//			break;
//		}
//		case PEOPLE: {
//			printf("만든 사람들\n");
//			break;
//		}
//		}
//
//	} while (input <= 4 && input >= 1);
//	printf("게임을 종료합니다\n");
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study=0;
	int healthy = 100;
	int person = 100;
	int money = 100;
	do
	{
		printf("\n%d번째 날!\n",++day);
		printf("오늘도 코딩할까요?\n");
		printf("1. 공부한다 2. 운동한다 3. 알바를 한다 4. 친구들과 만난다\n그외 끝낸다.\n");
		scanf("%d", &command);
		if (command <= 5)break;
		switch (command)
		{
		case 1: {
			int randint = rand() % 5 + 1;
			switch (randint)
			{
			case 1:printf("기분이 종네요.\n");
			case 2:printf("기분이 나빠요\n");
			case 3:printf("도서관에서\n"); break;
			case 4:printf("카페에서\n"); break;
			case 5: printf("학원에서\n"); break;
			}
			printf("코딩공부를 합니다\n");
			study++;
			money -= 5;
			int randint1 = rand() % 10;
			if (randint1 > 6) {

				healthy -= 5;
				person -= 5;
			}
			break;
		}
		case 2: {
			int randint2 = rand() % 10;
			if (randint2 > 8) {
				printf("부상을 입었습니다.\n");
				healthy -= 5;
				money -= 3;
			}
			else {
				printf("운동했습니다.\n");
				healthy++;
			}
			break;
		}
		case 3:{
			int randint3 = rand() % 10;
			if (randint3 > 8) {
				printf("부상을 입었습니다.\n");
				healthy -= 5;
				money -= 3;
				person--;
			}
			else {
				printf("돈을 벌었습니다.\n");
				money++;
			}
			break;
			}
		case 4: {
			printf("친구들과 만났습니다\n");
			person += 5;
			money--;
			break;
		}
		}
		} while (healthy >0 || money >0|| person>0);

	if (money == 0) printf("돈이 없어서 거지가 되었습니다.");
	else if (healthy == 0) printf("건강이 악화되어 병원에 입원헀습니다");
	else if (person == 0)printf("친구들이 전부 당신을 떠나갔습니다.");
	else {
		if (day <= 1) {
			printf("그대로 입니다...\n");
		}
		else {
			int level = study / 8;
			switch (level)
			{
			case 0:
				printf("코딩의 새싹이 되었습니다\n");
				break;
			case 1:
				printf("프로그래머가 되었습니다\n");
				break;
			case 2:
				printf("FrontEnd 개발자가 되었습니다\n");
				break;
			case 3:
				printf("BackEnd개발자가 되었습니다\n");
				break;

			default:
				printf("풀 스택 개발자가 되었습니다\n");
				break;
		}
	}
}
	return 0;
}
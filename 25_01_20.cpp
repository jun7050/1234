//#include <stdio.h>
//int main()
//
//{
//	int t = 20;
//	do {
//		printf("���� �µ�: %d\n", t);
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
//		printf("\n�޴��� �����ϼ���.\n");
//		printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ� (0:��������)\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case NEWGAME: {
//			printf("�� ���� ����\n");
//			break;
//		}
//		case LOADGAME: {
//			printf("���̺� ������ �ε� \n");
//			break;
//		}
//		case OPTION: {
//			printf("�ɼ� ����\n");
//			break;
//		}
//		}
//	} while (input != GAMEOVER);
//	printf("������ �����մϴ�.\n");
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
//		printf("�������ּ���\n");
//		printf("1.�α��� 2.ȸ������ 3.�ɼ� 4.���� �����\n");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case LOGIN: {
//			printf("�α��� â��\n");
//			break;
//		}
//		case JOIN: {
//			printf("ȸ������ â��\n");
//			break;
//		}
//		case OPTION: {
//			printf("�ɼ� â��\n");
//			break;
//		}
//		case PEOPLE: {
//			printf("���� �����\n");
//			break;
//		}
//		}
//
//	} while (input <= 4 && input >= 1);
//	printf("������ �����մϴ�\n");
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
		printf("\n%d��° ��!\n",++day);
		printf("���õ� �ڵ��ұ��?\n");
		printf("1. �����Ѵ� 2. ��Ѵ� 3. �˹ٸ� �Ѵ� 4. ģ����� ������\n�׿� ������.\n");
		scanf("%d", &command);
		if (command <= 5)break;
		switch (command)
		{
		case 1: {
			int randint = rand() % 5 + 1;
			switch (randint)
			{
			case 1:printf("����� ���׿�.\n");
			case 2:printf("����� ������\n");
			case 3:printf("����������\n"); break;
			case 4:printf("ī�信��\n"); break;
			case 5: printf("�п�����\n"); break;
			}
			printf("�ڵ����θ� �մϴ�\n");
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
				printf("�λ��� �Ծ����ϴ�.\n");
				healthy -= 5;
				money -= 3;
			}
			else {
				printf("��߽��ϴ�.\n");
				healthy++;
			}
			break;
		}
		case 3:{
			int randint3 = rand() % 10;
			if (randint3 > 8) {
				printf("�λ��� �Ծ����ϴ�.\n");
				healthy -= 5;
				money -= 3;
				person--;
			}
			else {
				printf("���� �������ϴ�.\n");
				money++;
			}
			break;
			}
		case 4: {
			printf("ģ����� �������ϴ�\n");
			person += 5;
			money--;
			break;
		}
		}
		} while (healthy >0 || money >0|| person>0);

	if (money == 0) printf("���� ��� ������ �Ǿ����ϴ�.");
	else if (healthy == 0) printf("�ǰ��� ��ȭ�Ǿ� ������ �Կ������ϴ�");
	else if (person == 0)printf("ģ������ ���� ����� ���������ϴ�.");
	else {
		if (day <= 1) {
			printf("�״�� �Դϴ�...\n");
		}
		else {
			int level = study / 8;
			switch (level)
			{
			case 0:
				printf("�ڵ��� ������ �Ǿ����ϴ�\n");
				break;
			case 1:
				printf("���α׷��Ӱ� �Ǿ����ϴ�\n");
				break;
			case 2:
				printf("FrontEnd �����ڰ� �Ǿ����ϴ�\n");
				break;
			case 3:
				printf("BackEnd�����ڰ� �Ǿ����ϴ�\n");
				break;

			default:
				printf("Ǯ ���� �����ڰ� �Ǿ����ϴ�\n");
				break;
		}
	}
}
	return 0;
}
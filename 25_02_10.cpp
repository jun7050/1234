//#include<stdio.h>
//int main()
//{
//	int input;
//	scanf("%input", &input);
//	int i, o, a= input-1, b=1;
//	for (o = 0; o < input; o++) {
//		for (i = 0; i < a; i++) {
//			printf(" ");
//		}
//		for (i = 0; i < b; i++) {
//			printf("*");
//		}
//		a--;
//		b += 2;
//		printf("\n");
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int input;
//		scanf("%input", &input);
//		int i, o, a= input-1, b=1;
//		for (o = 0; o < input; o++) {
//			for (i = 0; i < a; i++) {
//				printf(" ");
//			}
//			for (i = 0; i < b; i++) {
//				printf("*");
//			}
//			a--;
//			b += 2;
//			printf("\n");
//		}
//		b -= 2;
//		a++;
//		for (o = 0; o < input; o++) {
//			for (i = 0; i < a; i++) {
//				printf(" ");
//			}
//			for (i = 0; i < b; i++) {
//				printf("*");
//			}
//			a++;
//			b -= 2;
//			printf("\n");
//		}
//	return 0;
//
//}



//#include<stdio.h>
//int main()
//
//{
//	int a, n,null,s;
//	scanf("%d", &n);
//	s = n-1;
//	for (a = 1; a <= n; a++){
//		
//		for (null = s; null > 0; null--) {
//			printf(" ");
//		}
//		
//		for (null = a; null > 0; null--) {
//			printf("%d", a);
//		}
//		printf("\n");
//		s--;
//	
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//
//{
//	int num, turn = 0, i,a=0;
//	printf("game start\n");
//	
//	while (1) {
//		for (i = 0; i < 3; i++) {
//
//			printf("���� ���ؾ��ϴ� ���ڴ� %d�Դϴ�\n", ++a);
//
//			scanf("%d", &num);
//			
//			if (num == 31) {
//				if (turn) turn--;
//				else turn++;
//				printf("���� %c�� �¸� �Դϴ�", 'A' + turn%2);
//				return 0;
//			} 
//			
//			if(num == a) printf("%c: %d\n", 'A' + turn, num);
//			else if (num == 0) {
//				if (i == 0)
//				{ printf("��� ���� �ѱ�� ���ؼ��� �ϳ� �̻��� ���� ���ؾ� �մϴ�\n"); 
//				a--;
//				}
//				else {
//					a--;
//					break;
//				}
//			}
//			else {
//				printf("�߸��� �Է��Դϴ�\n");
//				a--;
//			}
//			
//		}
//		printf("���� �Ѿ�ϴ�.\n");
//	
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//
//{
//	int input, player = 0, turn,num=1;
//	printf("game start\n");
//	printf(" 0��Ÿ ����\n");
//	
//	while (1) {
//		for (turn = 0; turn < 3; turn++) {
//			printf("���� ���ؾ��ϴ� ���ڴ� %d�Դϴ�\n", num);
//			printf("%c: ", 'A' + player);
//
//			scanf("%d", &input);
//
//			if (input == 0) {
//				if (turn == 0)
//				{
//					printf("��� ���� �ѱ�� ���ؼ��� �ϳ� �̻��� ���� ���ؾ� �մϴ�\n");
//					turn--;
//					continue;
//				}
//				else {
//					break;
//				}
//			}
//			if (input != num) {
//				printf("�߸��� �Է��Դϴ�\n");
//				turn--;
//				continue;
//			}
//
//			if (input == 31) {
//				break;
//			}
//
//			++num;
//		}
//		player = ++player % 2;
//		if (input == 31) {
//			break;
//		}
//		printf("���� �Ѿ�ϴ�.\n");
//		
//	
//	}
//				printf("���� %c�� �¸��Դϴ�.", 'A' + player);
//	return 0;
//}


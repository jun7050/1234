//#include <stdio.h>
//int main()
//{
//	float conversion = 0;
//	for (conversion=0;conversion < 2; conversion+= 0.1)
//	{
//		printf("%.1f\n", conversion);
//		
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	double conversion = 90;
//	while ( conversion > 0.1 ) {
//		if (conversion == 10.0) { conversion /= 3; continue; }
//		printf("%.3lf\n", conversion);
//		conversion /= 3;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//
//{
//	int number;
//	for (;;) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("���α׷� ����\n");
//			break;
//
//		}
//		
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int for_flag = 1; //
//	int number = 0; //
//	while (for_flag) {	//
//		printf("number = %d\n", number);	//
//		   {	//
//			printf(">number =%d\n", number);	//
//			if (number == 3) {	//
//				for_flag = 0;	//
//				break;
//			}
//		}
//		number++;
//		printf(">>number =%d\n", number);
//
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int for_flag = 1; // 1��
//	int number = 0; // 2��
//	
//	for (; for_flag; ) {	// 3��, 8��, 17��
//		printf("number = %d\n", number);	// 4��, 9��
//		
//		for (; number++;) {// 5�� , 10��
//			
//			printf(">number = %d\n", number);// 11��
//			if (number == 3) {	// 12��
//				for_flag = 0;	// 13��
//				break;	// 14��
//			}
//		}
//		number++;	// 6��, 15��
//		printf(">>number = %d\n", number);	// 7�� , 16��
//
//	}
//	printf("%d %d\n", for_flag, number);	// 18��
//	return 0;	// 19��
//}
//#include<stdio.h>
//int a(int n) {
//	int sum = 0;
//	for (int x = 0; x < n; x++) {
//		sum += x;
//
//	}
//	return sum;
//}
//int main()
//{
//	int result = a(10);
//	printf("%d\n", result);
//	return 0;
//}

//#include<stdio.h>
//
//
//void function_test_1()
//{
//	printf("function_test_1()");
//	printf("�Լ��ȿ��� ����\n");
//}
//int main()
//{
//	printf("������\n");
//	function_test_1();
//	printf("������\n");
//	return 0;
//}
//#include<stdio.h>
//void eatFood() {
//	printf("�� �Ա�\n");
//
//}
//void goSleep() {
//	printf("���ڱ�\n");
//}
//int main()
//{
//	eatFood(); goSleep();
//	eatFood(); eatFood();
//	goSleep(); goSleep();
//	return 0;
//}
//#include<stdio.h>
//void person_A() {
//	int money = 10000;
//	printf("A: �ָӴϿ�");
//	printf("%d��\n", money);
//}
//void person_B() {
//	int money = 5000;
//	printf("B: �ָӴϿ�");
//	printf("%d��\n", money);
//}
//int main()
//{
//	person_A();
//	person_B();
//	return 0;
//}
//#include<stdio.h>
//float sendCard();
//int main() {
//	float result = sendCard();
//	printf("%f���� ����\n", result);
//	return 0;
//
//}
//float sendCard() {
//	printf("<ũ���� ���� ī��>\n");
//	printf("���: 0.7����\n");
//	printf("������(���� ����):");
//	int manwon;
//	scanf("%d", &manwon);
//	float change = manwon;
//	return change;
//}

//#include<stdio.h>
//char getA() { return 'A'; }
//char getP() { return 'P'; }
//char getL() { return 'L'; }
//char getE() { return 'E'; }
//char getF() { return'F'; }
//char getT() { return'T'; }
//int main()
//{
//	printf("����� �����?\n");
//	printf("%c%c%c%c%c\n", getA(), getP(), getP(), getL(), getE());
//	printf("������ �����?\n");
//	printf("%c%c%c%c\n", getL(), getE(), getF(), getT());
//	return 0;
//}

//#include<stdio.h>
//
//char rightType(char type) {
//	if (type != 'A' && type != 'B') {
//		printf("�ֹ��Ҽ� ���� �ܹ��� �Դϴ�\n");
//		return 'C';
//
//	}
//	return type;
//}
//
//	void makeHamburger(char type, int count) {
//		if (type == 'A') {
//			printf("AŸ�� �ܹ���");
//
//		}
//		else {
//			printf("BŸ�� �ܹ���");
//		}
//		printf("%d�� ���Խ��ϴ�.\n");
//
//	}
//	int main()
//	{
//		char ham_type;
//		int ham_count;
//			printf("��� Ÿ���� �ܹ��Ÿ� ");
//		printf("�ֹ��ϻ�ڽ��ϱ�?(A or B)\n");
//		scanf("%c", &ham_type);
//		if (rightType(ham_type) == 'C') return 0;
//		printf("�ܹ��� � �ֹ��Ͻðڽ��ϱ�?\n");
//		scanf("%d", &ham_count);
//		makeHamburger(ham_type, ham_count);
//		return 0;
//	}
//
//

//#include <stdio.h>
//int add_number(int num1, int num2) {
//	int retVal = num1 + num2;
//	return retVal;
//}
//int mult_number(int num1, int num2) {
//	int result = num1 * num2;
//	return result;
//}
//int minus_number(int num1, int num2) {
//	int result = num1 - num2;
//	return result;
//}
//float divide_number(int num1, int num2) {
//	float result = (float)num1 / num2;
//	return result;
//}
//
//int main() {
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	int data2 = minus_number(a, b);
//	int data3 = mult_number(a, b);
//	float data4 = divide_number(a, b);
//	printf("���: %d, %d, %d, %.1f\n", data1, data2, data3, data4);
//	return 0;
//}

//#include<stdio.h>
//int minus(int n) {
//	if (n <= 1)return -3;
//	return minus(n - 1) - 2;
//}
//int main() {
//	int n; scanf("%d", &n);
//	printf("%d", minus(n));
//	return 0;
//}

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
//			printf("프로그램 종료\n");
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
//	int for_flag = 1; // 1번
//	int number = 0; // 2번
//	
//	for (; for_flag; ) {	// 3번, 8번, 17번
//		printf("number = %d\n", number);	// 4번, 9번
//		
//		for (; number++;) {// 5번 , 10번
//			
//			printf(">number = %d\n", number);// 11번
//			if (number == 3) {	// 12번
//				for_flag = 0;	// 13번
//				break;	// 14번
//			}
//		}
//		number++;	// 6번, 15번
//		printf(">>number = %d\n", number);	// 7번 , 16번
//
//	}
//	printf("%d %d\n", for_flag, number);	// 18번
//	return 0;	// 19번
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
//	printf("함수안에서 실행\n");
//}
//int main()
//{
//	printf("실행전\n");
//	function_test_1();
//	printf("실행후\n");
//	return 0;
//}
//#include<stdio.h>
//void eatFood() {
//	printf("밥 먹기\n");
//
//}
//void goSleep() {
//	printf("잠자기\n");
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
//	printf("A: 주머니에");
//	printf("%d원\n", money);
//}
//void person_B() {
//	int money = 5000;
//	printf("B: 주머니에");
//	printf("%d원\n", money);
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
//	printf("%f만원 받음\n", result);
//	return 0;
//
//}
//float sendCard() {
//	printf("<크리스 마스 카드>\n");
//	printf("비용: 0.7만원\n");
//	printf("돈내기(단위 만원):");
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
//	printf("사과는 영어로?\n");
//	printf("%c%c%c%c%c\n", getA(), getP(), getP(), getL(), getE());
//	printf("왼쪽은 영어로?\n");
//	printf("%c%c%c%c\n", getL(), getE(), getF(), getT());
//	return 0;
//}

//#include<stdio.h>
//
//char rightType(char type) {
//	if (type != 'A' && type != 'B') {
//		printf("주문할수 없는 햄버거 입니다\n");
//		return 'C';
//
//	}
//	return type;
//}
//
//	void makeHamburger(char type, int count) {
//		if (type == 'A') {
//			printf("A타입 햄버거");
//
//		}
//		else {
//			printf("B타입 햄버거");
//		}
//		printf("%d개 나왔습니다.\n");
//
//	}
//	int main()
//	{
//		char ham_type;
//		int ham_count;
//			printf("어느 타입의 햄버거를 ");
//		printf("주문하사겠습니까?(A or B)\n");
//		scanf("%c", &ham_type);
//		if (rightType(ham_type) == 'C') return 0;
//		printf("햄버거 몇개 주문하시겠습니까?\n");
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
//	printf("결과: %d, %d, %d, %.1f\n", data1, data2, data3, data4);
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

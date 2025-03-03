//#include<stdio.h>
//
//int main()
//{
//	const int n = 10;
//	int num;
//	int a[n] = {};
//
//	scanf("%d", &num);
//	for (int i = 0; i < num; i++) {
//		scanf("%d", &a[i]);
//
//	}
//
//	char arr2d[n][n] = {};
//	//arr2d
//	for (int i = 0; i < num; i++) {
//		for (int j = 0; j < a[i]; j++) {
//			arr2d[j][i] = '*';
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (arr2d[i][j] == 0)printf(" ");
//			else printf("%c", arr2d[i][j]);//세로 ... 
//		}
//		printf("\n");
//	}
//
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	const int n = 10;
//	 int aa[n][n] = {};
//	int x = -1, y = 0;
//
//	int num= n;
//	int val = 1;
//	int data=1;
//	/*for (int i = 0; i < num; i++) {
//		if (turn == 0) { turn++; continue; }
//		else if (turn % 2 == 0) {
//			switch (turn/2)
//			{
//			case 1: case 3: y++; break;
//			case 2: case 4: y--; break;
//
//			}
//			aa[y][x] = val;
//			val++;
//			turn++;
//		}
//		else {
//			switch (turn / 2)
//			{
//			case 1:case 3: x++; break;
//			case 2: case 4: x--; break;
//			}
//			aa[y][x] = val;
//			val++; 
//			turn++;
//		}
//	}*/
//	while (1)
//	{
//		
//		for (int i = 0; i < num; i++)//1~5
//		{
//			x+=data;
//			aa[y][x] = val;
//			val++;
//		}
//		num--;
//		if (num == 0) break;
//
//
//		for (int i = 0; i < num; i++)//6~9 y++
//		{
//			y+=data;
//			aa[y][x] = val;
//			val++;
//
//		}
//
//		data *= -1;
//
//	}
//
//
//
//	//for (int i = 0; i < num; i++) {//19~22
//	//	x++;
//	//	aa[y][x] = val;
//	//	val++;
//	//}
//	//num--;
//
//
//	//for (int i = 0; i < num; i++) {//23,24 y++
//	//	y++;
//	//	aa[y][x] = val;
//	//	val++;
//	//}
//	//for (int i = 0; i < num; i++) {//26,27
//	//	x--;
//	//	aa[y][x] = val;
//	//	val++;
//	//}
//	//num--;
//
//
//	//for (int i = 0; i < num; i++) {//28 y--
//	//	y--;
//	//	aa[y][x] = val;
//	//	val++;
//	//}
//	//for (int i = 0; i < num; i++) {//29
//	//	x++;
//	//	aa[y][x] = val;
//	//	val++;
//	//}
//
//
//
//	for (int k = 0; k < n; k++) {
//		for (int i = 0; i < n; i++) {
//			printf("%3d ", aa[k][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//void main()
//{
//	int b = 100;
//	int* pB = &b;
//	printf("b = %d\n", b);
//	printf("b = %d\n", &b);
//	printf("b = %d\n", *pB);
//	printf("b = %d\n", pB);
//}

//#include<stdio.h>
//
//void main()
//{
//	char a='A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("sizeof(pA)= %d byte\n", sizeof(pA));
//	printf("sizeof(pB)= %d byte\n", sizeof(pB));
//	printf("sizeof(pC)= %d byte\n", sizeof(pC));
//
//	printf("sizeof(*pA)= %d byte\n", sizeof(*pA));
//	printf("sizeof(*pB)= %d byte\n", sizeof(*pB));
//	printf("sizeof(*pC)= %d byte\n", sizeof(*pC));
//
//}

//#include<stdio.h>
//
//void main()
//{
//	char str[] = "programming";
//	char* ptr1, * ptr2;
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("두 변수의 차는 %d이다.\n", ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n", *(ptr1 + 3));
//
//}

//#include<stdio.h>
//void main()
//{
//	int* numptr;
//	int num1 = 10;
//	int num2 = 20;
//	numptr = &num1;
//	printf("%d\n", *numptr);
//	numptr = &num2;
//	printf("%d\n", *numptr);
//}

//#include<stdio.h>
//int main()
//{
//	int number[2] = { 1,2 };
//	void* p = number;
//	printf("%d\n", *(int*)p);
//	return 0;
//}
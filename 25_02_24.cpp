//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int num;
//	int a=1;
//	
//	for (int i = 0; i < 10; i++) {
//			scanf("%d", &arr[i]);
//		}
//	for (;a;) {
//		scanf("%d", &num);
//		for (int i = 0; i < 10; i++ ) {
//			if (num == arr[i]) {
//				printf("exist");
//				a=0;
//				break;
//			}
//		}
//
//	}
//	return 0;
//}
//#include<stdio.h>
//void main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	printf("%d%d", left ,right);
//}

//#include<stdio.h>
//void main()
//{
//	int num[4] = { 4,3,1,2 };
//	int tmp;
//	tmp = num[2];
//	num[2] = num[0];
//	num[0] = tmp;//1,3,4,2
//	tmp = num[2];
//	num[2] = num[1];
//	num[1] = tmp;//1,4,3,2
//	tmp = num[1];
//	num[1] = num[3];
//	num[3] = tmp;
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d", num[i]);
//	}
//}


//#include<stdio.h>
////void change(int &n, int &m);
//int main()
//{
////int arr[4];
//	int arr[4] = { 1,4,5,2 };
//	int num=0;
//	int a = 0;
//	/*for (int i = 0; i < 4; i++) {
//		scanf("%d", &arr[i]);
//	}*/
//	for (int i = 0; i < 4; i++) {
//		for (int j = i+1; j < 4; j++) {
//
//			if (arr[i] > arr[j]) {
//
//				num = arr[i];
//				arr[i] = arr[j];
//				arr[j] = num;
//				//change(i,j);
//				
//			}
//		
//				
//		}
//	}
//	for (int i = 0; i < 4; i++) {
//		printf("%d", arr[i]);
//
//	}
//}
////int change(int* arr, int n, int m)
////{
////	int num;
////	
////	num = arr[n];
////	arr[n] = arr[m];
////	arr[m] = num;
////	return m,n;
////
////}
//
//
////void change(int &n, int &m)
////{
////	int num;
////
////	num = n;
////	n =m;
////	m = num;
////
////
////}

//#include<stdio.h>
//void main()
//{
//	int one = 1, two = 2;
//	int max = 0;
//	if (one > two)max = one;
//	else max = two;
//	printf("%d", max);
//}

//#include<stdio.h>
//
//void main()
//{
//	int a[5] = { 1,3,6,4,2 };
//	int num, max, min, total = a[0];
//	float aver = 0.0;
//	
//	
//	max = a[0];
//	min = a[0];
//	for (int i = 1; i < 5; i++) {
//		if (max < a[i]) max = a[i];
//		if (min > a[i]) min= a[i];
//		total += a[i];
//	}
//	aver = total;
//	printf("최대: %d, 최소: %d, 총합: %d, 평균: %.1f", max, min, total, aver/5);
//}

//#include<stdio.h>
//void main()
//{
//	int a[10] = { 1,1,4,5,6,2,3,3,4,1 };
//	int dice[7] = {};
//	for (int i = 0; i < 10; i++) {// 주사위이니까 위의 배열을 숫자가 아니라 위치라고 생각하면 n번 자리에 n번 들어간다 
//		dice[a[i]]++;
//	}
//
//	for (int i = 1; i <= 6; i++) {
//				printf("%d", dice[i]);
//		
//	}
//}
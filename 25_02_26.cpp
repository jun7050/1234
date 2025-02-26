//#include<stdio.h>
//int main()
//{
//	char arr[2][3] = { '1','2','3','4','5','6' };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[2][3] = { {'1','2','3'},{'1','2','3' } };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//#include<stdio.h>
//void main()
//{
//	int arr2d[5][4] = {
//		{662,7,4,74},{8,396,299,95},{66,73,86,0},{116,26,586,42},{84,7,41,11}
//	};
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%3d", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//void main()
//{
//	int arr[3][3] = { {2,4,6},{8,10,12},{14,16,18} };
//	int num;
//	/*for (int i = 0; i < 3; i++) {
//		for (int j = i+1; j < 3; j++) {
//		num = arr[i][j];
//		arr[i][j] = arr[j][i];
//		arr[j][i] = num;
//		}
//	}*/
//	
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%2d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	
//}
//
//#include<stdio.h>
//void main()
//{
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = i + j;
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//void main()
//{
//	int arr[5][5];
//	int num=1;
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			arr[i][j] = num;
//			num++;
//		}
//		
//	}
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%2d ", arr[i][j]);
//		}
//		printf("\n");
//
//	}
//}
//#include<stdio.h>
//void main()
//{
//	const int n = 5;
//	int arr[n][n];
//	int num = 1;
//	
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			arr[i][j] = num;
//			num++;
//		}
//
//	}
//	
//	
//	for (int i = n-1; i >= 0; i--) {
//		for (int j = n-1; j >= 0; j--) {
//			printf("%2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//		
//	
//}

//#include<stdio.h>
//void main()
//{
//	const int n = 5;
//	long arr[n][n];
//	long a[n * n];
//	int num=1;
//	int m = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			arr[i][j] = num;
//			num++;
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//
//			a[m] = arr[i][j];
//			m++;
//		}
//		 
//		
//	}
//
//	for (int i = 0; i < n*n; i++) {
//		
//		printf("%2d \n", a[i]);
//		
//	}
//}

#include<stdio.h>

int main()
{
	int num;
	int a[10] = {};
	
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &a[i]);
		
	}
	long arr2d[10][10];
	//arr2d
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < a[i]; j++) {
			arr2d[i][j] = a[i];
		}
	}
	
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < a[i]; j++) {
			if(arr2d[i][j] == 0)printf(" ");
			else printf("", arr2d[i][j]);
		}
		printf("\n");
	}

	return 0;


	
}
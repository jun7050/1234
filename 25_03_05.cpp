//#include<stdio.h>
//int main()
//{
//	int fibonacci[5] = { 3,5,8,13,21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//
//	int* ptrFibo1 =  &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf("> %d - %d", *ptrFibo4, *ptrFibo1);
//	printf(">> %d\n", ptrFibo4 - ptrFibo1);
//
//	printf("%d", ptrFibo[1]);
//	printf("%d", ptrFibo[0]);
//	printf("%d", ptrFibo[-1]);
//
//	return 0;
//}

//#include<stdio.h>
//
//
//int main()
//{
//	int numArr[5] = { 11,22,33,44,55 };
//	int* numptrA;
//	void* ptr;
//	numptrA = &numArr[2];
//	ptr = numArr;
//	printf("%d\n", *(numptrA-1));
//	printf("%d\n", *((int*)ptr+4));
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int* ptr;
//	int arr[5] = {};
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//	ptr = arr;
//
//	ptr += 2;
//
//	printf("%d", *ptr);
//	return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int arr[5] = { 2,4,6,8,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 5; i++) {
//		printf("%d", *p++);
//
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++) {
//		printf("%d", *p++);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num[4] = { 1,2,3,4 };
//	int* pt = num;
//	pt++;
//	*pt++ = 5;
//	*pt++ = 10;
//
//	pt--;
//	*pt++ += 20;
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//void  main()
//{
//	char str[] = "기울어진 운동장 : 애초부터 공정한 경쟁을 할 수 없는 상황을 비유적으로 이르는 말.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", ptr);
//}

//#include<stdio.h>
//void main()
//{
//	char str[] = "기울어진 운동장: 어느 한 쪽으로 기울어진 운동장에서는 아무리 뛰어난 사람이라도 경기에서 이길 수 없다는 데서 유래. ";
//	char* ptr = &str[7];
//	printf("%s\n\n", str);
//	str[15] = 'a'; str[23] = 'b'; str[25] = 'c';
//	printf("%s\n\n", ptr);
//}

//#include<stdio.h>
//int main()
//{
//	int arr[100] = {};
//	int* num;
//	for (int i = 0; i < 100; i++) {
//		arr[i] = i + 1;
//	}
//	for (int i = 0; i < 100; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (int i = 99; i >= 0; i--) {
//		printf("%d ", arr[i]);
//	}
//	num = arr;
//	num += 99;
//	printf("\n%d\n", *num);
//	for (int i = 0; i < 100; i++) {
//		printf("%d ", *num);
//		num--;
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int arr[100] = {};
//	int* num;
//	for (int i = 0; i < 100; i++) {
//		arr[i] = i + 1;
//	}
//
//	
//	for (num = arr + 50; *num != 50; num++) {
//		printf("%d ", *num);
//		if (*num == 100)  
//			num -= 100;
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[] = "memmove can be very useful.......";
//	memmove(str + 20, str + 15, 11);// 
//	puts(str);
//	return 0;
//}

//#include<stdio.h>
//#include<string>
//
//struct mydata
//{
//	int a;
//	char b[25];
//};
//void main()
//{
//	char buf[5];
//	memset(buf, '1', 5);
//	printf("%s\n", buf);
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct mydata data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'k';
//	printf("%d - %s\n", data.a, data.b);
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char* str1 = (char*)"coding";
//	char* str2 = (char*)"coding";
//	char* str3 = (char*)"coding";
//	char* str4 = (char*)"coding";
//	char* str5 = (char*)"coding";
//	printf("%s with %s = %d\n", str1, str2, memcmp(str1, str2, strlen(str1)));
//	printf("%s with %s = %d\n", str1, str3, memcmp(str1, str3, strlen(str1)));
//	printf("%s with %s = %d\n", str1, str3, memcmp(str1, str3, strlen(str3)));
//	printf("%s with %s = %d\n", str1, str2, memcmp(str1, str4, strlen(str1)));
//	printf("%s with %s = %d\n", str1, str2, memcmp(str1, str5, strlen(str1)));
//	printf("%s with %s = %d\n", str1, str2, memcmp(str1, str5, strlen(str5)));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int src_data[10] = { 0,1,2,3,4,5 };
//	int dst_data[10] = { 10,20,30,40,50 };
//	memcpy(dst_data, src_data, sizeof(int) * 4);
//
//	printf("%d %d %d %d %d\n", src_data[0], src_data[1], src_data[2], src_data[3], src_data[4]);
//	printf("%d %d %d %d %d\n", dst_data[0], dst_data[1], dst_data[2], dst_data[3], dst_data[4]);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[20] = "coding";
//	strcat(str, ".ne.kr");
//	printf("%s\n", str);
//	return 0;
//}
#include<stdio.h>
#include<string.h>

int main()
{
	char str[] = "this is a sample string";
	char* pch;
	printf("Looking for the 's' character int \"%s\"...\n", str);
	pch = strchr(str, 's');
	while (pch != NULL) {
		printf("found ar %d\n", pch - str + 1);
		pch = strchr(pch + 1, 's');
	}
	return 0;
}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string>
//
//void main()
//{
//	struct bibim {
//		int a;
//		float b;
//		char c;
//		char d[5];
//	};
//
//	struct bibim b1;
//
//	b1.a = 10;
//	b1.b = 1.1f;
//	b1.c = 'A';
//	strcpy(b1.d, "ABCD");
//	printf("b1.a==> %d\n", b1.a);
//	printf("b1.b==> %f\n", b1.b);
//	printf("b1.c==> %c\n", b1.c);
//	printf("b1.d==> %s\n", b1.d);
//}

 //#define _CRT_SECURE_NO_WARNINGS
 //#include <stdio.h>
 //void main()
 //{
	//char name[10]; int kor; int eng; float avg;

	/*printf("이름 : ");
	scanf("%s", name, 9);

	printf("국어 점수 : ");
	scanf("%d", &kor);

	printf("영어 점수: ");
	scanf("%d", &eng);

	avg = (kor + eng) / 2.0f;

	printf("\n");
	printf("학생 이름 ==〉 %s\n", name);
	printf("국어 점수	==> %d\n", kor);
	printf("영어 점수==> %d\n", eng);
	printf("평균 점수==> %5.1f\n", avg);
 }*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>

void main()
{
	struct student {
		char name[10]; 
		int kor; 
		int eng; 
		float avg;

	};

	struct student s;

	
	printf("이름 : ");
	scanf("%s", s.name, 9);

	printf("국어 점수 : ");
	scanf("%d", &s.kor);

	printf("영어 점수: ");
	scanf("%d", &s.eng);

	s.avg = (s.kor + s.eng) / 2.0f;

	printf("\n");
	printf("학생 이름 ==〉 %s\n", s.name);
	printf("국어 점수	==> %d\n", s.kor);
	printf("영어 점수==> %d\n", s.eng);
	printf("평균 점수==> %5.1f\n", s.avg);
}

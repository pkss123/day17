#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define Lv_UP(a) (a) + 10
//
//int main() {
//
//	int limit = 10;
//	int sum = 0, Q = 0, OK = 0, t = 1;
//
//	srand(time(NULL));
//	while (t) {
//		for (int i = 1; i <= 3; i++) {
//				int s = rand() % (limit - 1) + 1;
//				int n = rand() % (limit - 1) + 1;
//				printf("랜덤 덧셈식 출력 : %d + %d = \n", s, n);
//				sum = s + n;
//				printf("정답 입력 : ");
//				scanf_s("%d", &Q);
//				while (getchar() != '\n');
//				if (Q == sum) {
//					printf("정답 입니다!\n");
//					OK++;
//				}
//				else {
//					printf("오답입니다\n");
//				}
//			}
//		printf("정답 수 : %d\n", OK);
//
//		int retry = 0;
//		printf("현재 난이도 : %d\n", limit);
//		printf("난이도 상승 / 종료 선택(1:상승\t2:종료 >");
//		scanf_s("%d", &retry);
//		while (getchar() != '\n');
//		if (retry == 1) {
//			limit = Lv_UP(limit);
//			}
//		else {
//		puts("프로그램을 종료합니다");
//		break;
//		}
//	}
//}

/*
	지역변수 & 전역변수
	 전역 변수 : 함수 or {} 밖에서 선언하는 변수
				 프로그램 전체에서 사용 가능
				 메모리의 Data 영역에 저장, 프로그램 종료 시 변수가 제거

	 지역 변수 : 함수 or {} 안에서 선언하는 변수
				 변수를 선언한 함수 or {} 안에서만 사용 가능
				 메모리의 Stack 영역에 저장, 함수 or {}가 끝나면 변수가 제거
*/

//int a = 10;		// 전역 변수
//int main() {
//
//	int b = 20;	// 지역 변수 - main 함수 안에서만 사용 가능
//	printf("%d + %d = %d\n", a, b, a + b);	// 전역 변수 a의 내용을 호출
//	printf("변수 a의 주소 : %p\n", &a);
//
//	a = 1;		// 변수이름 a 앞에 자료형이 없기 때문에 전역 변수 a를 의미
//	printf("%d + %d = %d\n", a, b, a + b);	// 전역 변수 a의 내용을 호출
//	printf("변수 a의 주소 : %p\n", &a);
//
//	int a = 100;	// 전역 변수와 같은 이름의 지경 변수 선언(지역변수의 우선순위가 더 높다)
//	printf("%d + %d = %d\n", a, b, a + b);	// 전역 변수 a의 내용을 호출
//	printf("변수 a의 주소 : %p\n", &a);
//}

/*
	함수(function)
	 특정 동작을 하는 코드를 main 함수 바깥쪽에 작성해서 사용
	  > 하나의 기능을 가진 작은 프로그램
	 함수를 호출하면 해당 함수가 실행되고, 동작이 완료되면 호출했던 위치로 돌아간다

	 함수 정의 : 함수를 호출하면 동작할 코드를 작성

		<반환타입> <함수이름> (매개변수) {
			실행코드;
			return 값;
		}

		반환 타입	: 함수 실행이 종료되면서 호출했던 위치로 돌아갈 때 돌려주는 값의 자료형
					  보내줄 값이 있으면 해당 값의 자료형, 없으면 void 입력
					  (return 값의 자료형에 따라 다르게 입력)
		함수 이름	: 함수 호출(실행) 시에 사용되는 이름
		매개변수	: 함수 호출 시에 함수에 특정 값을 전달하기 위해 값을 저장하는 변수
		return		: 함수 실행이 종료되면서 호출했던 위치로 결과값을 돌려줄 때 사용
					  (함수 실행을 종료시키기 위해서 사용하기도 함)
					  단 하나의 값만 반환 가능

		함수 선언 유형
		 1. main 함수 이전에 함수를 완전하게 작성
		 2. main 함수 이전에는 함수의 반환타입, 함수 이름, 매개변수 까지만 작성하고
		    main 함수 뒷쪽으로 함수를 완전하게 작성
*/

//void Hi() {
//	puts("안녕하세요");
//}

//int addTen(int su) {
//	su += 10;
//	return su;
//}

//double returnPi();

//char sendRe(char ch);

//int main() {

	//Hi();

	//int a = 1, b = 0;
	//b = addTen(a);
	//printf("addTen 함수 동작 : %d\n", b);
	//printf("addTen 함수 동작 : %d\n", addTen(a));

	//double p = returnPi();
	//printf("원주율 : %.2f\n", p);
	//printf("원주율 : %.2f\n", returnPi());

	//char c = 'a';
	//c = sendRe(c);
	//printf("변환 문자 :%c\n", sendRe(c));
	//

//}

//double returnPi() {
//	return 3.141592;
//}

//char sendRe(char ch) {
//	printf("받은 문자 : %c\n", ch);
//	ch += 1;
//	return ch;
//}

//int inputInt();
//int add(int a, int b);
//int total(int la);
//
//int main() {
//	int s1 = inputInt();
//	int s2 = inputInt();
//	int sum = add(s1, s2);
//	printf("%d + %d= %d", s1, s2);
//	total(sum);
//}
//
//int inputInt() {
//	int a = 0;
//	printf("숫자 입력 : ");
//	scanf_s("%d", &a);
//	while (getchar() != '\n');
//	return a;
//}
//
//int add(int a, int b) {
//	return a + b;
//}
//int total(int la) {
//	int sum = 0;
//	for (int i = 0; i <= la; i++)
//		sum += i;
//	printf("1 ~ %d까지의 합 %d\n", la, sum);
//}

int inputInt();
int inputRange(int a, int b);
int main() {
	int value = inputRange(1, 10);		// 함수에 전달되는 숫자가 10, 1, 이여도 동일한 동작 가능하도록
	printf("입력받은 숫자 : %d\n", value);
}

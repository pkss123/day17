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
//				printf("���� ������ ��� : %d + %d = \n", s, n);
//				sum = s + n;
//				printf("���� �Է� : ");
//				scanf_s("%d", &Q);
//				while (getchar() != '\n');
//				if (Q == sum) {
//					printf("���� �Դϴ�!\n");
//					OK++;
//				}
//				else {
//					printf("�����Դϴ�\n");
//				}
//			}
//		printf("���� �� : %d\n", OK);
//
//		int retry = 0;
//		printf("���� ���̵� : %d\n", limit);
//		printf("���̵� ��� / ���� ����(1:���\t2:���� >");
//		scanf_s("%d", &retry);
//		while (getchar() != '\n');
//		if (retry == 1) {
//			limit = Lv_UP(limit);
//			}
//		else {
//		puts("���α׷��� �����մϴ�");
//		break;
//		}
//	}
//}

/*
	�������� & ��������
	 ���� ���� : �Լ� or {} �ۿ��� �����ϴ� ����
				 ���α׷� ��ü���� ��� ����
				 �޸��� Data ������ ����, ���α׷� ���� �� ������ ����

	 ���� ���� : �Լ� or {} �ȿ��� �����ϴ� ����
				 ������ ������ �Լ� or {} �ȿ����� ��� ����
				 �޸��� Stack ������ ����, �Լ� or {}�� ������ ������ ����
*/

//int a = 10;		// ���� ����
//int main() {
//
//	int b = 20;	// ���� ���� - main �Լ� �ȿ����� ��� ����
//	printf("%d + %d = %d\n", a, b, a + b);	// ���� ���� a�� ������ ȣ��
//	printf("���� a�� �ּ� : %p\n", &a);
//
//	a = 1;		// �����̸� a �տ� �ڷ����� ���� ������ ���� ���� a�� �ǹ�
//	printf("%d + %d = %d\n", a, b, a + b);	// ���� ���� a�� ������ ȣ��
//	printf("���� a�� �ּ� : %p\n", &a);
//
//	int a = 100;	// ���� ������ ���� �̸��� ���� ���� ����(���������� �켱������ �� ����)
//	printf("%d + %d = %d\n", a, b, a + b);	// ���� ���� a�� ������ ȣ��
//	printf("���� a�� �ּ� : %p\n", &a);
//}

/*
	�Լ�(function)
	 Ư�� ������ �ϴ� �ڵ带 main �Լ� �ٱ��ʿ� �ۼ��ؼ� ���
	  > �ϳ��� ����� ���� ���� ���α׷�
	 �Լ��� ȣ���ϸ� �ش� �Լ��� ����ǰ�, ������ �Ϸ�Ǹ� ȣ���ߴ� ��ġ�� ���ư���

	 �Լ� ���� : �Լ��� ȣ���ϸ� ������ �ڵ带 �ۼ�

		<��ȯŸ��> <�Լ��̸�> (�Ű�����) {
			�����ڵ�;
			return ��;
		}

		��ȯ Ÿ��	: �Լ� ������ ����Ǹ鼭 ȣ���ߴ� ��ġ�� ���ư� �� �����ִ� ���� �ڷ���
					  ������ ���� ������ �ش� ���� �ڷ���, ������ void �Է�
					  (return ���� �ڷ����� ���� �ٸ��� �Է�)
		�Լ� �̸�	: �Լ� ȣ��(����) �ÿ� ���Ǵ� �̸�
		�Ű�����	: �Լ� ȣ�� �ÿ� �Լ��� Ư�� ���� �����ϱ� ���� ���� �����ϴ� ����
		return		: �Լ� ������ ����Ǹ鼭 ȣ���ߴ� ��ġ�� ������� ������ �� ���
					  (�Լ� ������ �����Ű�� ���ؼ� ����ϱ⵵ ��)
					  �� �ϳ��� ���� ��ȯ ����

		�Լ� ���� ����
		 1. main �Լ� ������ �Լ��� �����ϰ� �ۼ�
		 2. main �Լ� �������� �Լ��� ��ȯŸ��, �Լ� �̸�, �Ű����� ������ �ۼ��ϰ�
		    main �Լ� �������� �Լ��� �����ϰ� �ۼ�
*/

//void Hi() {
//	puts("�ȳ��ϼ���");
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
	//printf("addTen �Լ� ���� : %d\n", b);
	//printf("addTen �Լ� ���� : %d\n", addTen(a));

	//double p = returnPi();
	//printf("������ : %.2f\n", p);
	//printf("������ : %.2f\n", returnPi());

	//char c = 'a';
	//c = sendRe(c);
	//printf("��ȯ ���� :%c\n", sendRe(c));
	//

//}

//double returnPi() {
//	return 3.141592;
//}

//char sendRe(char ch) {
//	printf("���� ���� : %c\n", ch);
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
//	printf("���� �Է� : ");
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
//	printf("1 ~ %d������ �� %d\n", la, sum);
//}

int inputInt();
int inputRange(int a, int b);
int main() {
	int value = inputRange(1, 10);		// �Լ��� ���޵Ǵ� ���ڰ� 10, 1, �̿��� ������ ���� �����ϵ���
	printf("�Է¹��� ���� : %d\n", value);
}

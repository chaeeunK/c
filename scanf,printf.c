#include <stdio.h>
int main(void)
{	/*
	//������ ������ ���� ����
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);
	//%d = ������ ���� ��� ,(�޸�) �ڿ� ������ ������� ����

	//�Ǽ��� ������ ���� ����
	float f = 46.5f;
	printf("%.2f\n", f);
	//% �ڿ� .2 ������ �Ҽ��� ���° �ڸ����� ���� ���� �� ����
	double d = 4.428;
	printf("%.2lf\n", d);

	const int YEAR = 1999; //���
	printf("�¾ �⵵ : %d\n", YEAR);
	//YEAR = 2001;


	//printf
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d x %d = %d\n", 30, 79, 30 * 79); //���� ����

	//scanf
	//Ű���� �Է��� �޾Ƽ� ����
	
	int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);

	int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);
	

	//����(�ѱ���), ���ڿ�(�� ���� �̻��� ���� ����)
	
	char c = 'A';
	printf("%c\n",c);
	

	
	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);
	*/


	//������Ʈ
	//�������� �������� ������ �Լ� (���� �ۼ�)
	//�̸�, ����, ������, Ű, ���˸�

	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̿���?");
	scanf_s("%d", &age);

	float weigth;
	printf("�����Դ� �� kg �̿���?");
	scanf_s("%f", &weigth);

	double height;
	printf("Ű�� �� cm����?");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������?");
	scanf_s("%s", what, sizeof(what));

	//���� ���� ���
	printf("\n\n ---������ ����---\n\n");
	printf("�̸�     : %s\n", name);
	printf("����     : %d\n", age);
	printf("������   : %.2f\n", weigth);
	printf("Ű       : %.2lf\n", height);
	printf("����     : %s\n", what);

	return 0;
}


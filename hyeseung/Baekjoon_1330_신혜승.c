#include <stdio.h>

int main(void)
{
	int A = 0, B = 0;
	-10000 <= A;
	A <= 10000;
	-10000 <= B;
	B <= 10000;

	printf("���� �� ���� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &A, &B);

	if (A > B)
		printf(">");
	else if (A < B)
		printf("<");
	else
		printf("==");

	return 0;
}
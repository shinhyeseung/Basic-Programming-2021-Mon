#include <stdio.h>

int main(void)
{
	int A = 0, B = 0;
	1 <= A;
	A <= 10000;
	1 <= B;
	B <= 10000;

	printf("1���� 10000������ ���� �� �ΰ��� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &A, &B);

	printf("A + B = %d\n", A + B);
	printf("A - B = %d\n", A - B);
	printf("A x B = %d\n", A * B);
	printf("A / B = %d\n", A / B);
	printf("A %% B = %d\n", A % B);

	return 0;
}
#include <stdio.h>

int main(void)
{
	int A = 0, B = 0;
	1 <= A;
	A <= 10000;
	1 <= B;
	B <= 10000;

	printf("1부터 10000까지의 숫자 중 두개를 입력하시오 : ");
	scanf_s("%d %d", &A, &B);

	printf("A + B = %d\n", A + B);
	printf("A - B = %d\n", A - B);
	printf("A x B = %d\n", A * B);
	printf("A / B = %d\n", A / B);
	printf("A %% B = %d\n", A % B);

	return 0;
}
#include <stdio.h>

int main(void)
{
	int A = 0, B = 0, i = 0, j = 0;

	//printf("����� ������ �����ҷ� ? ");
	scanf_s("%d", &i);

	for (j = 1; j <= i; j++)
	{
		//printf("�� ���� �Է� : ");
		scanf_s("%d %d", &A, &B);

		printf("Case #%d: %d + %d = %d\n", j, A, B, A + B);
	}
}
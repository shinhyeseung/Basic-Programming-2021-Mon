#include <stdio.h>

int main(void)
{
	int i = 0, j = 0, star = 0, ent = 0;

	//printf("�� ���� ����ҷ� ? ");
	scanf_s("%d", &i);

	for (j = 1; j <= i; j++) {

		for (ent = 1; ent <= i - j; ent++)
			printf(" ");

		for (star = 1; star <= j; star++)
			printf("*");
		
		printf("\n");
	}
}
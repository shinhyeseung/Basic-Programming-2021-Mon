#include <stdio.h>

int main(void)
{
	int n = 0, i = 0, hap = 0;

	//printf("����� �� ���ϰ�;�?");
	scanf_s("%d", &n);

	for (i = 0; i <= n; i++) 
		hap = hap + i;
	
	printf("%d", hap);
}
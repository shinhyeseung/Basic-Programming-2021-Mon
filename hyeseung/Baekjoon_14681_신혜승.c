#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;
	-1000 <= x;
	x != 0;
	x <= 1000;
	-1000 <= y;
	y != 0;
	y <= 1000;

	printf("��� ��и鿡 ���ϴ��� �˰���� ���� ��ǥ�� �Է� : ");
	scanf_s("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("��(%d,%d)�� �� 1��и鿡 ���ϴ� ��ǥ�Դϴ�.", x, y);
	else if (x < 0 && y>0)
		printf("��(%d,%d)�� �� 2��и鿡 ���ϴ� ��ǥ�Դϴ�.", x, y);
	else if (x < 0 && y<0)
		printf("��(%d,%d)�� �� 3��и鿡 ���ϴ� ��ǥ�Դϴ�.", x, y);
	else
		printf("��(%d,%d)�� �� 4��и鿡 ���ϴ� ��ǥ�Դϴ�.", x, y);

	return 0;
}
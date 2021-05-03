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

	printf("어느 사분면에 속하는지 알고싶은 점의 좌표를 입력 : ");
	scanf_s("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("점(%d,%d)은 제 1사분면에 속하는 좌표입니다.", x, y);
	else if (x < 0 && y>0)
		printf("점(%d,%d)은 제 2사분면에 속하는 좌표입니다.", x, y);
	else if (x < 0 && y<0)
		printf("점(%d,%d)은 제 3사분면에 속하는 좌표입니다.", x, y);
	else
		printf("점(%d,%d)은 제 4사분면에 속하는 좌표입니다.", x, y);

	return 0;
}
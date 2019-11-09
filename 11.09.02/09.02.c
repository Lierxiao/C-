#define _CRT_SECURE_NO_WARNINGS
//水仙花数
#include <stdio.h>
int main()
{
	int x=0;
	int y=0;
	int z=0;
	int a=0;
	for (a = 100; a < 1000; a++)
	{
		x = a / 100;
		y = a / 10 % 10;
		z = a % 10;
		//printf("%d\n%d\n%d\n", x, y, z);
		if (x * x * x + y * y * y + z * z * z == a)
		{
			printf("%d是水仙花\n", a);
		}
	}
	return 0;
}
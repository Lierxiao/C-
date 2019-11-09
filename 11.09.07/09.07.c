#define _CRT_SECURE_NO_WARNINGS
/*将三个数按从大到小输出。 */
#include <stdio.h>
int main() 
{
	int a, b, c, max;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		max = a;
		a = b;
		b = max;
	}
	if (a < c)
	{
		max = a;
		a = c;
		c = max;
	}
	if (b < c)
	{
		max = b;
		b = c;
		c = max;
	}
	printf("三个数从大到小的顺序是： % d, % d, % d", a, b, c);
	printf("\n");
	return 0;
}
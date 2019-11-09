#define _CRT_SECURE_NO_WARNINGS
//最大公约数和最小公倍数
#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	int tmp=0;
	int k;
	scanf("%d%d", &a, &b);
	k = a * b;
	while (tmp = a % b)
	{
		a = b;
		b = tmp;
	}
	printf("最大公约数=%d\n", b);
	printf("最小公倍数=%d\n", k/b);
	return 0;
}
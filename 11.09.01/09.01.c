#define _CRT_SECURE_NO_WARNINGS
//两个数组元素互换
#include <stdio.h>
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int b[10] = { 11,12,13,14,15,16,17,18,19,20 };
	int i = 0;
	int j = 0;
	int tmp;
	for (i = 0; i < 10; i++)
	{
			tmp = a[i];
			a[i] = b[i];
			b[i] = tmp;

		printf("a[i]=%d  b[i]=%d\n", a[i],b[i]);
	}
	
	return 0;
}

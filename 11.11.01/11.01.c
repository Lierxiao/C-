#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int sum = 0;
	int a = 0;
	int i = 0;
	int b = 0;
	int sn = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	for (i = 0; i < b; i++)
	{
		sum += (a * (pow(10, i)));
		sn += sum;
	}

	printf("%d", sn);
	return 0;
}
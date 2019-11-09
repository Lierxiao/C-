#define _CRT_SECURE_NO_WARNINGS
//¼ÆËã1/1-1/2+1/3-1/4+1/5 ¡­¡­ + 1/99 - 1/100 µÄÖµ 
#include <stdio.h>
#include <math.h>
int main()
{
	float i=0;
	float sum=0;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + pow(-1, i+1)*(1/i);
	}
	printf("%f", sum);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
//¼ÆËã1/1-1/2+1/3-1/4+1/5 ¡­¡­ + 1/99 - 1/100 µÄÖµ
#include <stdio.h>
int main()
{
	float  i;  
	float  s;
	float  a=0;
	float  b=0;
	for (i=1;i<=100;i+=2)
	{
		a+=(1/i);
	}
	printf("%f\n", a);
	for (i=2;i<=100;i+=2)
	{
		b+=(1/i);
	}
	printf("%f\n", b);
	s = a - b;
	printf("%f\n", s);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int line = 0;
	int i= 0;
	scanf("%d", &line);
	for(i=0; i<line; i++)
	{
		//打印一行
		//打印空格
		int j = 0;
		for(j=0; j<line-i-1; j++)
		{
			printf(" ");
		}
		//打印*
		for(j=0; j<2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下
	for(i=0; i<line-1; i++)
	{
		//打印一行
		//打印空格
		int j = 0;
		for(j=0; j<=i; j++)
		{
			printf(" ");
		}
		//打印*
		for(j=0; j<2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
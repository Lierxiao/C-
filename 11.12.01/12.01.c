#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int line = 0;
	int i= 0;
	scanf("%d", &line);
	for(i=0; i<line; i++)
	{
		//��ӡһ��
		//��ӡ�ո�
		int j = 0;
		for(j=0; j<line-i-1; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for(j=0; j<2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��
	for(i=0; i<line-1; i++)
	{
		//��ӡһ��
		//��ӡ�ո�
		int j = 0;
		for(j=0; j<=i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for(j=0; j<2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
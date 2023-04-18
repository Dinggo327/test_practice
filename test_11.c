#define  _CRT_SECURE_NO_WARNINGS 1
//计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值
#include <stdio.h>
int main()
{
	int n = 0;
	double sum = 0;
	for (n = 1; n <= 100; n++)
	{
		if (n % 2 == 0)
		{
			sum = sum + -1.0/n;
		}
		else
		{
			sum = sum + 1.0/n;
		}

	}
	printf("%lf\n", sum);
	return 0;
}
//优化
int main()
{
	int n = 0;
	int flag = 1;
	double sum = 0.0;
	for (n = 1; n <= 100; n++)
	{
		sum = sum + flag * 1.0/ n;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}


















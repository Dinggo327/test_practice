#define  _CRT_SECURE_NO_WARNINGS 1
n的阶乘
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int mul = 1;

	scanf("%d", &n);
	for (m = 1; m <= n; m++)
	{
	       mul = mul * m;

	}
	printf("%d\n", mul);
	return 0;
}

#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int mul = 0;

	for (n = 1; n <= 9; n++)
	{
	for (i = 1; i <= n; i++)
	{
		mul = i * n;
		printf("%d*%d=%d\n",i,n, mul);
	}
	}

	return 0;
}

阶乘相加
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int mul = 1;
	int sum = 0;
	for (n = 1; n <=3; n++)
	{
		mul = 1;  //计算n的阶乘之前，把mul的初始值定为1
	    for (i = 1; i <= n; i++)
	    {
		     mul = mul * i;

	    }
		sum = sum + mul;
	}

	printf("%d\n", sum);
	return 0;
}

//优化
#include <stdio.h>
int main()
{
	int i = 0;
	//int n = 0;
	int mul = 1;
	int sum = 0;
	for (i = 1; i <= 4; i++)
	{
		mul = mul * i;
		sum = sum + mul;
	}
	printf("%d\n", sum);

	return 0;
}
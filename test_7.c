#define  _CRT_SECURE_NO_WARNINGS 1
//打印1-100之间3的倍数
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100; i+=3)
	{
		
		printf("%d ", i);
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100; i++ )
	{
		if (i % 3 == 0)
		{
		     printf("%d ", i);
		}

	}
	return 0;
}

//求两个数的最大公约数
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int max = m > n ? n : m;
	while (1)
	{
		if (m % max == 0 && n % max == 0)
		{

			printf("最大公约数是%d\n", max);
		    break;
		}
		max--;

	}
	return 0;
}

//辗转相除法
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int t = 0;
	scanf("%d%d", &m, &n);
	while ( t = m % n)
	{
		m = n;
		n = t;
		//break; // 这里不能写break
	}
	printf("最大公约数是：%d\n ", n);
	return 0;
}











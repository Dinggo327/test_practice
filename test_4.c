#define  _CRT_SECURE_NO_WARNINGS 1
//编写代码，模拟用户登录，最多三次输入密码机会
#include <stdio.h>
#include <string.h>
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password); //passwod本身就是这个数组的地址	
		if (strcmp(password, "123456") == 0)   //两个字符串比较 用strcmp
		{
			printf("登陆成功\n");
			break;  //一定要写在这里
		}
		else
			printf("密码错误\n");
		//break;
	}
	if (i == 3)
	{
		printf("登录失败\n");
	}
	return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[15];
	char str2[15];
	int ret;


	strcpy(str1, "abcdef");
	strcpy(str2, "acaaaa");

	ret = strcmp(str1, str2);

	if (ret < 0)
	{
		printf("str1 小于 str2");
	}
	else if (ret > 0)
	{
		printf("str1 大于 str2");
	}
	else
	{
		printf("str1 等于 str2");
	}

	return(0);
}





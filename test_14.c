#define  _CRT_SECURE_NO_WARNINGS 1
//交换一组数组的顺序
#include <stdio.h>
//循环的方式
int my_strlen(char* s)
{
	int count = 0;
	while(*s != '\0')  //不能用if
	{
		count++;
		s++;
	}
	return count;
}
void reverse_string(char* s)
{
	int left = 0;
	int right = my_strlen(s)-1;
	while (left < right)
	{
		char tmp = s[left];
		s[left] = s[right];
		s[right] =  tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = { "abcdef" };
	reverse_string(arr);  //reverse  交换，反转   //数组名arr是数组arr首元素的地址
	printf("%s", arr);    //fedcba
	return 0;
}

//递归的方式
int my_strlen(char* s)
{
	int count = 0;
	while (*s != '\0')  //不能用if
	{
		count++;
		s++;
	}
	return count;
}
void reverse_string(char* s)
{
	char tmp = *s;
	int len = my_strlen(s);
	*s = *(s + len - 1);  //len-1是f的下标
	*(s + len - 1) = '\0';
	if (my_strlen(s + 1) >= 2)
	{
		reverse_string(s + 1);
	}

	*(s + len - 1) = tmp;
}
int main()
{
	char arr[] = { "abcdef" };
	reverse_string(arr);  //reverse  交换，反转   //数组名arr是数组arr首元素的地址
	printf("%s", arr);    //fedcba
	return 0;
}










//这样的a打印不了
//#include <stdio.h>
//int main()
//{
//	{
//		int a = 10;
//
//	}
//	printf("%d\n", a);
//	return 0;
//}












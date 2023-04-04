#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	char arr1[] = { "hello" };
//	char arr2[] = { "*****" };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int left1 = 0;
//	int left2 = 0;
//	int right1 = sz1;
//	int right2 = sz2;
//	while (left1 <= right1)
//	{
//		arr2[left2] = arr1[left1];
//		left1++;
//		left2++;
//		arr2[right2] = arr1[right1];
//		printf("%s\n", arr2);
//	}
//	return 0;
//}  //rubbish

//ÈÃÒ»´®×Ö·ûÓÐÐò³öÏÖ
#include <stdio.h>
#include <string.h>
#include <Windows.h>
int main()
{
	char arr1[] = { "welcome to ewhiurjhfqiuhfuawu" };
	char arr2[] = { "*****************************" };
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	//int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[right] = arr1[right];
		arr2[left] = arr1[left];
		printf("%s\n", arr2);
		Sleep(100);  //Í£¶ÙÒ»Ãë
		system("cls");
		right--;
		left++;
	}
	printf("%s\n", arr2);

	return 0;
}




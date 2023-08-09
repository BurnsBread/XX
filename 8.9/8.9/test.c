#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	/*int a = -10;
//	if (a=3)
//	{
//		printf("hehe\n");
//	}*/
//
//    int age = 0;
//    scanf("%d", &age);
//	/*if (age >= 18)
//	{ 
//		printf("成年\n");
//    }
//	else
//	{ 
//		printf("未成年\n");
//     }
//	return 0;*/
//
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("寿星\n");
//
//	return 0;
//}

//int main() {
//	int num1 = 0;
//	scanf("%d", &num1);
//
//	if (0 == num1 % 2)
//	{
//		printf("不是奇数\n");
//	}
//	else
//	{
//		printf("是奇数\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int i = 0;
//	while (100 >= i)
//	{
//		if (1 == i % 2)
//	    {
//			printf("%d ",i);
//		}
//		i++;
//	}
//	return 0;
//}

/*int main()
{
	int day = 0;
	scanf("%d", &day);
	if (1 == day)
		printf("星期一");
	else if (2 == day)
		printf("星期二");
	else if (3 == day)
		printf("星期三");
	else if (4 == day)
		printf("星期四");
	else if (5 == day)
		printf("星期五");
	else if (6 == day)
		printf("星期六");
	else if (7 == day)
		printf("星期日");

	return 0;
}*/

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期日");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//     printf("\a");
//	}
//	
//
//	return 0;
//}
int main()
{
	int ch = 0;
while ((ch = getchar()) != EOF)
{
	printf("%c\n",ch);
}
return 0;
}
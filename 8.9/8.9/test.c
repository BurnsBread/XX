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
//		printf("����\n");
//    }
//	else
//	{ 
//		printf("δ����\n");
//     }
//	return 0;*/
//
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age < 100)
//		printf("����\n");
//	else
//		printf("����\n");
//
//	return 0;
//}

//int main() {
//	int num1 = 0;
//	scanf("%d", &num1);
//
//	if (0 == num1 % 2)
//	{
//		printf("��������\n");
//	}
//	else
//	{
//		printf("������\n");
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
		printf("����һ");
	else if (2 == day)
		printf("���ڶ�");
	else if (3 == day)
		printf("������");
	else if (4 == day)
		printf("������");
	else if (5 == day)
		printf("������");
	else if (6 == day)
		printf("������");
	else if (7 == day)
		printf("������");

	return 0;
}*/

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
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
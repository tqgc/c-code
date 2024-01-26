#include<stdio.h>
int main()
{
	//int age = 20;
	int age ;

	scanf_s("%d\n", &age);/*使用输入函数可以手动输入年龄大小判断年龄阶段*/
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 50)
		printf("壮年\n");
	else if (age >= 50 && age < 90)
		printf("老年\n");
	else
		printf("暮年\n");
	return 0;
}

//若要打印多条语句则需要使用代码块(用{}括起来）否则会报错，else无法识别与谁匹配

//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else
//	{
//		printf("成年\n");
//	}
//	return 0;
//}
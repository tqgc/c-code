
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d\n", &day);
//	//switch (day)
//	//{
//	//case 1:
//	//	printf("星期一\n");
//	//	break;//需要使用break跳出循环，否则会一直执行知道最后一句。
//	//case 2:
//	//	printf("星期二\n");
//	//	break;
//	//case 3:
//	//	printf("星期三\n");
//	//	break;
//	//case 4:
//	//	printf("星期四\n");
//	//	break;
//	//case 5:
//	//	printf("星期五\n");
//	//	break;
//	//case 6:
//	//	printf("星期六\n");
//	//	break;
//	//case 7:
//	//	printf("星期天\n");
//	//	break;
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	/*default:
//		printf("输入错误\n");
//		break;*///处理1—7范围之外的情况。
//	}
//	return 0;
//}

//while循环语句及continue和break的作用
// #include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;//continue跳过本次循环到while语句的判断部分，break则是直接跳出while循环。
//		printf("%d\n", i);
//		//i++;
//		
//	}
//	return 0;
//}


//putchar和getchar
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	//ctrl+z=EOF结束循环
//	//EOF-end of file
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	/*int ch = getchar;
//	putchar(ch);//putchar()相当于printf("");
//	printf("%c\n", ch);*/
//	return 0;
//}


#include<stdio.h>
int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码：》");
	scanf_s("%s", password);//输入密码存放在password数组中
	//缓冲区还剩一个'\n'
	//读取一下'\n'
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认:（Y/N):");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}

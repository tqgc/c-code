
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d\n", &day);
//	//switch (day)
//	//{
//	//case 1:
//	//	printf("����һ\n");
//	//	break;//��Ҫʹ��break����ѭ���������һֱִ��֪�����һ�䡣
//	//case 2:
//	//	printf("���ڶ�\n");
//	//	break;
//	//case 3:
//	//	printf("������\n");
//	//	break;
//	//case 4:
//	//	printf("������\n");
//	//	break;
//	//case 5:
//	//	printf("������\n");
//	//	break;
//	//case 6:
//	//	printf("������\n");
//	//	break;
//	//case 7:
//	//	printf("������\n");
//	//	break;
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	/*default:
//		printf("�������\n");
//		break;*///����1��7��Χ֮��������
//	}
//	return 0;
//}

//whileѭ����估continue��break������
// #include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;//continue��������ѭ����while�����жϲ��֣�break����ֱ������whileѭ����
//		printf("%d\n", i);
//		//i++;
//		
//	}
//	return 0;
//}


//putchar��getchar
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	//ctrl+z=EOF����ѭ��
//	//EOF-end of file
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	/*int ch = getchar;
//	putchar(ch);//putchar()�൱��printf("");
//	printf("%c\n", ch);*/
//	return 0;
//}


#include<stdio.h>
int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("���������룺��");
	scanf_s("%s", password);//������������password������
	//��������ʣһ��'\n'
	//��ȡһ��'\n'
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ��:��Y/N):");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	//int age = 20;
	int age ;

	scanf_s("%d\n", &age);/*ʹ�����뺯�������ֶ����������С�ж�����׶�*/
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 50)
		printf("׳��\n");
	else if (age >= 50 && age < 90)
		printf("����\n");
	else
		printf("ĺ��\n");
	return 0;
}

//��Ҫ��ӡ�����������Ҫʹ�ô����(��{}������������ᱨ��else�޷�ʶ����˭ƥ��

//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}�󳤶Ⱥ�����ĸ���


//~��λȡ��
// #include<stdio.h>
//int main()
//{
//	int a = 0;//4���ֽڣ�32����λ
//	int b = ~a;//b���з��ŵ�����
//	//~--����2���ƣ�λȡ��
//	//0000000000000000000000000
//	//1111111111111111111111111
//	//ԭ�롢���롢���� *����һ��������λ����ԭ��ȡ�����������뷴��+1����������*
//	//�������ڴ��д洢��ʱ�����Ƕ����Ʋ���
//	//����
//	//111111111111111111111
//	//111111111111111111110
//	//100000000000000000001 *��һ������ʾ����������1��ʾΪ������0��ʾΪ����*
//	printf("%d\n", b);//ʹ�ô�ӡ�� ���������ԭ��
//	return 0;
//}
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����Ʋ���
//��������ԭ�룬���룬�������߶���ͬ
//���������ǲ���
//-2=>100000000000000000000010-ԭ��
//    111111111111111111111101-����
//    111111111111111111111110-����



//static����������
// #include<stdio.h>
//void test()
//{
//   // int a = 1;/*���н��Ϊ5��2*/
//	static int a = 1;/*���Ϊ2 3 4 5 6*/
//	a++;
//	printf("a=%d\n", a);
//}
///*static���ξֲ�����
//�ֲ��������������ڱ䳤*/
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//     }
//	return 0;
//}

//static����ȫ�ֱ���
// #include<stdio.h>
//int main()
//{
//	extern int g_val;/*extern �����ⲿ���ŵ�*/
//	printf("g_val=%d\n", g_val);/*���Ϊg_val=2020*/
//	return 0;
//	/*����Add.cpp�и�Ϊstatic g_val����������g_val�ˡ�����static����ȫ�ֱ�����ı�ȫ�ֱ������������þ�̬��ȫ�ֱ���ֻ����ԭ�ļ��б�ʹ�ã�ʹ���޷��ٱ�����*/
//}


// extern int Add(int, int);/*�����ⲿ����������Add��Ϊ����int���͵���*/
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}



//++�͡���������
// 
// #include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a++;/*����++����ʹ�ã���++*/
//	/*ǰ��++����++��ʹ��  ++a��a=11 b=11*/
//	printf("a=%d b=%d\n", a, b);/*a=11 b=10*/
//	return 0;
//}



//����ǿ�Ʋ�����
// #include<stdio.h>
//int main()
//{
//	int a = 3.14;
//	printf("%d\n", a);/*3.14�� double���ͣ�ǿ��ת����Ҫ��3.14ǰ���ϣ�int��ǿ��ת��������*/
//	return 0;
//}


// != ���ڲ��ԡ�����ȡ� ==���ڲ��ԡ���ȡ�

//  &&��||
// #include<stdio.h>
//int main()
//{
//	/*��-��0
//	  ��-0
//	  &&-�߼��루��Ϊ���Ϊ�棩
//	  ||-�߼���ֻҪ��һ��Ϊ���Ϊ�棩*/
//	int a = 0;
//	int b = 5;
//	//int c = a && b;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

//���������� exp1?exp2:exp3��exp1Ϊ�棬��ִ��exp2������ִ��exp3
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	/*
//	if (a > b)
//		max = a;
//	else
//		max = b;*/
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}

//�±����á��������á��ͽṹ��Ա����[]��()��.��->
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//#include<stdio.h>
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4]/*[]Ϊ�±����ò�����*/
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);/*�������������ò�����*/
//	return 0;
//}


//#include<stdio.h>
//  /*#define Max 100
//  /*define�����ʶ������*/
//  //������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//  //��Ķ���
//#define MAX(x,y) (x>y?x:y)/*MAX�ᱻ�滻�ɺ����Ǹ�����*/
//int main()
//{
//	/*int a = 100;
//	/*����д��int a=Max��֮��ֻҪ����Max����ֱ�ӱ��滻��100*/
//	int a = 10;
//	int b = 20;
//	/*�����ķ�ʽ*/
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	/*��ķ�ʽ*/
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

















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
//}求长度和数组的个数


//~按位取反
// #include<stdio.h>
//int main()
//{
//	int a = 0;//4个字节，32比特位
//	int b = ~a;//b是有符号的整形
//	//~--按（2进制）位取反
//	//0000000000000000000000000
//	//1111111111111111111111111
//	//原码、反码、补码 *除第一个数符号位不变原码取反——》反码反码+1——》补码*
//	//负数在内存中存储的时候存的是二进制补码
//	//步骤
//	//111111111111111111111
//	//111111111111111111110
//	//100000000000000000001 *第一个数表示的是正负，1表示为负数，0表示为正数*
//	printf("%d\n", b);//使用打印的 是这个数的原码
//	return 0;
//}
//只要是整数，内存中存储的都是二进制补码
//整数——原码，反码，补码三者都相同
//负数——是补码
//-2=>100000000000000000000010-原码
//    111111111111111111111101-反码
//    111111111111111111111110-补码



//static函数的作用
// #include<stdio.h>
//void test()
//{
//   // int a = 1;/*运行结果为5个2*/
//	static int a = 1;/*结果为2 3 4 5 6*/
//	a++;
//	printf("a=%d\n", a);
//}
///*static修饰局部变量
//局部变量的生命周期变长*/
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

//static修饰全局变量
// #include<stdio.h>
//int main()
//{
//	extern int g_val;/*extern 声明外部符号的*/
//	printf("g_val=%d\n", g_val);/*结果为g_val=2020*/
//	return 0;
//	/*若在Add.cpp中改为static g_val则不能再引用g_val了。所以static修饰全局变量会改变全局变量的作用域，让静态的全局变量只能在原文件中被使用，使其无法再被引用*/
//}


// extern int Add(int, int);/*声明外部函数，告诉Add中为两个int类型的数*/
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}



//++和——的作用
// 
// #include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a++;/*后置++，先使用，再++*/
//	/*前置++：先++再使用  ++a则a=11 b=11*/
//	printf("a=%d b=%d\n", a, b);/*a=11 b=10*/
//	return 0;
//}



//（）强制操作符
// #include<stdio.h>
//int main()
//{
//	int a = 3.14;
//	printf("%d\n", a);/*3.14是 double类型，强制转换需要在3.14前加上（int）强制转化成整形*/
//	return 0;
//}


// != 用于测试“不想等” ==用于测试“相等”

//  &&和||
// #include<stdio.h>
//int main()
//{
//	/*真-非0
//	  假-0
//	  &&-逻辑与（都为真才为真）
//	  ||-逻辑或（只要有一个为真就为真）*/
//	int a = 0;
//	int b = 5;
//	//int c = a && b;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

//条件操作符 exp1?exp2:exp3若exp1为真，则执行exp2，否则执行exp3
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

//下标引用、函数调用、和结构成员——[]、()、.、->
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
//	//arr[4]/*[]为下标引用操作符*/
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);/*（）—函数调用操作符*/
//	return 0;
//}


//#include<stdio.h>
//  /*#define Max 100
//  /*define定义标识符常量*/
//  //函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//  //宏的定义
//#define MAX(x,y) (x>y?x:y)/*MAX会被替换成后面那个函数*/
//int main()
//{
//	/*int a = 100;
//	/*可以写成int a=Max，之后只要出现Max都会直接被替换成100*/
//	int a = 10;
//	int b = 20;
//	/*函数的方式*/
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	/*宏的方式*/
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

















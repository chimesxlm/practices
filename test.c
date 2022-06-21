#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//结构体
// char int double……
// 书-复杂对象
// 名字+身高+年龄+身份证号码……
// 如何描述复杂对象-结构体——自己创造出来的一种类型

struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};

int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	strcpy(b1.name, "C++");//strcop-string copy-字符串拷贝
	printf("%s\n", b1.name);
	/*struct Book* pb = &b1;*/
	//用pb打印书名、价格
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//另一种符号方法->
	//.		结构体变量.成员
	//->	结构体指针->成员
	/*printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d元\n", b1.price);*/
	return 0;
}


//int main()
//{
//
//	// 
//	//double d = 3.14;
//	//double* pd = &d;
//	//printf("%d\n",sizeof(pd));//32位机器-4,64-8
//	///**pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);*/
//
//	////int a = 10;//向内存申请了4个字节的空间
//	////int* p = &a;//p是一个指针变量
//	////printf("%p\n", p);
//	////printf("%p\n", &a);
//	////*p=20;//解引用操作符、间接访问操作符
//	////printf("%d\n", a);
//	return 0;
//}
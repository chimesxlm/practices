#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//�ṹ��
// char int double����
// ��-���Ӷ���
// ����+���+����+���֤���롭��
// ����������Ӷ���-�ṹ�塪���Լ����������һ������

struct Book
{
	char name[20];//C���Գ������
	short price;//55
};

int main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������",55 };
	strcpy(b1.name, "C++");//strcop-string copy-�ַ�������
	printf("%s\n", b1.name);
	/*struct Book* pb = &b1;*/
	//��pb��ӡ�������۸�
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//��һ�ַ��ŷ���->
	//.		�ṹ�����.��Ա
	//->	�ṹ��ָ��->��Ա
	/*printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);*/
	return 0;
}


//int main()
//{
//
//	// 
//	//double d = 3.14;
//	//double* pd = &d;
//	//printf("%d\n",sizeof(pd));//32λ����-4,64-8
//	///**pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);*/
//
//	////int a = 10;//���ڴ�������4���ֽڵĿռ�
//	////int* p = &a;//p��һ��ָ�����
//	////printf("%p\n", p);
//	////printf("%p\n", &a);
//	////*p=20;//�����ò���������ӷ��ʲ�����
//	////printf("%d\n", a);
//	return 0;
//}
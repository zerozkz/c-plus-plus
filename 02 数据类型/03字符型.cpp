#include <iostream>
using namespace std;

int main03()
{
	//1.�ַ��ͱ����Ĵ�����ʽ
	char ch = 'a';
	cout << ch << endl;

	//2.�ַ��ͱ�����ռ�ڴ�Ĵ�С
	cout << "char�ַ��ͱ�����ռ�ڴ�" << sizeof(char) << endl;

	//3.�ַ��ͱ����ĳ�������
	//char ch2 = "b"; �����ַ��ͱ���ʱ��Ҫ�õ�����
	//char ch3 = 'abcdef';�����ַ��ͱ�����ʱ�򣬵�������ֻ����һ���ַ�

	//4.�ַ��ͱ�����Ӧ��ASCII����
	cout << "a��ASCII��ֵ" << (int)ch << endl;

	system("pause");

	return 0;
}
#include <iostream>
using namespace std;

int main03()
{
	//1.字符型变量的创建方式
	char ch = 'a';
	cout << ch << endl;

	//2.字符型变量所占内存的大小
	cout << "char字符型变量所占内存" << sizeof(char) << endl;

	//3.字符型变量的常见错误
	//char ch2 = "b"; 创建字符型变量时候，要用单引号
	//char ch3 = 'abcdef';创建字符型变量的时候，单引号内只能有一个字符

	//4.字符型变量对应的ASCII编码
	cout << "a的ASCII码值" << (int)ch << endl;

	system("pause");

	return 0;
}
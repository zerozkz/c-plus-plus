#include<iostream>
using namespace std;
#include<string> //用C++风格字符串的时候，要包含这个头文件
int main05()
{
	//1.C风格的字符串
	//注意事项	1 char 字符串名 [] 
	//			2 等号后面 要用双引号
	char str[] = "hello world";
	cout << str << endl;

	//2.C++风格的字符串
	//需要包含一个头文件
	string str2 = "hello world2";
	cout << str2 << endl;

	system("pause");

	return 0;
}
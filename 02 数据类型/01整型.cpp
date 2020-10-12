#include <iostream>
using namespace std;

int main01()
{
//整型
	/*可以利用sizeof求出数据类型占用的内存大小
	  语法：sizeof(数据类型/变量)*/

	//1.短整型 2字节
	short num1 = 10;
	cout << num1 << endl;
	cout << "short占用的内存" << sizeof(short) << endl;
	//2.整型（系统默认使用）  4字节
	int num2 = 10;
	cout << num2 << endl;
	cout << "short占用的内存" << sizeof(num2) << endl;
	//3.长整型  Windows为4字节；linux为4字节（32位），8字节（64位）
	long num3 = 10;
	cout << num3 << endl;
	cout << "short占用的内存" << sizeof(long) << endl;
	//4.长长整型 8字节
	long long num4 = 10;
	cout << num4 << endl;
	cout << "short占用的内存" << sizeof(long long) << endl;

	system("pause");

	return 0;
}
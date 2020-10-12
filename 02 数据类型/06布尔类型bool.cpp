#include<iostream>
using namespace std;

int main06()
{
	//1.创建bool数据类型
	//本质上 1代表真 0代表假
	bool flag = true;
	cout << flag << endl;


	//2.查看bool类型所占内存空间
	cout << "bool类型占用的内存空间" << sizeof(bool) << endl;
	system("pause");

	return 0;
}
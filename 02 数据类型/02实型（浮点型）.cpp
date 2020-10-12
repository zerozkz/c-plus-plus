#include <iostream>
using namespace std;

int main02()
{
	//1.单精度 float
	//2.双精度 double
	//默认情况下，输出情况下，显示出6位有效数字
	float f1 = 3.1415926f;//默认为double类型，如果是float类型需要加f;
	cout << "fl=" << f1 << endl;

	double d1 = 3.1415926;
	cout << "dl=" << f1 << endl;
	
	//统计float和double占用的数据内存空间
	cout << "float占用的数据类型大小为：" << sizeof(float) << endl;
	cout << "double占用的数据类型大小为：" << sizeof(double) << endl;

	//科学计数法
	float f2 = 3e2; // 3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2; //3*10^-2
	cout << "f3=" << f3 << endl;

	system("pause");

	return 0;
}
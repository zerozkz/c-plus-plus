#include <iostream>
using namespace std;

int main02()
{
	//1.������ float
	//2.˫���� double
	//Ĭ������£��������£���ʾ��6λ��Ч����
	float f1 = 3.1415926f;//Ĭ��Ϊdouble���ͣ������float������Ҫ��f;
	cout << "fl=" << f1 << endl;

	double d1 = 3.1415926;
	cout << "dl=" << f1 << endl;
	
	//ͳ��float��doubleռ�õ������ڴ�ռ�
	cout << "floatռ�õ��������ʹ�СΪ��" << sizeof(float) << endl;
	cout << "doubleռ�õ��������ʹ�СΪ��" << sizeof(double) << endl;

	//��ѧ������
	float f2 = 3e2; // 3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2; //3*10^-2
	cout << "f3=" << f3 << endl;

	system("pause");

	return 0;
}
#include <iostream>
using namespace std;

int main01()
{
//����
	/*��������sizeof�����������ռ�õ��ڴ��С
	  �﷨��sizeof(��������/����)*/

	//1.������ 2�ֽ�
	short num1 = 10;
	cout << num1 << endl;
	cout << "shortռ�õ��ڴ�" << sizeof(short) << endl;
	//2.���ͣ�ϵͳĬ��ʹ�ã�  4�ֽ�
	int num2 = 10;
	cout << num2 << endl;
	cout << "shortռ�õ��ڴ�" << sizeof(num2) << endl;
	//3.������  WindowsΪ4�ֽڣ�linuxΪ4�ֽڣ�32λ����8�ֽڣ�64λ��
	long num3 = 10;
	cout << num3 << endl;
	cout << "shortռ�õ��ڴ�" << sizeof(long) << endl;
	//4.�������� 8�ֽ�
	long long num4 = 10;
	cout << num4 << endl;
	cout << "shortռ�õ��ڴ�" << sizeof(long long) << endl;

	system("pause");

	return 0;
}
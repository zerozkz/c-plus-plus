#include<iostream>
using namespace std;
#include<string>
int main()
{
	//1.����
	int a = 0;
	cout << "������ͱ���a��ֵ��" << endl;
	cin >> a;
	cout << "���ͱ���a=" << a << endl;

	//2.������
	float f = 3.14f;
	cout << "��������ͱ���f��ֵ��" << endl;
	cin >> f;
	cout << "�����ͱ���f=" << f << endl;

	//3.�ַ���
	char ch = 'a';
	cout << "����ַ��ͱ���ch��ֵ��" << endl;
	cin >> f;
	cout << "�ַ��ͱ���ch=" << f << endl;

	//4.�ַ�����
	string str = "hello";
	cout << "����ַ���str��ֵ��" << endl;
	cin >> str;
	cout << "�ַ���str=" << str << endl;

	//5.��������
	bool flag = false;
	cout << "���bool����flag��ֵ��" << endl;
	cin >> flag;//bool���� ֻҪ�·����ֵ��������
	cout << "bool���͵�ֵΪ" << flag << endl;

	system("pause");

	return 0;
}
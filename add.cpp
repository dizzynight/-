#include"statement.h"
#include <iostream>
using namespace std;
 int text[20][20];
 int code[20][20];
 int path[20][20];
 int d;
void add1()  //���·����
{
	cout << "����ӵ�·�������Ϊ" << d + 1 << endl;
	d = d + 1;
	int c = 0;
	int f = 0;
	int g;
	for (c = 1; c <= d; c++)
	{
		if (c != d)
		{
			cout << "������·����" << c << "��·����" << d << "֮��ľ���" << endl;
			cin >> g;
			code[c][d] = g;
		}
	}
	for (f = 1; f <= d; f++)
	{
		if (f != d)
		{
			code[d][f] = code[f][d];
		}
	}
}
void add2() //��ӱ�
{
	cout << "��������Ҫ��ӵı�" << endl;
	int c;
	int f;
	int g;
	cin >> c;
	cin >> f;
	cout << "������ߵĳ���" << endl;
	cin >> g;
	code[c][f] = g;
	code[f][c] = g;
}
#include"statement.h"
#include <iostream>
using namespace std;

void delete1()//ɾ��·����
{
	int c = 0;
	int f = 0;
	cout << "��������Ҫɾ����·����" << endl;
	int b;
	cin >> b;
	for (c = 1; c <= d; c++)
		for (f = 1; f <= d; f++)
		{
			code[c][b] = 999;
			code[b][f] = 999;
		}
	build();
}
void delete2()//ɾ����
{
	cout << "��������Ҫɾ��������·����֮��ı�" << endl;
	int g;
	int h;
	cin >> g;
	cin >> h;
	code[g][h] = 999;
	code[h][g] = 999;
	build();
}
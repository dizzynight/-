#include"statement.h"
#include <iostream>
using namespace std;
 int text[20][20];
 int code[20][20];
 int path[20][20];
 int d;
void add1()  //添加路由器
{
	cout << "您添加的路由器序号为" << d + 1 << endl;
	d = d + 1;
	int c = 0;
	int f = 0;
	int g;
	for (c = 1; c <= d; c++)
	{
		if (c != d)
		{
			cout << "请输入路由器" << c << "到路由器" << d << "之间的距离" << endl;
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
void add2() //添加边
{
	cout << "请输入你要添加的边" << endl;
	int c;
	int f;
	int g;
	cin >> c;
	cin >> f;
	cout << "请输入边的长度" << endl;
	cin >> g;
	code[c][f] = g;
	code[f][c] = g;
}
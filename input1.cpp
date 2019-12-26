#include"statement.h"
#include <iostream>
using namespace std;

void input1() //键盘输入
{
	int k = 0, i = 0, j = 0;

	for (i = 0; i < 20; i++)
		for (k = 0; k < 20; k++)
		{
			code[i][k] = 999;
			path[i][k] = 0;
		}
	int f;
	int c = 1;
	int a = 1;
	int e = 1;
	for (int c = 1; c <= d; c++)
		for (int a = 1; a <= d; a++)
		{
			if (c > a)
			{
				continue;
			}
			if (a != c)
			{
				cout << "请输入路由器" << c << "到路由器" << a << "的距离若两个路由器无法直达则距离为999" << endl;
				cin >> f;
				code[c][a] = f;
			}
			else continue;
		}
	for (int c = 1; c <= d; c++)
		for (int a = 1; a <= d; a++)
		{
			if (code[c][a] >= code[a][c])
			{
				code[c][a] = code[a][c];
			}
			else code[a][c] = code[c][a];
			if (code[c][a] != code[a][c])
			{
				cout << "错误" << endl;
					exit(0);
			}
		}
	build();
}
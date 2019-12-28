#include"statement.h"
#include <iostream>
using namespace std;

void delete1()//删除路由器
{
	int c = 0;
	int f = 0;
	cout << "请输入你要删除的路由器" << endl;
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
void delete2()//删除边
{
	cout << "请输入你要删除的两个路由器之间的边" << endl;
	int g;
	int h;
	cin >> g;
	cin >> h;
	code[g][h] = 999;
	code[h][g] = 999;
	build();
}
#include"statement.h"
#include <iostream>
#include<sstream>
#include<string>
#include<stdio.h>
using namespace std;
void refer()   //查询某个路由器的路由表
{
	stringstream st;
	int o[20];
	build();
	cout << "请输入你想要求的路由器的路由表" << endl;
	int t;
	int l;
	cin >> t;
	int z;
	for (z = 1; z <= d; z++)
	{
		if (code[t][z] != 999)
		{
			break; 
		}	
	}
	int p = 0;
	if (z != d+1&&z<=d+1&&t<=d)
	{
		for (z = 1; z <= d; z++)
		{

			for (int c = 1; c <= d; c++)
			{
				
				l = 0;
				for (int f = 1; f <= d; f++)
				{
					if (code[c][f] == 999)
					{
						l = l + 1;
					}
					if (l == d)
					{
						o[p] = c;
						p = p + 1;
					}
				}
			}
			int m = 0;
			for (p = 0; p <= d; p++)
			{
				if (z == o[p])
				{
					m = m + 1;
				}
			}
			if (m != 1)
			{
				if (z != t)
				{
					if (text[t][z] < 999)
					{
						cout << "目的路由器为" << "    " << z << "    ";
						cout << "最短距离为" << "    ";
						cout << text[t][z] << "    ";
						cout << "下一跳路由器为" << "    ";
						cout << path[t][z] << endl;
					}
					else {
						cout << "路由器" << t << "无法到达路由器" << z << endl;
					}
				}
				else {
					cout << "目的路由器为" << "    " << z << "    ";
					cout << "最短距离为" << "    ";
					cout << "0" << "    ";
					cout << "下一跳路由器为" << "    ";
					cout << z << endl;
				}
			}
		}
	}
	else cout << "该路由器不存在" << endl;
}
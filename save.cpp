#include"statement.h"
#include <iostream>
#include<fstream>
using namespace std;
void fileEmpty(const string fileName)//清空文件内容
{
	fstream file(fileName, ios::out);
}
void save()    //保存输入信息在文件中
{
	int k = 0, i = 0;
	fileEmpty("text.txt");
	ofstream out("text.txt", ios::app);//app表示每次操作前均定位到文件末尾
	if (out.fail())
	{
		cout << "error\n";
	}
	out <<"路由器的总数为"<< endl<<d << endl;
	for (i = 1; i <=d ; i++)
		for (k = 1; k <= d; k++)
		{
			if (k != i)
			{
				out << "路由器" << i << "到路由器" << k << "的边的长度为" << endl << code[i][k] << endl;
			}
			else continue;
		}
	out.close();
}
void save1()    //保存路由表在文件中
{
	int k = 0, i = 0;
	fileEmpty("text1.txt");
	ofstream out("text1.txt", ios::app);//app表示每次操作前均定位到文件末尾
	if (out.fail())
	{
		cout << "error\n";
	}
	int z;
	for (int t = 1; t <= d; t++)
	{
		out << "路由器" << t << "的路由表为:" << endl;
		for (z = 1; z <= d; z++)
		{
			if (z != t)
			{
				if (text[t][z] < 999)
				{
					out << "路由器" << t << "到路由器" << z << "的距离为" << "    ";
					out << text[t][z] << "    ";
					out << "下一跳路由器为" << "    ";
					out << path[t][z] << endl;
				}
				else {
					out << "路由器" << t << "无法到达路由器" << z << endl;
				}
			}
		}
	}
	out.close();
}
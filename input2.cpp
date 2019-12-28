#include"statement.h"
#include <iostream>
#include<fstream>
#include<sstream>
using namespace std;
void input2() //文件输入
{
	int a;
	string b;
	ifstream fin("text.txt");
	int e[200];
	stringstream ss;
	for (a = 1; a <= 2; a++)
	{
		getline(fin,b);
		if (a == 2)
		{
			ss << b;
			ss>>d;
		}
	}
	for (a = 1; a <= (d-1)*2*d; a++)
	{
		getline(fin, b);
		if (a% 2 == 0)
		{
			e[a]=atoi(b.c_str());
		}
	}
	int c = 2;
	for (int i = 0; i < 11; i++)
		for (int k = 0; k < 11; k++)
		{
			code[i][k] = 999;
			path[i][k] = 0;
		}
	for (int i = 1; i <= d; i++)
		for (int k = 1; k <= d; k++)
		{
			if (k != i)
			{
				code[i][k] = e[c];
				c = c + 2;
			}
		}
	build();
}
void input3() //文件输入
{
	int a;
	string b;
	ifstream fin("text2.txt");
	int e[200];
	stringstream ss;
	for (a = 1; a <= 2; a++)
	{
		getline(fin, b);
		if (a == 2)
		{
			ss << b;
			ss >> d;
		}
	}
	for (a = 1; a <= (d - 1) * 2 * d; a++)
	{
		getline(fin, b);
		if (a % 2 == 0)
		{
			e[a] = atoi(b.c_str());
		}
	}
	int c = 2;
	for (int i = 0; i < 11; i++)
		for (int k = 0; k < 11; k++)
		{
			code[i][k] = 999;
			path[i][k] = 0;
		}
	for (int i = 1; i <= d; i++)
		for (int k = 1; k <= d; k++)
		{
			if (k != i)
			{
				code[i][k] = e[c];
				c = c + 2;
			}
		}
	build();
}
#include"statement.h"
#include <iostream>
#include<sstream>
#include<string>
#include<stdio.h>
using namespace std;
void refer()   //��ѯĳ��·������·�ɱ�
{
	stringstream st;
	int o[20];
	build();
	cout << "����������Ҫ���·������·�ɱ�" << endl;
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
						cout << "Ŀ��·����Ϊ" << "    " << z << "    ";
						cout << "��̾���Ϊ" << "    ";
						cout << text[t][z] << "    ";
						cout << "��һ��·����Ϊ" << "    ";
						cout << path[t][z] << endl;
					}
					else {
						cout << "·����" << t << "�޷�����·����" << z << endl;
					}
				}
				else {
					cout << "Ŀ��·����Ϊ" << "    " << z << "    ";
					cout << "��̾���Ϊ" << "    ";
					cout << "0" << "    ";
					cout << "��һ��·����Ϊ" << "    ";
					cout << z << endl;
				}
			}
		}
	}
	else cout << "��·����������" << endl;
}
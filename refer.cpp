#include"statement.h"
#include <iostream>
#include<sstream>
#include<string>
#include<stdio.h>
using namespace std;
void refer()   //��ѯĳ��·������·�ɱ�
{
	stringstream st;

	build();
	cout << "����������Ҫ���·������·�ɱ�" << endl;
	int t;
	cin >> t;
	int z;
	for (z = 1; z <= d; z++)
	{
		if (code[t][z] != 999)
		{
			cout << z<<endl;
			break;
		}	
	}
	if (z != d+1)
	{
		for (z = 1; z <= d; z++)
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
	else cout << "��·����������" << endl;
}
#include"statement.h"
#include <iostream>
#include<fstream>
using namespace std;
void fileEmpty(const string fileName)//����ļ�����
{
	fstream file(fileName, ios::out);
}
void save()    //����������Ϣ���ļ���
{
	int k = 0, i = 0;
	fileEmpty("text.txt");
	ofstream out("text.txt", ios::app);//app��ʾÿ�β���ǰ����λ���ļ�ĩβ
	if (out.fail())
	{
		cout << "error\n";
	}
	out <<"·����������Ϊ"<< endl<<d << endl;
	for (i = 1; i <=d ; i++)
		for (k = 1; k <= d; k++)
		{
			if (k != i)
			{
				out << "·����" << i << "��·����" << k << "�ıߵĳ���Ϊ" << endl << code[i][k] << endl;
			}
			else continue;
		}
	out.close();
}
void save1()    //����·�ɱ����ļ���
{
	int k = 0, i = 0;
	fileEmpty("text1.txt");
	ofstream out("text1.txt", ios::app);//app��ʾÿ�β���ǰ����λ���ļ�ĩβ
	if (out.fail())
	{
		cout << "error\n";
	}
	int z;
	for (int t = 1; t <= d; t++)
	{
		out << "·����" << t << "��·�ɱ�Ϊ:" << endl;
		for (z = 1; z <= d; z++)
		{
			if (z != t)
			{
				if (text[t][z] < 999)
				{
					out << "·����" << t << "��·����" << z << "�ľ���Ϊ" << "    ";
					out << text[t][z] << "    ";
					out << "��һ��·����Ϊ" << "    ";
					out << path[t][z] << endl;
				}
				else {
					out << "·����" << t << "�޷�����·����" << z << endl;
				}
			}
		}
	}
	out.close();
}
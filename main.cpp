﻿#include"statement.h"
#include <iostream>
using namespace std;

int main()
{
	int c;
	while (true)
	{
		cout << "                 " << "********************1.信息输入**************************" << endl;
		cout << "                 " << "********************2.输出路由表************************" << endl;
		cout << "                 " << "********************3.删除某一个路由器******************" << endl;
		cout << "                 " << "********************4.删除某两个路由器之间的边**********" << endl;
		cout << "                 " << "********************5.添加一个路由器********************" << endl;
		cout << "                 " << "********************6.添加一条边************************" << endl;
		cout << "                 " << "********************7.信息保存 *************************" << endl;
		cout << "                 " << "********************8.文件读取 *************************" << endl;
		cout << "                 " << "********************9.路由表保存 ***********************" << endl;
		cout << "                 " << "********************10.退出*****************************" << endl;

		cin >> c;
		switch (c)
		{
		case 1:
			cout << "请输入路由器的个数" << endl;
			cin >> d;
			input1();
			break;
		case 2:
			refer();
			break;
		case 3:
			delete1();
			break;
		case 4:
			delete2();
			break;
		case 5:
			add1();
			break;
		case 6:
			add2();
			break;
		case 7:
			save();
			break;
		case 8:
			input2();
			break;
		case 9:
			save1();
			break;
		case 10:
			exit(0);
		default:
			exit(0);
		}
	}
}
#include"statement.h"
#include <iostream>
using namespace std;

void build() //路由表构建
{
	int k = 0, i = 0, j = 0;
	for (i = 0; i < 20; i++)
		for (k = 0; k < 20; k++)
		{
			text[i][k] = code[i][k];
			path[i][k] = k;
		}
	for (k = 1; k <= d; k++)
		for (i = 1; i <= d; i++)
			for (j = 1; j <= d; j++)
			{
				if (text[i][j] > (text[i][k] + text[k][j]))
				{
					text[i][j] = (text[i][k] + text[k][j]);
					path[i][j] = path[i][k];
				}
			}
}
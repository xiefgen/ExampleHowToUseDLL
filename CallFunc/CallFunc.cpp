// CallFunc.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#include "../Function/AddClass.h"
int main()
{
	AddClass a;
	int Tmp = a.Add(1, 2);
	cout << Tmp << endl;
	system("pause");
    return 0;
}


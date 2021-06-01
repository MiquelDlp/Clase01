// ConsoleApplication21.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

int main()
{
	int a, i=0;
	cout << "Ingrese su numero: ";
	cin >> a;
	for (i = 0; i < 12; i++)
	{
		int b = i + 1;
		cout << a << "x" << b << "=" << a*b << "\n";
	}
	i = 0;
	while (i<12)
	{
		int b = i + 1;
		cout << a << "x" << b << "=" << a*b << "\n";
		i++;
	}
	i = 0;
	do
	{
		int b = i + 1;
		cout << a << "x" << b << "=" << a*b << "\n";
		i++;
	} while (i<12);

	getch();
    return 0;
}

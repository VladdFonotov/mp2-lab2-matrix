#include <iostream>
#include "utmatrix.h"


void main()
{
	try {
		
		TMatrix<int> a(5), b(5), c(5);
		int i, j;

		setlocale(LC_ALL, "Russian");
		cout << "������������ �������� ��������� ������������� ����������� ������" << endl;
		for (i = 0; i < 5; i++)
			for (j = i; j < 5; j++)
			{
				a[i][j] = i * 10 + j;
				b[i][j] = (i * 10 + j) * 100;
			}
		c = a + b;
		cout << "Matrix a = " << endl << a << endl;
		cout << "Matrix b = " << endl << b << endl;
		cout << "Matrix c = a + b" << endl << c << endl;
		
	}
	
	catch (char* e)
	{
		cout << e<<endl;
	}
  system("pause");
}


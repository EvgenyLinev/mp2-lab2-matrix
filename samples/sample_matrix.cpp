// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
  TMatrix<int> a(5), b(5), c(5);
  int i, j;

  setlocale(LC_ALL, "Russian");
  cout << "������������ �������� ��������� ������������� ����������� ������" << endl;
  cout << "������� ������ ������:" << endl;
  int n;
  cin >> n;
  TMatrix <int> A(n), B(n);
  cout << "�������� ������� �:" << endl;
  cin >> A;
  cout << endl;
  cout << "������� ������� B:" << endl;
  cin >> B;
  cout << endl;
  cout << "1.�������� ������" << endl;
  cout << "2.��������� ������� B �� ������� A (A-B)" << endl;
  cout << "3.��������� ������� A �� ������� B (B-A)" << endl;
  int k;
  cout << endl;
  cin >> k;
  cout << endl;
  switch (k)
  {
  case 1:
  {
	  cout << "A+B=" << endl << endl << A + B << endl;
	  break;
  }
  case 2:
  {
	  cout << "A-B=" << endl << endl << A - B << endl;
	  break;
  }
  case 3:
  {
	  cout << "B-A=" << endl << endl << B - A << endl;
	  break;
  }
  }
}
//---------------------------------------------------------------------------

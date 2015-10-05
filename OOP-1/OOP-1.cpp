// OOP-1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Vector.h"
#include <iostream>
int main()
{
	CMyVector *v = new CMyVector[NUM_VEC];

	CMyVector vtest;
	vtest.print();
	CMyVector v1(10, 10, 10);
	CMyVector vtest2(v1);
	vtest2.print();
	std::cout << std::endl;	
	CMyVector v2(2, 2, 2);
	CMyVector v3(5, 5, 5);
	CMyVector v4(3, 3, 3);
	v1.V1_plus_V2(v2);//12.12.12
	v1.V1_minus_V2(v3);//7.7.7
	v2.V1_scal_V2(v2);//12
	v1.V1_const(2);//14.14.14
	v1.get(2);//14
	v1.set(2, 42);//
	v1.get(2);//42
	v1.print();
	system("pause");
	return 0;
}
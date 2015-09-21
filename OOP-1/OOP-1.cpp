// OOP-1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Vector.h"
#include <iostream>
int main()
{
	CMyVector *v = new CMyVector[NUM_VEC];
	//CMyVector v[NUM_VEC];
	CMyVector vtest;
	vtest.print();
	std::cout << std::endl;
	vtest.~CMyVector();
	

	//CMyVector vtest2(vtest);
	CMyVector v1(1, 4, 9);
	CMyVector vtest2(v1);
	vtest2.print();
	std::cout << std::endl;
	vtest2.~CMyVector();
	CMyVector v2(2, 3, 8);
	CMyVector v3(3, 2, 7);
	CMyVector v4(4, 1, 6);
	CMyVector v5(5, 1, 5);
	CMyVector v6(6, 2, 4);
	CMyVector v7(7, 3, 3);
	CMyVector v8(8, 0, 0);
	CMyVector v9(9, 5, 3);
	CMyVector v10(9, 0, 0);
	v[0] = v1;
	v[1] = v2;
	v[2] = v3;
	v[3] = v4;
	v[4] = v5;
	v[5] = v6;
	v[6] = v7;
	v[7] = v8;
	v[8] = v9;
	v[9] = v10;

	v1.V1_plus_V2(v2);
	v1.V1_minus_V2(v2);
	v1.V1_scal_V2(v2);
	v[6].V1_const(2);
	v[1].V1_angle_V2(v3);
	v[1].V1_angle_V2(v4);
	v[1].V1_angle_V2(v5);
	//особенность - показаны расчеты
	v8.V1_angle_orthogonality_V2(v9);
	v9.V1_angle_orthogonality_V2(v10);
	v10.V1_angle_orthogonality_V2(v8);
	//особенность - показаны расчеты
	v8.V1_angle_collinearity_V2(v9);
	v9.V1_angle_collinearity_V2(v9);
	v10.V1_angle_collinearity_V2(v10);
	v8.Check_V1_To_VN(v9);

	std::cout << std::endl << v1.SUMM() << std::endl;
	v[0].Check_SUMM(v);
	v1.get(2);
	v1.set(2, 42);
	v1.get(2);
	v1.print();
	v1.~CMyVector();
	v1.print();
	system("pause");
	return 0; 
}
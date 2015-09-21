#include "stdafx.h"
#include "Vector.h"
#include "math.h"
#include <iostream>
#define TEST 1


CMyVector::CMyVector(const CMyVector &v)
{
	int size = SIZE;
	m_vector = new int[size];

	m_vector[0] = v.m_vector[0];
	m_vector[1] = v.m_vector[1];
	m_vector[2] = v.m_vector[2];
}
CMyVector::CMyVector(int x, int y, int z)
{

	int size = SIZE;
	m_vector = new int[size];
	m_vector[0] = x;
	m_vector[1] = y;
	m_vector[2] = z;
}
CMyVector::~CMyVector(void) { delete[] m_vector; }
void CMyVector::print(void)
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "[" << m_vector[i] << "] ";
	}
}
int CMyVector::V1_plus_V2(CMyVector &v2)
{
	int s = 0;
	CMyVector v3(1,2,3);
	CMyVector v1(1, 2, 3);
	int yyy = v3.m_vector[2];
	for (int i = 0; i < SIZE; i++)
	{
		v1.m_vector[i] = m_vector[i];
	s = m_vector[i] + v2.m_vector[i];
	v3.m_vector[i] = s;

	}
	std::cout << "Summ: "; v1.print(); std::cout << "+ "; v2.print();
	std::cout << std::endl;
	std::cout << "Result: ";
	v3.print();
	std::cout << std::endl;

	return 0;
}
int CMyVector::V1_minus_V2(CMyVector &v2)
{
	int s = 0;
	CMyVector v3(1, 2, 3);
	CMyVector v1(1, 2, 3);
	int yyy = v3.m_vector[2];
	for (int i = 0; i < SIZE; i++)
	{
		v1.m_vector[i] = m_vector[i];
		s = m_vector[i] - v2.m_vector[i];
		v3.m_vector[i] = s;
	}
	std::cout << "Minus: "; v1.print(); std::cout << "- "; v2.print();
	std::cout << std::endl;
	std::cout << "Result: ";v3.print();
	std::cout << std::endl;
	return 0;
}
 int CMyVector::V1_module(void)
{
	int s = 0;
	for (int i = 0; i < SIZE; i++)
	{
		s += m_vector[i] * m_vector[i];
	}
	s = sqrt(s);
	return s;
}
 int CMyVector::V1_scal_V2(CMyVector &v2)//
 {
	 int s = 0;
	 CMyVector v3(1, 2, 3);
	 CMyVector v1(1, 2, 3);
	 for (int i = 0; i < SIZE; i++)
	 {
		 s += m_vector[i] * v2.m_vector[i];
	 }
	 std::cout <<  "Scal: "; v1.print(); std::cout << "* "; v2.print();
	 std::cout << std::endl;
	 std::cout << "Result: "<<s; 
	 std::cout << std::endl;
	 return s;
 }
 float CMyVector::V1_angle_V2(CMyVector &v2)//A, B
 {
	 CMyVector v1(1, 2, 3);
	 for (int i = 0; i < SIZE; i++)
	 {
		 v1.m_vector[i] = m_vector[i];
	 }
	 int a_mod_v = v1.V1_module();//A
	 int b_mod_v = v2.V1_module();//B
	 int Cos_Alpha = v1.V1_scal_V2(v2) / (a_mod_v*b_mod_v);
	 std::cout << "Angle between: "; v1.print(); std::cout << "and "; v2.print();
	 std::cout << std::endl;
	 std::cout << "Result Cos Alpha: " << Cos_Alpha ;
	 std::cout << std::endl;
	 return Cos_Alpha;
 }
int CMyVector::V1_const(int k)
 {
	 int s = 0;
	 CMyVector v3(1, 2, 3);
	 CMyVector v1(1, 2, 3);
	 for (int i = 0; i < SIZE; i++)
	 {
		 v1.m_vector[i] = m_vector[i];
		 s = m_vector[i]*k;
		 v3.m_vector[i] = s;
	 }
	 std::cout << "Const: "; v1.print(); std::cout << "* "<<k;
	 std::cout << std::endl;
	 std::cout << "Result: "; v3.print();
	 std::cout << std::endl;
	 return s;
 }
bool  CMyVector::V1_angle_orthogonality_V2(CMyVector &v2)
 {
	bool s = 0;
	CMyVector v1(1, 2, 3);
	for (int i = 0; i < SIZE; i++)
	{
		v1.m_vector[i] = m_vector[i];
	}
	 if (v1.V1_angle_V2(v2) == 1)
	 { 
		 std::cout << "Vectors: "; v1.print(); std::cout << "and "; v1.print();
		 std::cout << "V1 and V2 has collinear";
		 std::cout << std::endl; 
		 s= 1; 
	 }
	 else 
	 { 
		 std::cout << "Vectors: "; v1.print(); std::cout << "and "; v1.print();
		 std::cout << "V1 and V2 has not collinear";
		 std::cout << std::endl;
		 s= 0; 
	 };
	 return s;
 }
 bool  CMyVector::V1_angle_collinearity_V2(CMyVector &v2)
 {
	 bool s = 0;
	 CMyVector v1(1, 2, 3);
	 for (int i = 0; i < SIZE; i++)
	{
		v1.m_vector[i] = m_vector[i];
	}
	 if (v1.V1_angle_V2(v2) == 0)
	{
		 std::cout << "Vectors: "; v1.print(); std::cout << "and "; v1.print();
		 std::cout << "V1 and V2 has orthogonal";
		 std::cout << std::endl;
		 s = 1;
	}
	else 
	{
		std::cout << "Vectors: "; v1.print(); std::cout << "and "; v1.print();
		std::cout << "V1 and V2 has not orthogonal";
		std::cout << std::endl;
	};
	 return s;
 }
 int CMyVector::Check_V1_To_VN(CMyVector &v2)
 {
	 CMyVector v1(1, 2, 3);
	 for (int i = 0; i < SIZE; i++)
	 {
		 v1.m_vector[i] = m_vector[i];
	 }
	 std::cout << std::endl;
	 std::cout << "Check:" << std::endl;
	 v1.V1_angle_orthogonality_V2(v2);
	 v1.V1_angle_collinearity_V2(v2);

	 return 0;
 }
 int CMyVector::SUMM(void)
 {
	 int s = 0;
	 for (int i = 0; i < SIZE; i++)
	 {
		 s += m_vector[i];
	 }
	 return s;
 }
 void CMyVector::Check_SUMM(CMyVector *v)
 {
	 int chest_x = 0, chest_y = 0, x = 0, y = INT_MAX;
	 CMyVector v1(1, 2, 3);
	 for (int i = 0; i < SIZE; i++)
	 {
		 v[0].m_vector[i] = m_vector[i];
		 //костыль или трюк?
	 }
	 for (int i = 0; i < NUM_VEC; i++)
	 {
		 if (v[i].SUMM()>x)
		 {
			 chest_x = i;
			 x = v[i].SUMM();
		 }
		 if (v[i].SUMM()<y)
		 {
			 chest_y = i;
			 y = v[i].SUMM();
		 }
	 }
	 std::cout << "The Max summ: " << v[chest_x].SUMM() << " from number " << chest_x<<" : "; 
	 v[chest_x].print();
	 std::cout << std::endl;
	 std::cout << "The Min summ: " << v[chest_y].SUMM() << " from number " << chest_y<<" : "; 
	 v[chest_y].print();
	 std::cout << std::endl;
	 return;
 }
 int	CMyVector::get(int x)
 {
	 std::cout <<  m_vector[x]<<std::endl;
	 return m_vector[x];
 }
 int	CMyVector::set(int x, int y)
 {
	 m_vector[x] = y;
	 return 0;
 }

 /*
 Array::Array(void)
 {
	
	 CMyVector *Arr = new CMyVector[NUM_VEC*SIZE];

 }
 Array::~Array(void)
 {

 }*/
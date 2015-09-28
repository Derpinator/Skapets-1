#include "stdafx.h"
#include "Vector.h"
#include "math.h"
#include <iostream>
#define TEST 1


CMyVector::CMyVector(const CMyVector &v)
{
	m_vector = new int[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		this->m_vector[i] = v.m_vector[i];
	}

}
CMyVector::CMyVector(int x, int y, int z)
{
	m_vector = new int[SIZE];
	m_vector[0] = x;
	m_vector[1] = y;
	m_vector[2] = z;
}

void CMyVector::print(void)
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "[" << m_vector[i] << "] ";
	}
}
int CMyVector::V1_plus_V2(CMyVector &v2)
{
	for (int i = 0; i < SIZE; i++)
	{
		//
		this->m_vector[i] += v2.m_vector[i];
	}
	std::cout << "Result: ";
	this->print();
	std::cout << std::endl;
	v2.print();
	std::cout << std::endl;
	return 0;
}
int CMyVector::V1_minus_V2(CMyVector &v2)
{
	for (int i = 0; i < SIZE; i++)
	{
		this->m_vector[i] -= v2.m_vector[i];
	}
	std::cout << "Result: ";
	this->print();
	std::cout << std::endl;
	v2.print();
	std::cout << std::endl;
	return 0;
}
int CMyVector::V1_scal_V2(CMyVector &v2)//
{
	int s = 0;
	for (int i = 0; i < SIZE; i++)
	{
		s += this->m_vector[i] * v2.m_vector[i];
	}
	std::cout << "Result: ";

	std::cout << s << std::endl;

	std::cout << std::endl;;
	return s;
}
int CMyVector::V1_const(int k)
{
	int s = 0;
	for (int i = 0; i < SIZE; i++)
	{
		this->m_vector[i] *= k;
	}
	std::cout << "Result: ";
	this->print();
	std::cout << std::endl;
	return s;
}
int	CMyVector::get(int x)
{
	std::cout << this->m_vector[x] << std::endl;
	return m_vector[x];
}
int	CMyVector::set(int x, int y)
{
	this->m_vector[x] = y;
	return 0;
}
CMyVector::~CMyVector() {
	delete[] m_vector;
	std::cout << "Destructor";
}
#define NIL 0x00000000 //ноль для координат
#define NULL 0 //ноль для массива
#define SIZE 3 //количество координат
#define NUM_VEC 10 //максимально допустимое число векторов
class CMyVector
{
private:
	int* m_vector;
public:
	CMyVector(const int x = NIL, const int y = NIL, const int z = NIL);//вектор размера три 0.0.0
	CMyVector(const CMyVector &v);
	~CMyVector();
	int	CMyVector::V1_plus_V2(CMyVector &v1);//++
	int	CMyVector::V1_minus_V2(CMyVector &v2);//++
	int	CMyVector::V1_scal_V2(CMyVector &v2);//++
	int CMyVector::V1_const(int k);//++
	void print(void);//++
	int	CMyVector::get(int x);//++
	int	CMyVector::set(int x, int y);//++
};


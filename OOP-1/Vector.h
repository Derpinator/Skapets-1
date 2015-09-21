#define NIL 0x00000000 //ноль для координат
#define NULL 0 //ноль для массива
#define SIZE 3 //количество координат 555
#define NUM_VEC 10 //максимально допустимое число векторов
class CMyVector
{

private:
	
	int m_size;
	int* m_vector;
public:

	CMyVector(const int x = NIL, const int y = NIL, const int z = NIL);//вектор размера три 0.0.0
	CMyVector(const CMyVector &v);
	~CMyVector();


int	CMyVector::V1_plus_V2(CMyVector &v1);//++
int	CMyVector::V1_minus_V2( CMyVector &v2);//++
    int V1_module(void);//++
int	CMyVector::V1_scal_V2(CMyVector &v2);//++
int CMyVector::V1_const(int k);//++
float CMyVector::V1_angle_V2(CMyVector &v2);//++
bool  CMyVector::V1_angle_orthogonality_V2(CMyVector &v2);//++
bool  CMyVector::V1_angle_collinearity_V2(CMyVector &v2);//++
	void print(void);//++
	int CMyVector::Check_V1_To_VN(CMyVector &v2);
	int CMyVector::SUMM(void);
	void CMyVector::Check_SUMM(CMyVector *v );
	int	CMyVector::get(int x);//++
	int	CMyVector::set(int x, int y);//++
//	int sum(void);
//	int product(void);
};
/*
class Array
{
	private:
		int Arr[NUM_VEC*SIZE];
		int count = NULL; 
		int m_count = NUM_VEC;
	public:
		Array(void);
		~Array(void);
};*/
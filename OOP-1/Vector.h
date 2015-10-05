#define NIL 0x00000000 //���� ��� ���������
#define NULL 0 //���� ��� �������
#define SIZE 3 //���������� ���������
#define NUM_VEC 10 //����������� ���������� ����� ��������
class CMyVector
{
private:
	int* m_vector;
public:
	CMyVector(const int x = NIL, const int y = NIL, const int z = NIL);//������ ������� ��� 0.0.0
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


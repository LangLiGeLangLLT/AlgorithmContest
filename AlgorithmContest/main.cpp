
// �㷨������¼

using namespace std;

// int ת string
#include <string>
#include <sstream>

string IntToStr(int n)
{
	stringstream ss;
	ss << n;
	return ss.str();
}

// string ת int
#include <string>
#include <sstream>

int StrToInt(string s)
{
	int n;
	stringstream ss(s);
	ss >> n;
	return n;
}

// ������
int ReverseNum(int x)
{
	int res = 0;
	while (x)
	{
		res = res * 10 + x % 10;
		x /= 10;
	}
	return res;
}

// ��
#include <cmath>

const double PI = acos(-1.0);

// bitset
#include <bitset>

bitset<8> bitres(n); // ��ʮ���� n ת��Ϊ������ 8 λ�� bitres��
string res = bitres.to_string(); // �� bitres ת���� string ���͡�

// algorithm
#include <algorithm>

count(beg, end, val) // ����һ����������ָ�� val �����˶��ٴΡ�
lower_bound(beg, end, val) // ���Ҵ��ڵ��� val �ĵ�һ��λ�ã�����ȷ������Ϊ�������У��� sort() һ��ʹ�á�
sort(beg, end) // ����
unique(beg, end) // �������У������ڵ��ظ�Ԫ�أ�ͨ���������������С�ɾ����������һ����������ָ���ظ�Ԫ�ص�β��λ�á�
next_permutation(beg, end) // ȫ���У�bool ����ֵ��
find(beg, end, val) // ������ң����ص�����

// ��������
#include <cmath>

floor(x + 0.5)

// ȡһ������λ��
i % 10			// ��λ��
i / 10 % 10		// ʮλ��
i / 100 % 10	// ��λ��
i / 1000 % 10	// ǧλ��

i % 10			// ȡ�����һλ
i % 100			// ȡ�������λ
i % 1000		// ȡ�������λ
i % 10000		// ȡ�������λ
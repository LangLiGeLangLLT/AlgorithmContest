
// 算法竞赛记录

using namespace std;

// int 转 string
#include <string>
#include <sstream>

string IntToStr(int n)
{
	stringstream ss;
	ss << n;
	return ss.str();
}

// string 转 int
#include <string>
#include <sstream>

int StrToInt(string s)
{
	int n;
	stringstream ss(s);
	ss >> n;
	return n;
}

// 回文数
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

// π
#include <cmath>

const double PI = acos(-1.0);

// bitset
#include <bitset>

bitset<8> bitres(n); // 将十进制 n 转换为二进制 8 位的 bitres。
string res = bitres.to_string(); // 将 bitres 转换成 string 类型。

// algorithm
#include <algorithm>

count(beg, end, val) // 返回一个计数器，指出 val 出现了多少次。
lower_bound(beg, end, val) // 查找大于等于 val 的第一个位置，必须确定序列为有序序列，与 sort() 一起使用。
sort(beg, end) // 排序
unique(beg, end) // 重排序列，对相邻的重复元素，通过覆盖它们来进行“删除”，返回一个迭代器，指向不重复元素的尾后位置。
next_permutation(beg, end) // 全排列，bool 返回值。
find(beg, end, val) // 数组查找，返回迭代器

// 四舍五入
#include <cmath>

floor(x + 0.5)

// 取一个数的位数
i % 10			// 个位数
i / 10 % 10		// 十位数
i / 100 % 10	// 百位数
i / 1000 % 10	// 千位数

i % 10			// 取出最后一位
i % 100			// 取出最后两位
i % 1000		// 取出最后三位
i % 10000		// 取出最后四位
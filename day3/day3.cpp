
#include <iostream>
#include <climits>

int main()
{
	using namespace std;
	//整型

	//short;  //2字节 至少占16位
	//int;    //4字节  至少与short一样长
	//long;   //4字节  至少32位,且不短于int
	//long long;//8字节 至少64位,且不短于long
	//无符号
	//unsigned short;
	//unsigned int;
	//unsigned long;
	//unsigned long long;

	cout << sizeof(int) << endl;
	cout << sizeof(long)<<endl;
	cout << sizeof(long long)<<endl;

	int a=42;//十进制
	int a1 = 042;//八进制
	int a2 = 0x42;//十六进制

	cout << a << endl;
	cout << a1 << endl;
	cout << a2<< endl;

	//八进制和十六进制常量 默认表示合适范围的无符号数

	//用后缀明确指出常量类型
    //L或l:长整形,如100L
	//U或u 无符号数 如100U
	//LU或UL 无符号长整形
	//LL或ll longlong类型
	//LLU或uLL 无符号longlong类型

	//char类型

	//处理字符的类型 ascll,bcd,ebcdlc
	//ascll编码特点
	//大写字母是连续编码
	//小写字母是连续编码
	//数字是连续编码
	// 转义字符
	//'\n'换行
	//'\t'水平制表符
	//'\a' 表示振铃
	cout << "char类型" << endl;
	char b = 'A';
	char b2 = 'a';
	cout.put(b);
	cout.put(b2);
	cout.put('\n');
	cout.put('\a');
	cin >> b;
	b = b + 1;
	cout << b;

	//bool类型
	//表示逻辑“真” 和 “假”
	//bool的值是 true 和 false

	return 0;


}
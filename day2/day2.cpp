
//函数 返回值类型 函数名 (参数表)
//函数原型声明 告诉编译器函数的参数和返回值
#include <iostream>
#include <cmath>

void simon(int);
int stonetolb(int sts);
using namespace std;
int main(void)
{
	double area;
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "平方根是" << side << endl;

	int count;
	cin >> count;
	simon(count);

	int count2;
	cin >> count2;
	cout<<stonetolb(count2);
	return 0;
}

void simon(int n)
{
	cout << n << endl;
}

int stonetolb(int sts)
{

	return 14 * sts;
}
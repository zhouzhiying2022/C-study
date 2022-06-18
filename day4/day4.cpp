#include <iostream>

int main()
{
	using namespace std;

	//c语言定义符号常量

    #define PI 3.14;

	//c++定义
	const  double PI2=3.14;


	//浮点数 
	// c++浮点数不能精确表示
	//二进制浮点数的机内形式
	//10100*2 1001 分别保存 10100 和1101 前者称为尾数后者称为指数,范围 10的-32次方 到 10的32次方
	//浮点类型
	//float 至少32位  8位存指数 24存尾数
	//double 至少48位,且不小于float
	//long double 至少和double一样

	cout.setf(ios_base::fixed, ios_base::floatfield);
	float a=10.0/3.0;
	double b = 10.0 / 3.0;
	const float c = 1.0e6;

	cout << a << endl;
	cout << b << endl;
	cout << 10 * a << endl;
	cout << 10 * b << endl;
	cout << c << endl;

	//表示方式
	//科学计数法
	//尾数*指数
	//c++表示方法尾数E指数
	//-1.5E10 = -1.5*10的10的次数
	//34E-8 =34*10的-8次方

	//浮点常量默认是double类型
	//明确指出浮点常量的类型 float F或f long double L或l


	return 0;
}
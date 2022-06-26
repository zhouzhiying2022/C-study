#include <iostream>

int main()
{
	using namespace std;

	//算术运算符 结合性:左结合 先结算左边的运算符,再计算右边的运算符

	int a = ( 3 + 5) * 7/2 + 5;
	int b = 3 + 5  * 7 - 2;
	cout << a << endl;
	cout << b << endl;

	//类型转换
	//赋值或初始化时,如果右边的表达式计算结果类型与左边的变量类型不同:右边值被转换成左边变量类型
	//函数参数传递时:实际参数被转换成形式参数类型 
	//表达式的运算数类型不一致,有一套转换规则 float double longdouble 

	cout.setf(ios_base::fixed, ios_base::floatfield);

  //ios_base:floatfield	ios_base::fixed	使用定点计数法，如1234.5
   //ios_base::scientific	使用科学计数法，如1.2345e4


	float ff = 3;
	int ii = 3.9832;
	short ss = 10;
	double dd = ss;
	cout << ff << endl << ii << endl << ss << endl << dd << endl;


	 











	 
	














	return 0;
}
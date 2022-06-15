#include<iostream>//预处理指令 

int main()//函数名

{//函数体

	//语句
	using namespace std;//不需要用命名空间,使程序更加简洁。

	  cout << "my c++day1" << endl;//流到对象cout

	  cout << "my c++day1" << '\n';

	   //对象 流插入运算符

	  std::cout << "myc++ dady1" << endl;

	  //类型名 变量列表;
	  int charrots;//变量定义 程序运行过程中值可以变化称为变量

	  //为变量分配储存空间
	  //为遍历器检查变量使用正确的提供依据
	  //必须先定义再使用

	  //第一个字符不可以是数字,可以使用字母字符数字和下划线
	  //区分大小写
	          //运算符
	  charrots = 25;//表达式 

	 //将charrots内存单元的内容 变化成字符串"25"输出
	 // 
	 // //内存单元整数25 转换成字符串"25"输出
	 // 
	  //变量   表达式 计算表达式的值存放到变量里面

	  //优先级 表达式 运算符

	  cout << "i have " << charrots<<endl;

	  int x, y, z;

	  cin >> z;

	  x = y = z;

	  cout <<"x的值是" << x;


	return 0;
}
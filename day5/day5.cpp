#include <iostream>

int main()
{
	using namespace std;

	//��������� �����:���� �Ƚ�����ߵ������,�ټ����ұߵ������

	int a = ( 3 + 5) * 7/2 + 5;
	int b = 3 + 5  * 7 - 2;
	cout << a << endl;
	cout << b << endl;

	//����ת��
	//��ֵ���ʼ��ʱ,����ұߵı��ʽ��������������ߵı������Ͳ�ͬ:�ұ�ֵ��ת������߱�������
	//������������ʱ:ʵ�ʲ�����ת������ʽ�������� 
	//���ʽ�����������Ͳ�һ��,��һ��ת������ float double longdouble 

	cout.setf(ios_base::fixed, ios_base::floatfield);

  //ios_base:floatfield	ios_base::fixed	ʹ�ö������������1234.5
   //ios_base::scientific	ʹ�ÿ�ѧ����������1.2345e4


	float ff = 3;
	int ii = 3.9832;
	short ss = 10;
	double dd = ss;
	cout << ff << endl << ii << endl << ss << endl << dd << endl;


	 











	 
	














	return 0;
}
#include <iostream>

int main()
{
	using namespace std;

	//c���Զ�����ų���

    #define PI 3.14;

	//c++����
	const  double PI2=3.14;


	//������ 
	// c++���������ܾ�ȷ��ʾ
	//�����Ƹ������Ļ�����ʽ
	//10100*2 1001 �ֱ𱣴� 10100 ��1101 ǰ�߳�Ϊβ�����߳�Ϊָ��,��Χ 10��-32�η� �� 10��32�η�
	//��������
	//float ����32λ  8λ��ָ�� 24��β��
	//double ����48λ,�Ҳ�С��float
	//long double ���ٺ�doubleһ��

	cout.setf(ios_base::fixed, ios_base::floatfield);
	float a=10.0/3.0;
	double b = 10.0 / 3.0;
	const float c = 1.0e6;

	cout << a << endl;
	cout << b << endl;
	cout << 10 * a << endl;
	cout << 10 * b << endl;
	cout << c << endl;

	//��ʾ��ʽ
	//��ѧ������
	//β��*ָ��
	//c++��ʾ����β��Eָ��
	//-1.5E10 = -1.5*10��10�Ĵ���
	//34E-8 =34*10��-8�η�

	//���㳣��Ĭ����double����
	//��ȷָ�����㳣�������� float F��f long double L��l


	return 0;
}
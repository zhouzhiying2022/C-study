
//���� ����ֵ���� ������ (������)
//����ԭ������ ���߱����������Ĳ����ͷ���ֵ
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
	cout << "ƽ������" << side << endl;

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
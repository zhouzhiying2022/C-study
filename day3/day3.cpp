
#include <iostream>
#include <climits>

int main()
{
	using namespace std;
	//����

	//short;  //2�ֽ� ����ռ16λ
	//int;    //4�ֽ�  ������shortһ����
	//long;   //4�ֽ�  ����32λ,�Ҳ�����int
	//long long;//8�ֽ� ����64λ,�Ҳ�����long
	//�޷���
	//unsigned short;
	//unsigned int;
	//unsigned long;
	//unsigned long long;

	cout << sizeof(int) << endl;
	cout << sizeof(long)<<endl;
	cout << sizeof(long long)<<endl;

	int a=42;//ʮ����
	int a1 = 042;//�˽���
	int a2 = 0x42;//ʮ������

	cout << a << endl;
	cout << a1 << endl;
	cout << a2<< endl;

	//�˽��ƺ�ʮ�����Ƴ��� Ĭ�ϱ�ʾ���ʷ�Χ���޷�����

	//�ú�׺��ȷָ����������
    //L��l:������,��100L
	//U��u �޷����� ��100U
	//LU��UL �޷��ų�����
	//LL��ll longlong����
	//LLU��uLL �޷���longlong����

	//char����

	//�����ַ������� ascll,bcd,ebcdlc
	//ascll�����ص�
	//��д��ĸ����������
	//Сд��ĸ����������
	//��������������
	// ת���ַ�
	//'\n'����
	//'\t'ˮƽ�Ʊ��
	//'\a' ��ʾ����
	cout << "char����" << endl;
	char b = 'A';
	char b2 = 'a';
	cout.put(b);
	cout.put(b2);
	cout.put('\n');
	cout.put('\a');
	cin >> b;
	b = b + 1;
	cout << b;

	//bool����
	//��ʾ�߼����桱 �� ���١�
	//bool��ֵ�� true �� false

	return 0;


}
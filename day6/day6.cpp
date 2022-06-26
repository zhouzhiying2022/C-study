
const unsigned char allChar[63] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

void generateString(unsigned char* dest, unsigned int len);




#include <iostream>

int main()
{

	using namespace std;

	const unsigned int strlen = 20;

	unsigned char str[strlen + 1] = {};//�޷��� char��������

	generateString(str, 2);//ȡ���������ĸ

	cout << sizeof(str)<<endl;
	cout << str << endl;

}



void generateString(unsigned char* dest, const unsigned int len)
{
	unsigned int cnt, randNo;

	srand((unsigned int)time(NULL));

	for (cnt = 0; cnt < len; cnt++)
	{
		randNo = rand() % 62;
		*dest = allChar[randNo];
		dest++;
	}

	*dest = '\0';
}

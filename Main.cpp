
#include <iostream>

int N = 20;

void FindEvenOddNumbers(int Limit, bool EvenOdd)
{
	for (int a = 0; a <= Limit; a++)
	{
		if (a % 2 == EvenOdd)
			std::cout << a << " ";
	}
}

int main()
{
	//������� ������ ������/�������� ����� � 0 � �� �������
	//������ �������� - �������
	//������ �������� ���������� �����: 0 - ������, 1 - ��������
	FindEvenOddNumbers(10, 4);
	
	std::cout << "\n";

	for (int i = 0; i <= N; i++)
	{
		if (i % 2 == 0)
			std::cout << i << " ";
	}
	return 0;
}

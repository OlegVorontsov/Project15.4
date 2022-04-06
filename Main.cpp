
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
	//функция вывода четных/нечетных чисел с 0 и до предела
	//первый аргумент - передел
	//второй аргемент определяет вывод: 0 - четные, 1 - нечетные
	FindEvenOddNumbers(10, 4);
	
	std::cout << "\n";

	for (int i = 0; i <= N; i++)
	{
		if (i % 2 == 0)
			std::cout << i << " ";
	}
	return 0;
}

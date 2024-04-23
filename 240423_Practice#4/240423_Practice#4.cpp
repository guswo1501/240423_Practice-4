#include <iostream>

int main()
{
	int input;
	int output = 0;

	std::cout << "1부터 n까지의 합 구하기\n";
	std::cout << "숫자(양의 정수)를 입력하세요 : ";
	std::cin >> input;

	for (int i = 1; i <= input; i++)
	{
		output = output + i;
	}

	std::cout << "1부터 " << input << "까지의 합은 : " << output;
}
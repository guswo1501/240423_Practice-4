#include <iostream>

int main()
{
	int input;
	int output = 0;

	std::cout << "1���� n������ �� ���ϱ�\n";
	std::cout << "����(���� ����)�� �Է��ϼ��� : ";
	std::cin >> input;

	for (int i = 1; i <= input; i++)
	{
		output = output + i;
	}

	std::cout << "1���� " << input << "������ ���� : " << output;
}
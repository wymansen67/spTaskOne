#include <iostream>

int main() 
{
	setlocale(LC_ALL, "rus");
	int a, b;
	std::cout << "������� ������ �����\n";
	std::cin >> a;
	std::cout << "������� ������ �����\n";
	std::cin >> b;
	int x = a * b;
	std::cout << "���������: " << x;
}


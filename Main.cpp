#include <iostream>

int main() 
{
	setlocale(LC_ALL, "rus");
	int a, b;
	std::cout << "¬ведите первое число\n";
	std::cin >> a;
	std::cout << "¬ведите второе число\n";
	std::cin >> b;
	int x = a * b;
	std::cout << "–езультат: " << x;
}


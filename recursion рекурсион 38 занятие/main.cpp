#include <iostream>

// факториал с помощью рекурсии
unsigned long long factorial(int num) //мы прописываем число которое хотим  найти
{
	if (num == 0)
		return 1;
	return factorial(num - 1) * num; // факториал равен предыдущему факториалу минус 1 и программа решает уже его
}
// Фибоначчи
int fibonacci(int num)
{
	if (num <= 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);

}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Факториал 
	std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << std::endl;

	//Задание 1. Числа фебоначчи
	std::cout << "Введите номер числа Фебоначчи -> ";
	std::cin >> n;
	std::cout << "Число Фибоначчи №" << n << " = " << fibonacci(n) << std::endl;

	return 0;
}
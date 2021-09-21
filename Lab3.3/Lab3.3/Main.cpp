//	Main.cpp
//	Лісничук Арсен
//	Лабораторна робота №3.3
//	Варіант 13

#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, R; //Вхідні аргументи
	double y; //Вихідний аргументи
	std::cout << "R = "; std::cin >> R;
	std::cout << "x = "; std::cin >> x;

	if (x <= -R)
		y = x + R;
	else
		if (x > -R && x <= 0)
			y = sqrt(pow(R, 2) - pow(x, 2));
		else
			if (x > 0 && x <= 6)
				y = R - (R * x) / 6.;
			else
				y = x - 6;
	

	std::cout << "y = " << y << std::endl;

	return 0;
}
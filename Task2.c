#include <stdio.h>
#pragma hdrstop
#include <math.h>
#include <tchar.h>
#include <Windows.h>
#pragma argsused
int _tmain(int argc, _TCHAR* argv[])
{
	double E, x, dife, left, right = 0, u = 1; int n = 0;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Введите значение х и е через пробел: ");
	scanf("%lf %lf", &x, &E);
	left = (pow(M_E, x) + pow(M_E, -x)) / 2;
	if (E != 0)
	{
		do
		{
			n++;
			right += u;
			u *= x * x / ((2 * n - 1) * 2 * n);
			dife = left - right;
		} while (dife > fabs(E));

		printf("Левая часть равна = %f \nПравая часть равна = %f \n", left, right);
		printf("После n=%d исследуемое выражение отличается от левой части менее, чем на %f, ", n, fabs(E));
		printf("а именно на %f \n", fabs(dife));
	}
	else
	{
		if (fabs(E) == 0)
		{
			printf("Погрешность равна 0, тогда правая часть стремится к левой %f (n=бесконечность)", left);
		}
	}
	system("pause");
	return 0;
}


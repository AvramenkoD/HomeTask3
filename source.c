#include <stdio.h>
#include <locale.h>

int main()
{
	float aSide;
	float bSide;
	float perimetr;
	float square;

	setlocale(LC_ALL, "RUS");
	puts("Введите сторону А...");
	scanf("%f", &aSide);
	puts("Введите сторону В...");
	scanf("%f", &bSide);
	if(aSide < 0 || bSide < 0)
	{
		puts("Значения сторон должны быть положительными");
		return 0;
	}
	perimetr = (aSide + bSide) * 2;
	square = aSide * bSide;

	printf("У прямоугольника со сторонами %g и %g:\n", aSide, bSide);
	printf("Периметр равен (%0.1f + %0.1f) * 2 = %0.1f\n", aSide, bSide, perimetr);
	printf("Площадь равна %0.1f * %0.1f = %0.1f\n", aSide, bSide, square);

	return 0;
}
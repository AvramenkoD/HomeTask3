#include <stdio.h>
#include <locale.h>

int main()
{
	float aSide;
	float bSide;
	float perimetr;
	float square;

	setlocale(LC_ALL, "RUS");
	puts("������� ������� �...");
	scanf("%f", &aSide);
	puts("������� ������� �...");
	scanf("%f", &bSide);

	perimetr = (aSide + bSide) * 2;
	square = aSide * bSide;

	printf("� �������������� �� ��������� %g � %g:\n", aSide, bSide);
	printf("�������� ����� (%0.1f + %0.1f) * 2 = %0.1f\n", aSide, bSide, perimetr);
	printf("������� ����� %0.1f * %0.1f = %0.1f\n", aSide, bSide, square);

	return 0;
}
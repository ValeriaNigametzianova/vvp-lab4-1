#include <stdio.h>
#include <locale.h>

float perim(float a,float b)
{
	float y;
	y = (a + b) * 2;
	return y;
}
float pl(float a, float b)
{
	float y;
	y = a * b;
	return y;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, P, S;
	printf("введите сторону а: ");
	scanf_s("%f", &a);
	printf("введите сторону b: ");
	scanf_s("%f", &b);
	P = perim(a, b);
	S = pl(a, b);
	printf("%.2f\n%.2f", P, S);
	return 0;
}
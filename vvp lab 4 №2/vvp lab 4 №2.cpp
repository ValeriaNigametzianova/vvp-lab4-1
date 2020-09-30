#include<stdio.h>
#include<math.h>

int main()
{
	double d, L;
	const double pi = 3.14;
	printf("Enter d: ");
	scanf_s("%lf", &d);
	L = d * pi;
	printf("%lf", L);
	return 0;
}
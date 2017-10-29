
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float summ(float a, float b);
float difference(float a, float b);
float mult(float a, float b);
float divide(float a, float b);
//float exponentiation(float a, float b);
float _sqrt(float a);
float factorial(float n);

int main(void)
{
	printf("THIS PROGRAMM IS CALCULATOR\n");
	printf("\n");
	printf("Functions:\n");
	printf("1. +\n2. -\n3. *\n4. /\n5. ^. Example: 3^2\n6. s (sqrt). Example: 3s\n7. x!\n8. l (log). Example: 3l\n9. S (SIN). Example: 3S\n10. C (COS). Example: 3C\n");
	printf("\n");
	printf("Data input:\n");

	while (true)
	{
		float x1, x2;
		char _operator;

		scanf_s("%f", &x1); //вводим первое число
		scanf_s("%c", &_operator); // вводим оператор дейтсвия

		if (_operator == '!') // факториал
		{
			printf("%f\n", factorial(x1));
			printf("\n");
			continue;
		}
		if (_operator == 'l') // логарифм
		{
			printf("%f\n", logf(x1));
			printf("\n");
			continue;
		}
		if (_operator == 's') // корень
		{
			printf("%f\n", sqrtf(x1));
			printf("\n");
			continue;
		}
		if (_operator == 'S') // SIN
		{
			printf("%f\n", sinf(x1));
			printf("\n");
			continue;
		}
		if (_operator == 'C') // COS
		{
			printf("%.f\n", cosf(x1));
			printf("\n");
			continue;
		}

		scanf_s("%f", &x2); // вводим второе число

		switch (_operator)
		{
			case ' ':
				continue;
			break;

			case '+':
				printf("%f\n", summ(x1, x2));
				printf("\n");
			break;

			case '-':
				printf("%f\n", difference(x1, x2));
				printf("\n");
			break;

			case '*':
				printf("%f\n", mult(x1, x2));
				printf("\n");
			break;

			case '/':
				printf("%f\n", divide(x1, x2));
				printf("\n");
			break;

			case '^':
				printf("%f\n", powf(x1, x2));
				printf("\n");
			break;

		}


	}

	_getch();
	return 0;
}


float summ(float a, float b)
{
	return a + b;
}
float difference(float a, float b)
{
	return a - b;
}
float mult(float a, float b)
{
	return a*b;
}
float divide(float a, float b)
{
	return a / b;
}
/*float exponentiation(float a, float b)
{
	if (b == 0) return 1;
	if (b < 0) return exponentiation(1.0 / a, -b);
	return a * exponentiation(a, b - 1);
}*/
float _sqrt(float a)
{
	return sqrtf(a);
}
float factorial(float n) 
{
	if (n == 0 || n == 1) 
		return 1;
	else
		return n * factorial(n - 1);
}







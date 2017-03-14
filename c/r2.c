#include<stdio.h>
#include<string.h>

int main()
{
	
	double A, r, total1, total2;

printf("반지름의 길이는?");
scanf("%lf", &r);
printf("파이의 값은?(소수점 지원)");
scanf("%lf", &A);

total1 = r * 2 * A;
total2 = r * r * A;

printf("원의 둘레는? : %lf \n", total1);
printf("원의 넓이는? : %lf \n", total2);
}
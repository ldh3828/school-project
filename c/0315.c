#include <stdio.h>
int main()
{
	int a, e, f;
	double b, c, g, h;
	printf("손님은 몇명입니까");
	scanf("%d", &a);
	printf("음식을 몇인분 시키실껍니까(한가지 음식기준)");
	scanf("%d", &e);
	printf("한가지 음식의값은?");
	scanf("%d", &f);
	if (a>=4)
	{
		printf("음식가격은 10프로 할인됩니다");
		b = (e * f) / 10;
		g = (e * f) - b;
		printf("총 가격은 %lf \n", g);
	}
	else {
		c = a * f * e;

		printf("음식가격값은 %lf \n", c);


	}
}
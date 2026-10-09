#include <locale.h>
#include <stdio.h>

main1();

main2();

main3();

int main1()
{
	setlocale(LC_CTYPE, "RUS");
	printf("1\n2\n3\n"); //2
	printf("\t1\n\t\t2\n\t\t\t3\n"); //3
	printf("%2d\n%4d\n%6d\n", 1, 2, 3); //4
	printf("%10.5f\n ", 12.234657); //5
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5); //8-9
	printf("Умножение %d на %d равен %d\n", 2000, 4, 2000 % 4); //8-9

	return 0;
}

int main2()
{
	setlocale(LC_CTYPE, "RUS");
	int N, K, S;
	N = 7;
	K = 45;
	S = 24;
	printf("«Сейчас %d часов %d минут 60 секунд\n»", N, K);
	printf("«Идет % d минута суток\n»", N * 60 + K);
	printf("«До полуночи осталось %d часов и %d минут»\n", 24 - N, 60 - K);
	printf("«С 8.00 прошло %d секунд»\n", S);
	printf("«Текущий час  = %2.2f суток  и текущая минута =  %2.2f часа\n»", N/24., K/60.);

	return 0;
}

int main3()
{
	int n, L, r,;
	n = 3;
	L = 2333;
	

	float n1, L1, r1;
	n1 = 2.0;
	L1 = 333.0;
	r1 = n1 / L1;
	printf("Дано:\n%5d\nd\n----\nОтвет:\n%+010.5fn", n, L, n /2333/0);
	return 0;

}
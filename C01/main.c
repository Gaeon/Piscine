#include <stdio.h>

#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"

int main()
{
	int nbr1;

	ft_ft(&nbr1);
	printf("%d", nbr1);
	printf("\n\n");

	int a = 5;
	int b = 10;
	printf("before : %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("after : %d %d", a, b);
	printf("\n\n");

	int div;
	int mod;
	ft_div_mod(5, 3, &div, &mod);
	printf("5 3 div: %d mid : %d", div, mod);
}
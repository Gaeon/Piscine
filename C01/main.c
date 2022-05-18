#include <stdio.h>

#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"

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
	printf("div: %d mid : %d", div, mod);
	printf("\n\n");

	a = 5; b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("div : %d mod : %d", a, b);
	printf("\n\n");

	char *str = "Hello";
	ft_putstr(str);
	printf("\n\n");

	printf("%d", ft_strlen(str));
	printf("\n\n");
	

}
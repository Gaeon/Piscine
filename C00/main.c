#include <unistd.h>
#include <stdio.h>

#include "ft_putchar/ft_putchar.c"
#include "ft_print_alphabet/ft_print_alphabet.c"
#include "ft_print_reverse_alphabet/ft_print_reverse_alphabet.c"
#include "ft_print_numbers/ft_print_numbers.c"
#include "ft_is_negative/ft_is_negative.c"

int main()
{
    char c;

    c = 'a';
    ft_putchar(c);
    printf("\n");

    ft_print_alphabet();
    printf("\n");

    ft_print_reverse_alphabet();
    printf("\n");

    ft_print_numbers();
    printf("\n");

    ft_is_negative(-1);
    ft_is_negative(1);
    printf("\n");

    return (0);
}


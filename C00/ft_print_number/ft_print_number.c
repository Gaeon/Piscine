void    ft_print_numbers()
{
    char    c;

    c = '0';
    while(c <= '9')
    {
        write(1, &c, 1);
        c++;
    }
}
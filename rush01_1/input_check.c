#include <stdlib.h>
#include <unistd.h>


void ft_print_error(void)
{
    write(2, "Error\n", 6);
}

int ft_atoi(char c)
{
    if (c >= '1' && c <= '4')
    {
        c = c - '0';
        return (c);
    }
	ft_print_error();
    return (-1);
}

int ft_check_countagm(char *str)
{
    int i;
    int count;
    int count2;

    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '1' && str[i] <= '4')
        {
            count++;
        }
        i++;
    }
    if (count != 16) 
    {
       return (1);
    }
    else if (i != 31) 
    {
        return (1);
    }
    return (0);
}

int ft_check_char(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (i % 2 == 0)
        {
            if(!(str[i] >= '1' && str[i] <= '4'))
            {
                return (1);
            }
        }
        else
        {
            if(str[i] >= '1' && str[i] <= '4')
            {
                return (1);
            }
        }
        i++;
    }
    return (0);
}


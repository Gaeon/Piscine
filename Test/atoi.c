#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *c)
{
	int	idx;
	int	sign;
	int	ret;

	idx = 0;
	sign = 1;
	ret = 0;
	while(c[idx] == '+' || c[idx] == '-')
	{
		if(c[idx] == '-')
			sign *= -1;
		idx++;
	}
	while(c[idx] >= '0' && c[idx] <= '9')
	{
		ret += ret * 10 + c[idx] - '0';
		idx++;
	}
	return (sign * ret);
}

int main()
{
	char str[10] ="  123";
	printf("%d %d", atoi(str), ft_atoi(str));
}
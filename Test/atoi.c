#include <unistd.h>

int	atoi(char *c)
{
	int	idx;
	int	sign;
	int	ret;

	idx = 0;
	sign = 1;
	ret = 0;
	while(c[idx] <= 32)
		idx++;
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
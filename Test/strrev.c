#include <stdio.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strrev(char *str)
{
	int		len;
	int 	idx;
	char	temp;

	len = ft_strlen(str);
	idx = 0;
	while(idx < len / 2)
	{
		temp = str[idx];
		str[idx] = str[len - idx - 1];
		str[len - idx - 1] = temp;
		idx++;
	}
	return (str);
}

int main()
{
	char str[10]  = "abcdef";
	
	printf("%s", ft_strrev(str));
	return (0);
}
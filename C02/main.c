#include <stdio.h>
#include <string.h>

#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"

int main()
{
	{
		char dest[5];
		char src1[3] = "hi";
		char src2[6] = "gaeon";
		printf("%s %s", strcpy(dest, src1), ft_strcpy(dest, src1));
		printf("%s %s", strcpy(dest, src2), ft_strcpy(dest, src2));
	}
	{
		char dest[8];
		char src[10] = "hi hello!";
		printf("%s %s", strncpy(dest, src1, 3), ft_strncpy(dest, src1, 3));
		printf("%s %s", strncpy(dest, src1, 8), ft_strncpy(dest, src1, 8));
	}
}
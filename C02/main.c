#include <stdio.h>
#include <string.h>

#include "ex00/ft_strcpy.c"

int main()
{
	{
		char dest[5];
		char src1[3] = "hi";
		char src2[6] = "gaeon";
		printf("%s %s", strcpy(dest, src1), ft_strcpy(dest, src1));
	}
}
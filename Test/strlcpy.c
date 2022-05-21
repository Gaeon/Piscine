#include <stdio.h>
#include <string.h>

int main()
{
	char dest[30] = "";
	char src[30] = "abced";
	printf("%lu", strlcpy(dest, src, 7));
}
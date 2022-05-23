#include <stdio.h>

int main()
{
	char temp[2];
	char c = 'A';
	
	temp[0] = c/16 + '0';
	temp[1] = c%16 + '0';
	printf("%c %c", temp[0], temp[1]);
}
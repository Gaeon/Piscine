#include <stdio.h>


void comb(int *arr, int *visit, int depth)
{
	int	i;

	if (depth == 4)
	{
		i = -1;
		while (++i < 4)
		{
			printf("%d", arr[i]);
		}	
		printf("\n");
	}
	else
	{
		i = -1;
		while (++i < 4)
		{
			if (visit[i] == 0)
			{
				visit[i] = 1;
				arr[depth] = i + 1;
				comb(arr, visit, depth + 1);
				visit[i] = 0;
			}
		}
	}
}

int main()
{
	int arr[4];
	int visit[4];
	

	for (int i = 0 ; i < 4 ; i++)
	{
		arr[i] = 0;
		visit[i] = 0;
	}
	comb(arr, visit, 0);
	
}
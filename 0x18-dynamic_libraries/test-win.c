#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 0; i < 6; i++)
	{
		int n = rand();
		printf("%d: %d\n", i, n);
	}
}
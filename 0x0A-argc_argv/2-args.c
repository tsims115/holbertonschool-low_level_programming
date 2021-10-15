#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 *
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (argv[i] != argv[argc])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (EXIT_SUCCESS);
}

#include "main.h"

int _isupper(int c)
{
	char a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (a == c)
			return (1);
	}
	return (0);
}

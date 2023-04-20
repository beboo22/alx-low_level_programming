#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - sum of all its parameters
* @n: n args
* Return: sum or if n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	unsigned int x;
	va_list cun;

	if (n)
	{
		va_start(arguments, n);
		for (x = 0; x < n; x++)
		{
			s += va_arg(cun, int);
		}
		va_end(cun);
	}
	return (s);
}

#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: counting the parameters passing the function.
 * @...: variable number of parameter to be calculated.
 * Return: If n == 0 - 0
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int i, sum = 0;
va_start(list, n);
for (i = 0; i < n; i++)
sum += va_arg(list, int);
va_end(list);
return (sum);
}

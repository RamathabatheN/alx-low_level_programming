#include <stdio.h>
#include <math.h>
/**
 * main - prints the large prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n;
long int max;
long int w;
n = 612852475143;
max = -1;
while (n % 2 == 0)
{
max = 2;
n /= 2;
}
for (w = 3; w <= sqrt(n); w = w + 2)
{
while (n % w == 0)
{
max = w;
n = n / w;
}
}
if (n > 2)
max = n;
printf("%ld\n", max);
return (0);
}

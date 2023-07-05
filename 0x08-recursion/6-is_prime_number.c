#include "main.h"
/**
*is_prime_number - return 1 if int is prime number and 0 if not
*@n: the number
*Return: 1 0r 0
*/
int is_prime_number(int n)
{
if (n < 0 || n == 1)
return (0);
return (primeNum(n, 2));
}

/**
*primeNum - confirms the prime num
*@n: numbers being checked
*@i: rand nums
*Return: 1 or 0
*/

int primeNum(int n, int i)
{
if (n == i)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
else
{
return (primeNum(n, i + 1));
}
}

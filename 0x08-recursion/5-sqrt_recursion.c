#include "main.h"
/**
*_sqrt_recursion-  function that returns the natural square root of a number.
*@n: integer being square root
*Return: square root
*/
int _sqrt_recursion(int n)
{
return (square_Num(n, 1));
}
/**
*square_Num- square of numbers
*@n: square of int
*@num: square two
*Return: squareroot
*/
int square_Num(int n, int num)
{
int sqr = num * num;

if (sqr == n)
{
return (num);
}
else if (sqr > n)
{
return (-1);
}
else
{
return (square_Num(n, num + 1));
}
}

#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
*is_digit - function 1
*@c: range of digits
*Return: value of c
*/
int is_digit(char c)
{
return (c >= '0' && c <= '9');
}

/**
*strint - string to int function
*@str: pointer to string
*Return: Num
*/

int strint(char *str)
{
int num = 0;
int i = 0;

while (str[i] != '\0')
{
if (!is_digit(str[i]))
{
return (-1);
}

num = num * 10 + str[i] - '0';
i++;
}

return (num);
}

/**
*main - function main calls the product
*@argc: arguments count
*@argv: arguments vector
*Return: 0 success
*/
int main(int argc, char *argv[])
{
int num1;
int num2;
int product;
if (argc != 3)
{
printf("Error\n");
exit(98);
}

num1 = strint(argv[1]);
num2 = strint(argv[2]);

if (num1 < 1 || num2 < 1)
{
printf("Error\n");
exit(98);
}
product = num1 *num2;
printf("%d\n", product);

return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
*main - change to number of coins from cents
*@argc: arguments count
*@argv: arguments vector
*Return: 0
*/
int main(int argc, char *argv[])
{
int cents;
int coins = 0;

if (argc != 2)
{
printf("Error\n");
return (0);
}
cents = atoi(argv[1]);
while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else
cents -= 1;
coins++;
}
printf("%d\n", coins);
return (0);
}

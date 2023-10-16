#include "main.h"
/**
*_strspn - function that gets the length of a prefix substring
*@s: pointer to string
*@accept: bytes required and being accepted
*Return: number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
break;
}
}
if (accept[j] == '\0')
{
return (i);
}
}
return (i);
}

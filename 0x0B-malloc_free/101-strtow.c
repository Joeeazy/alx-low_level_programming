#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*strtow - function that splits a string into words.
*@str: pointer to string being split
*Return: NULL if str == NULL or str == ""
*/
char **strtow(char *str)
{
char **arr;
int i;
int j;
int k;
int l;

if (str == NULL || str[0] == '\0')
return (NULL);
arr = malloc(sizeof(char *) * (strlen(str) + 1));

if (arr == NULL)
return (NULL);
for (j = 0; (i = 0;) str[i] != '\0'; i++);)
{
if (str[i] != ' ')
{
l = 0;
for (k = i; str[k] != ' ' && str[k] != '\0'; k++)
l++;
arr[j] = malloc(sizeof(char) * (l + 1));

if (arr[j] == NULL)
{
for (j--; j >= 0; j--)
free(arr[j]);
free(arr);
return (NULL);
}
for (k = 0; str[i] != ' ' && str[i] != '\0'; i++, k++)
arr[j][k] = str[i];
arr[j++][k] = '\0';
}
}
arr[j] = NULL;
return (arr);
}

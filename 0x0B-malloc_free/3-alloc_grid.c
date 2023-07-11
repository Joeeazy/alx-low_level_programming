#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid - pointer to a 2 dimensional array of integers.
*@width: width of array
*@height: height of array
*Return: a pointer to a 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
int **arr;
int i;
int j;

if (width <= 0 || height <= 0)
return (NULL);

arr = malloc(sizeof(int *) * height);

if (arr == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);

if (arr[i] == NULL)
{
for (; i >= 0; i--)
free(arr[i]);

free(arr);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
arr[i][j] = 0;
}
return (arr);
}

#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
*words_count- number of words count
*@str: the string being split
*Return: number of words in the string
*/
int words_count(char *str)
{
int count = 0;
int i;
int l = strlen(str);

for (i = 0; i < l; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}
return (count);
}

/**
*strtow - splits two strings
*@str: the string being split
*Return: NULL if str == NULL or str == ""
*/
char **strtow(char *str)
{
int word_count, wordlen, l, i, j = 0, k = 0;
char **words, p;

if (str == NULL || *str == '\0')
return (NULL);
word_count = words_count(str);
if (word_count == 0)
return (NULL);
words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
return (NULL);
l = strlen(str);
p = ' ';

for (i = 0; i < l; i++)
{
if (str[i] != ' ')
{
if (p  == ' ')
{
wordlen = 0;
while (str[i + wordlen] != '\0' && str[i + wordlen] != ' ')
wordlen++;
words[j] = malloc(sizeof(char) * wordlen + 1);
if (words[j] == NULL)
{
for (i = 0; i < j; i++)
free(words[i]);
free(words);
return (NULL);
}
k = 0;
j++;
}
words[j - 1][k++] = str[i];
}
p = str[i];
}
words[j] = NULL;
return (words);
}

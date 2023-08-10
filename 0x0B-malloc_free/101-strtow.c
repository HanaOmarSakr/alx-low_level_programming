#include <stdio.h>
#include <stdlib.h>
char **strtow(char *str)
{
	int len, i, j, words, in_word, index, start, end, word_len = 0;
	char **array = NULL;
	char *word = NULL;

	if (str == NULL || str[0] == '\0')
		return NULL;
	while (str[len] != '\0')
	{
		if (str[len] != ' ')
		{
			if (!in_word)
			{
				words++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		len++;
	}
	array = malloc((words + 1) * sizeof(char *));
	if (array == NULL)
		return NULL;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				start = i;
				in_word = 1;	}
		}
		else
		{
			if (in_word)
			{
				end = i - 1;
				word_len = end - start + 1;
				word = malloc((word_len + 1) * sizeof(char));
				if (word == NULL)
				{
					for (j = 0; j < index; j++)
						free(array[j]);
					free(array);
					return (NULL); 
				}
				for (j = 0; j < word_len; j++)
					word[j] = str[start + j];

				word[word_len] = '\0';
				array[index] = word;
				index++;
				in_word = 0;
			}
		}
	}
	if (in_word)
	{
		end = len - 1;
		word_len = end - start + 1;
		word = malloc((word_len + 1) * sizeof(char));
		if (word == NULL)
		{
			for (j = 0; j < index; j++)
				free(array[j]);
			free(array);
			return NULL; 
		}
		for (j = 0; j < word_len; j++)
			word[j] = str[start + j];
		word[word_len] = '\0';
		array[index] = word;
		index++;
	}
	array[index] = NULL;
	return array;
}


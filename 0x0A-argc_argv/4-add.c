#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 * Return: always 0 (success)
 */
int check_num(char *str)
{
	/*declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 * return: always 0 (success)
 */
{
	/*Declaring variables */
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoia(argv[count]); /*atoi --> convert string to int*/
			else
			{
				printf("error\n");
				return (1);
			}
			count++;
		}

		printf("%d\n", sum); /*print sum*/

		return (0);
	}
}

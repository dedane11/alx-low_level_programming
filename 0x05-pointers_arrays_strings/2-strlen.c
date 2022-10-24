#include <stdlib.h>

#include <time.h>

#include <stdio.h>

#include <ctype.h>

#include "main.h"



/**
* _strlen - Returns the length of a string
*
* @s: String to count
*
* Return: String length
*/

int _strlen(char *s)

{

	int c = 0;

	for (; *s != '\0'; s++)

	{

		c++;

	}

	return (c);

}

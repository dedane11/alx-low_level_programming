#include <time.h>

#include <stdio.h>



#include "main.h"


/**
* _isalpha - checks for alphabetic character
*
* @c: c is an ascii character
*
* Return: 1 (if letter)
*/

int _isalpha(int c)

{

	char lower, upper;

	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)

	{

		for (upper = 'A'; upper <= 'Z'; upper++)

		{

			if (c == lower || c == upper)

				isletter = 1;

		}

	}

	return (isletter);

}

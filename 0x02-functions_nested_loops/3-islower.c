#include <stdlib.h>

#include <time.h>

#include <stdio.h>



#include "main.h"


/**
* _islower - checks for lowercase
*
* @c: c is an ascii character
*
* Return: 1 if lowercase
*/

int _islower(int c)

{

	char i;

	int islower = 0;

	for (i = 'a'; i <= 'z'; i++)

	{

		if (i == c)

			islower = 1;

	}

	return (islower);

}

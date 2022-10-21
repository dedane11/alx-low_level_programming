#include <stdlib.h>

#include <time.h>

#include <stdio.h>



#include "main.h"


/**
* print_sign - prints the sign of a number
*
* @n: n is an integer
*
* Return: 1 (if positive), 0 (if zero), -1 (if negative)
*/

int print_sign(int n)

{

	int value;

	if (n > 0)

	{

		value = 1;

		_putchar('+');

	}

	else if (n == 0)

	{

		value = 0;

		_putchar('0');

	}

	else

	{

		value = -1;

		_putchar('-');

	}

	return (value);

}

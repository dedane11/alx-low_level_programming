#include <stdlib.h>

#include <time.h>

#include <stdio.h>



#include "main.h"




/**
* _abs - computes the absolute value of an integer
*
* @n: is an integer
*
* Return: integer
*/

int _abs(int n)

{

	if (n >= 0)

		return (n);

	else

		return (n * -1);

}

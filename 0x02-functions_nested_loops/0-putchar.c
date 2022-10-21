#include "main.h"


/**
* main - prints Chukwudum
*
* Description: prints Chukwudum
*
* Return: 0 (Success)
*/

int main(void)

{

	char text[10] = "Chukwudum";

	int i = 0;

	for (i = 0; i < 9; i++)

	{

		_putchar(text[i]);

	}

	_putchar('\n');

	return (0);

}

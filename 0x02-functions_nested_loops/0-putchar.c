#include "main.h"
/**
 * main - prints _putchar, followed by a new line
 *
 * Return: always 0 (success)
*/
int main()
{
	char output="_putchar";
	int c;
	for (c=0;c<8;c++)
	{
		_putchar(output[c]);
	}
	_putchar('\n');
	return (0);
}

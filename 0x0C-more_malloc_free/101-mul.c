#include "main.h"

int _isdigit(char *str);
void _print_result(int *result, int size);
int _strlen(char *str);
void _multiply(char *num1, char *num2);

/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: arguments array.
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	_multiply(argv[1], argv[2]);

	return (0);
}

/**
 * _isdigit - chaecks if number is +ve digit
 * @str: string of chars.
 *
 * Return: 1 if true,  0 if false
*/

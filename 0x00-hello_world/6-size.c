#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char i;
int j;
long int a;
long long int b;
float c;

printf("Size of a char: %ld byte(s)\n", sizeof(j));
printf("Size of an int: %ld byte(s)\n", sizeof(j));
printf("Size of a long int: %ld byte(s)\n", sizeof(a));
printf("Size of a long long int: %ld byte(s)\n", sizeof(b));
printf("Size of a float: %ld byte(s)\n", sizeof(c));
return (0);
}

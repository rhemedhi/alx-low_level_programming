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

printf("size of a char:%u byte(s)\n", sizeof(i));
printf("size of an int:%u byte(s)\n", sizeof(j));
printf("size of a long int:%u byte(s)\n", sizeof(a));
printf("size of a long long int:%u byte(s)\n", sizeof(b));
printf("size of a float:%u byte(s)\n", sizeof(c));
return (0);
}

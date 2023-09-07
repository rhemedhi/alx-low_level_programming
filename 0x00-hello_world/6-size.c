#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
float j;
double z;
long int a;
long long int b;

printf("size of int:%u\n", sizeof(i));
printf("size of float:%u\n", sizeof(j));
printf("size of double:%u\n", sizeof(z));
printf("size of long int:%u\n", sizeof(a));
printf("size of long long int:%u\n", sizeof(b));
return (0);
}
